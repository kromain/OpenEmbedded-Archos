/*
 *
 *  archos-tscalib - Simple touchscreen calibration application
 *
 *  Copyright (C) 2010  Jean-Christophe Rona <rona@archos.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include <errno.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <linux/input.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "DroidSans.h"

// Some paths
#define POINTERCAL_PATH		"/etc/pointercal"

#define POINTERCAL_MULTIPLIER	65536
#define TS_DELTA_THRESHOLD	10
#define TS_EVENT_NUMBER		20

// 32 bits
#define FB_DEPTH		4

// Some colors
#define COLOR_BLACK		0x000000
#define COLOR_WHITE		0xFFFFFF
#define COLOR_RED		0xFF0000
#define COLOR_GREEN		0x00FF00
#define COLOR_BLUE		0x0000FF
#define COLOR_YELLOW		0xFFFF00
#define COLOR_MAGENTA		0xFF00FF
#define COLOR_CYAN		0x00FFFF

struct ts_event {
	struct timeval time;
	unsigned short type;
	unsigned short code;
	unsigned int value;
};

struct display_data {
	int line_length;
	int depth;
	int byte_depth;
	int screen_width;
	int screen_height;
	int fb_width;
	int fb_height;
	int fb_xoffset;
	int fb_yoffset;

	FILE * fb_file;
	long fb_size;
	unsigned char *fb_base;
	unsigned char *fb_save;
};

struct calibration_data {
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int ts_x1;
	int ts_y1;
	int ts_x2;
	int ts_y2;
	int ts_x3;
	int ts_y3;
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;
	double multiplier;
};

char fb_path[260];
char ts_path[260];

int ts_fd = 0;

struct display_data display = {
	.line_length = 0,
	.depth = 0,
	.byte_depth = 0,
	.screen_width = 0,
	.screen_height = 0,
	.fb_width = 0,
	.fb_height = 0,
	.fb_xoffset = 0,
	.fb_yoffset = 0,

	.fb_file = NULL,
	.fb_size = 0,
	.fb_base = NULL,
	.fb_save = NULL,
};

int ts_tmp_x = 0;
int ts_tmp_y = 0;


/*
 * Open the framebuffer
 */
int open_fb(void)
{
	struct fb_fix_screeninfo finfo;
	struct fb_var_screeninfo vinfo;
	int fb_offset;

	if (display.fb_file)
		return 1;

	display.fb_file = fopen(fb_path, "r+");
	if (!display.fb_file)
		return -1;

	memset(&finfo, 0, sizeof(struct fb_fix_screeninfo));
	memset(&vinfo, 0, sizeof(struct fb_var_screeninfo));

	if (ioctl(fileno(display.fb_file), FBIOGET_FSCREENINFO, &finfo)) {
		fprintf(stderr, "%s: %s\n", __FUNCTION__, strerror(errno));
		fclose(display.fb_file);
		display.fb_file = NULL;
		return -1;
	}

	if (ioctl(fileno(display.fb_file), FBIOGET_VSCREENINFO, &vinfo)) {
		fprintf(stderr, "%s: %s\n", __FUNCTION__, strerror(errno));
		fclose(display.fb_file);
		display.fb_file = NULL;
		return -1;
	}

	display.line_length = finfo.line_length;
	display.fb_size = finfo.smem_len;
	display.depth = vinfo.bits_per_pixel;
	display.byte_depth = display.depth/8;
	display.screen_width = vinfo.xres;
	display.screen_height = vinfo.yres;
	display.fb_width = vinfo.xres_virtual;
	display.fb_height = vinfo.yres_virtual;
	display.fb_xoffset = vinfo.xoffset;
	display.fb_yoffset = vinfo.yoffset;

	if (display.byte_depth != FB_DEPTH) {
		fprintf(stderr, "%s : Unsupported framebuffer depth (%d)!\n", __FUNCTION__, display.depth);
		fclose(display.fb_file);
		display.fb_file = NULL;
		return -1;
	}

	fb_offset = display.fb_yoffset * display.line_length + display.fb_xoffset * display.byte_depth;

	display.fb_base = (unsigned char *)mmap(0, display.fb_size, PROT_READ | PROT_WRITE, MAP_SHARED, fileno(display.fb_file), 0);
	display.fb_base += fb_offset;
	display.fb_size -= fb_offset;

	if ((int)display.fb_base == -1) {
		fprintf(stderr, "%s : failed to map framebuffer device to memory\n", __FUNCTION__);
		fclose(display.fb_file);
		display.fb_file = NULL;
		return -1;
	}

	if ((display.fb_save = malloc(display.fb_size)) == NULL) {
		fprintf(stderr, "%s : could not malloc save buffer.\n", __FUNCTION__);
		fclose(display.fb_file);
		display.fb_file = NULL;
		return -1;
	}

	memcpy(display.fb_save, display.fb_base, display.fb_size);

	printf("Framebuffer properties:\n"
		 "display.line_length = %d,\n"
		 "display.fb_size = %d,\n"
		 "display.depth = %d,\n"
		 "display.screen_width = %d,\n"
		 "display.screen_height = %d,\n"
		 "display.fb_width = %d,\n"
		 "display.fb_height = %d,\n"
		 "display.fb_xoffset = %d,\n"
		 "display.fb_yoffset = %d\n\n",
		display.line_length, display.fb_size, display.depth,
		display.screen_width, display.screen_height, display.fb_width,
		display.fb_height, display.fb_xoffset, display.fb_yoffset);

	return 0;
}

/*
 * Close the framebuffer
 */
void close_fb(void)
{
	memcpy(display.fb_base, display.fb_save, display.fb_size);

	if (display.fb_save != NULL)
		free(display.fb_save);

	if (display.fb_file != NULL) {
		fclose(display.fb_file);
		display.fb_file = NULL;
	}
}

/*
 * Close the touchscreen input device
 */
void close_ts(void)
{
	close(ts_fd);
	ts_fd = 0;
}

/*
 * Open the touchscreen input device
 */
int open_ts(int mode)
{
	if (ts_fd)
		close_ts();

	ts_fd = open(ts_path, mode);
	if (!ts_fd)
		return -1;

	return 0;
}

/*
 * Draw a pixel on screen
 */
void put_pixel(int x, int y, unsigned long color, unsigned char alpha)
{
	unsigned char * ptr;

	if (x < 0 || x >= display.fb_width)
		return;

	if (y < 0 || y >= display.fb_height)
		return;

	if (open_fb() < 0) {
		fprintf(stderr, "%s: Cannot put pixel at %d,%d: cannot open fb\n", __FUNCTION__, x, y);
		return;
	}

	ptr = display.fb_base + y*display.line_length + x*display.byte_depth;

	*(ptr++) = ((color & 0xFF) * alpha + *ptr * (0xFF - alpha)) >> 8;
	*(ptr++) = (((color >> 8) & 0xFF) * alpha + *ptr * (0xFF - alpha)) >> 8;
	*(ptr++) = (((color >> 16) & 0xFF) * alpha + *ptr * (0xFF - alpha)) >> 8;
	*(ptr++) = 0xFF;
}

/*
 * Fill the screen
 */
void fill_screen(unsigned long color)
{
	int i, j;
	unsigned char * ptr;

	if (open_fb() < 0) {
		fprintf(stderr, "%s: Cannot fill screen: cannot open fb\n", __FUNCTION__);
		return;
	}

	ptr = display.fb_base;

	fseek(display.fb_file, 0, SEEK_SET);
	for (j = 0; j < display.screen_height; j++) {
		for (i = 0; i < display.screen_width; i++) {
			ptr = display.fb_base + j*display.line_length + i*display.byte_depth;
			*(ptr++) = color & 0xFF;
			*(ptr++) = (color >> 8) & 0xFF;
			*(ptr++) = (color >> 16) & 0xFF;
			*(ptr++) = 0xFF;
		}
	}
}

/*
 * Draw a cross on the screen
 */
void draw_cross(int x, int y, int length, int thickness, unsigned long color)
{
	int i,j;

	printf("%s: at (%d,%d)\n", __FUNCTION__, x, y);

	for (j = 0; j < thickness; j++) {
		for (i = 0; i < length; i++) {
			put_pixel(x - (length - 1)/2 + i, y - (thickness - 1)/2 + j, color, 0xFF);
		}
	}

	for (j = 0; j < thickness; j++) {
		for (i = 0; i < length; i++) {
			put_pixel(x - (thickness - 1)/2 + j, y - (length - 1)/2 + i, color, 0xFF);
		}
	}
}

/*
 * Write a character on the screen
 */
int put_char(const unsigned char c, int x, int y, unsigned long color)
{
	int i, j;
	const struct fontentry *entry = &(fontstruct.fontentries[c]);

	for (j = 0; j < entry->height; j++) {
		for (i = 0; i < entry->width; i++) {
			put_pixel(x + i + entry->x_offset, y + j + (fontstruct.base - entry->y_offset), color, entry->data[j*entry->width + i]);
		}
	}

	return entry->x_space;
}

/*
 * Compute the graphic length of the n first characters of a string (or the whole string if length = 0)
 */
int graphic_strlen(char * string, int length)
{
	int i;
	int graphic_length = 0;

	if (length == 0)
		length = strlen(string);

	for (i = 0; i < length; i++) {
		graphic_length += fontstruct.fontentries[string[i]].x_space;
	}

	return graphic_length;
}

/*
 * Write a string on the screen (one line)
 */
int print_inline(char * string, int x, int y, unsigned long color)
{
	int i;
	int length;
	int space = 0;

	length = strlen(string);

	for (i = 0; i < length; i++) {
		space += put_char(string[i], x + space, y, color);
	}

	return space;
}

/*
 * Write a string on the screen
 * If x (or y) is negative, the string will be horizontally (or vertically) centered
 */
void print(char * string, int x, int y, unsigned long color)
{
	int i;
	int length, glength;
	int xoff, x_centered;
	int partial_length;
	char *str, *partial_str;

	printf("%s: %s at (%d,%d)\n", __FUNCTION__, string, x, y);

	str = partial_str = strdup(string);
	length = strlen(str);

	if (x < 0) {
		x_centered = 1;
		xoff = 0;
	} else {
		x_centered = 0;
		xoff = x;
	}

	if (y < 0)
		y = (display.screen_height - fontstruct.base)/2;
	
	while (((long)partial_str - (long)str) < length) {
		partial_length = strlen(partial_str);

		while ((xoff + graphic_strlen(partial_str, partial_length)) > display.screen_width) {
			partial_length--;
			while (partial_length > 0 && partial_str[partial_length] != ' ') {
				partial_length--;
			}
		}

		if (x_centered)
			x = (display.screen_width - graphic_strlen(partial_str, partial_length))/2;
	
		partial_str[partial_length] = '\0';
		print_inline(partial_str, x, y, color);

		y += fontstruct.size_y;
		partial_str += partial_length + 1;
	}

	free(str);
}

/*
 * Get one touch event
 */
void get_touch_event(int *x, int *y)
{
	struct ts_event event;

	if (open_ts(O_RDONLY) < 0) {
		fprintf(stderr, "%s: Cannot open touchscreen\n", __FUNCTION__);
		return;
	}

	while (read(ts_fd, &event, sizeof(struct ts_event)) == sizeof(struct ts_event)) {
		if (event.type == EV_SYN) {
			*x = ts_tmp_x;
			*y = ts_tmp_y;
			return;
		} else if (event.type == EV_ABS) {
			switch(event.code) {
				case ABS_X:
					ts_tmp_x = event.value;
					break;
				case ABS_Y:
					ts_tmp_y = event.value;
					break;
				default:
//					fprintf(stderr, "%s: unknown event code (%d) (value = %d)\n", __FUNCTION__, event.code, event.value);
					break;
			}
		} else {
//			fprintf(stderr, "%s: unknown event type (%d) (code = %d, value = %d)\n", __FUNCTION__, event.type, event.code, event.value);
		}
	}

	close_ts();
}

/*
 * Flush the touchscreen event queue
 */
void flush_ts(void)
{
	struct ts_event event;

	if (open_ts(O_RDONLY | O_NONBLOCK) < 0) {
		fprintf(stderr, "%s: Cannot open touchscreen\n", __FUNCTION__);
		return;
	}

	while (read(ts_fd, &event, sizeof(struct ts_event)) == sizeof(struct ts_event));

	close_ts();
}

/*
 * Get averaged and stable coordinates from TS_EVENT_NUMBER touch events
 */
void get_averaged_coordinates(int * ex, int * ey)
{
	int x_tmp, y_tmp;
	int xmin = 0, ymin = 0;
	int xmax = 0, ymax = 0;
	int i;

	do {
		get_touch_event(&x_tmp, &y_tmp);
		xmin = xmax = *ex = x_tmp;
		ymin = ymax = *ey = y_tmp;

		for (i = 1; i < TS_EVENT_NUMBER; i++) {
			get_touch_event(&x_tmp, &y_tmp);

			*ex += x_tmp;
			*ey += y_tmp;

			if (x_tmp < xmin)
				xmin = x_tmp;
			else if (x_tmp  > xmax)
				xmax = x_tmp;

			if (y_tmp < ymin)
				ymin = y_tmp;
			else if (y_tmp  > ymax)
				ymax = y_tmp;
		}
	} while ((xmax - xmin) > TS_DELTA_THRESHOLD || (ymax - ymin) > TS_DELTA_THRESHOLD);

	*ex /= TS_EVENT_NUMBER;
	*ey /= TS_EVENT_NUMBER;

	return;
}

/*
 * Wait until no event occurs within a given duration
 */
void wait_for_no_event(int duration)
{
	struct ts_event event;

	flush_ts();

	if (open_ts(O_RDONLY | O_NONBLOCK) < 0) {
		fprintf(stderr, "%s: Cannot open ts\n", __FUNCTION__);
		return;
	}

	usleep(duration);

	while (read(ts_fd, &event, sizeof(struct ts_event)) == sizeof(struct ts_event)) {
		while (read(ts_fd, &event, sizeof(struct ts_event)) == sizeof(struct ts_event));
		usleep(duration);
	}

	close_ts();
}

/*
 * Compute the calibration data
 */
void compute_calibration(struct calibration_data * data)
{
	long denominator;

	denominator = (data->ts_x1 - data->ts_x3) * (data->ts_y2 - data->ts_y3) -
			(data->ts_x2 - data->ts_x3) * (data->ts_y1 - data->ts_y3);

	if (denominator == 0) {
		fprintf(stderr, "%s: denominator is null o_O !\n", __FUNCTION__);
		return;
	}

	data->a = (data->x1 - data->x3) * (data->ts_y2 - data->ts_y3) -
		(data->x2 - data->x3) * (data->ts_y1 - data->ts_y3);
	data->b = (data->ts_x1 - data->ts_x3) * (data->x2 - data->x3) -
		(data->ts_x2 - data->ts_x3) * (data->x1 - data->x3);
	data->c = data->x1 * (data->ts_x2 * data->ts_y3 - data->ts_x3 * data->ts_y2) -
		data->x2 * (data->ts_x1 * data->ts_y3 - data->ts_x3 * data->ts_y1) +
		data->x3 * (data->ts_x1 * data->ts_y2 - data->ts_x2 * data->ts_y1);

	data->d = (data->y1 - data->y3) * (data->ts_y2 - data->ts_y3) -
		(data->y2 - data->y3) * (data->ts_y1 - data->ts_y3);
	data->e = (data->ts_x1 - data->ts_x3) * (data->y2 - data->y3) -
		(data->ts_x2 - data->ts_x3) * (data->y1 - data->y3);
	data->f = data->y1 * (data->ts_x2 * data->ts_y3 - data->ts_x3 * data->ts_y2) -
		data->y2 * (data->ts_x1 * data->ts_y3 - data->ts_x3 * data->ts_y1) +
		data->y3 * (data->ts_x1 * data->ts_y2 - data->ts_x2 * data->ts_y1);

	data->multiplier = POINTERCAL_MULTIPLIER;

	data->a = (data->a * data->multiplier)/denominator;
	data->b = (data->b * data->multiplier)/denominator;
	data->c = (data->c * data->multiplier)/denominator;
	data->d = (data->d * data->multiplier)/denominator;
	data->e = (data->e * data->multiplier)/denominator;
	data->f = (data->f * data->multiplier)/denominator;
}

/*
 * Write the pointercal file
 */
void write_pointercal(struct calibration_data * data)
{
	FILE * f;

	f = fopen(POINTERCAL_PATH, "w");
	if (!f) {
		fprintf(stderr, "%s: cannot open %s\n", __FUNCTION__, POINTERCAL_PATH);
		return;
	}

	printf("%s: %d %d %d %d %d %d %d\n", __FUNCTION__, (int) data->a, (int) data->b, (int) data->c, (int) data->d, (int) data->e, (int) data->f, (int) data->multiplier);
	fprintf(f, "%d %d %d %d %d %d %d", (int) data->a, (int) data->b, (int) data->c, (int) data->d, (int) data->e, (int) data->f, (int) data->multiplier);

	fclose(f);
}

/*
 * Main function
 */
int main(int argc, char ** argv)
{
	struct calibration_data data;
	int ret;

	if (argc < 3) {
		printf("Syntax: %s <fb path> <ts path>\n", argv[0]);
		return 1;
	}

	strcpy(fb_path, argv[1]);
	strcpy(ts_path, argv[2]);

	if (open_fb() < 0) {
		fprintf(stderr, "Cannot open fb\n");
	}

	data.x1 = 20;
	data.y1 = 60;
	data.x2 = display.screen_width - 20;
	data.y2 = 60;
	data.x3 = display.screen_width/2;
	data.y3 = display.screen_height - 60;

	fill_screen(COLOR_BLACK);
	wait_for_no_event(500000);
	print("Please click on the cross for few seconds", -1, 20, COLOR_WHITE);

	draw_cross(data.x1, data.y1, 13, 3, COLOR_CYAN);
	get_averaged_coordinates(&data.ts_x1, &data.ts_y1);
	printf("First cross at (%d,%d)\n\n", data.ts_x1, data.ts_y1);

	draw_cross(data.x2, data.y2, 13, 3, COLOR_YELLOW);
	wait_for_no_event(300000);
	get_averaged_coordinates(&data.ts_x2, &data.ts_y2);
	printf("Second cross at (%d,%d)\n\n", data.ts_x2, data.ts_y2);

	draw_cross(data.x3, data.y3, 13, 3, COLOR_GREEN);
	wait_for_no_event(300000);
	get_averaged_coordinates(&data.ts_x3, &data.ts_y3);
	printf("Third cross at (%d,%d)\n\n", data.ts_x3, data.ts_y3);

	compute_calibration(&data);
	write_pointercal(&data);

	fill_screen(COLOR_BLACK);
	print("Touchscreen calibration successful !", -1, -1, COLOR_MAGENTA);
	sleep(2);

	close_fb();
	return 0;
}
