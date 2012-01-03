#ifndef _FONT_H
#define _FONT_H

struct fontentry {
	int x_offset;
	int y_offset;
	int x_space;
	int y_space;
	int width;
	int height;
	const unsigned char data[16 * 16];
};

struct fontstruct {
	int size_x;
	int size_y;
	int base;
	struct fontentry fontentries[256];
};



static const struct fontstruct fontstruct = {
	16,
	16,
	14,
	{
		/* 'X' - 0 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 1 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 2 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 3 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 4 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 5 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 6 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 7 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 8 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 9 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 10 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 11 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 12 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 13 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 14 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 15 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 16 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 17 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 18 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 19 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 20 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 21 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 22 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 23 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 24 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 25 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 26 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 27 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 28 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 29 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 30 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 31 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 32 */
		{
			0, // X offset from the origin in pixels
			0, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			0, // width of character
			0, // height of character
			{
			},
		},
		/* 'X' - 33 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			2, // width of character
			12, // height of character
			{
				254,218,
				249,206,
				244,194,
				239,182,
				234,170,
				229,158,
				224,146,
				219,134,
				214,122,
				  0,  0,
				209,204,
				210,205,
			},
		},
		/* 'X' - 34 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			7, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			4, // height of character
			{
				245,129,  0,245,129,
				224,108,  0,224,108,
				203, 87,  0,203, 87,
				182, 66,  0,182, 66,
			},
		},
		/* 'X' - 35 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			12, // height of character
			{
				  0,  0, 19,255, 21, 51,237,  0,
				  0,  0, 57,238,  0, 89,199,  0,
				  0,  0, 95,201,  0,127,161,  0,
				  0,  0,133,163,  0,165,123,  0,
				  0,255,255,255,255,255,255,255,
				  0, 20,228, 80, 31,252, 44, 20,
				 20, 47,251, 29, 81,227, 20,  0,
				255,255,255,255,255,255,255,  0,
				  0,130,165,  0,163,129,  0,  0,
				  0,166,127,  0,201, 92,  0,  0,
				  0,202, 89,  0,238, 55,  0,  0,
				  0,238, 51, 21,255, 18,  0,  0,
			},
		},
		/* 'X' - 36 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			14, // height of character
			{
				  0,  0,  0,255, 20,  0,  0,
				  0,  0,  0,255, 20,  0,  0,
				 13,143,225,255,246,205,103,
				180,227, 98,255, 86,126, 81,
				249,107,  0,255, 20,  0,  0,
				208,191, 22,255, 20,  0,  0,
				 41,208,252,255,103,  8,  0,
				  0,  0, 60,255,241,228, 56,
				  0,  0,  0,255, 30,179,217,
				  0,  0,  0,255, 20,111,247,
				180,106, 64,255,121,234,165,
				163,224,251,255,215,127,  8,
				  0,  0,  0,255, 20,  0,  0,
				  0,  0,  0,255, 20,  0,  0,
			},
		},
		/* 'X' - 37 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			13, // X advance in pixels
			0, // Y advance in pixels
			11, // width of character
			12, // height of character
			{
				 45,209,250,201, 36,  0,  0, 59,237, 15,  0,
				194,141, 14,152,185,  0,  0,192,119,  0,  0,
				247, 49,  0, 53,245,  0, 71,231, 10,  0,  0,
				246, 52,  0, 53,245,  0,203,107,  0,  0,  0,
				188,143, 14,152,190, 83,223,  6,  0,  0,  0,
				 40,205,250,206, 45,213, 95,  0,  0,  0,  0,
				  0,  0,  0,  0, 95,214, 48,209,250,203, 38,
				  0,  0,  0,  5,222, 83,194,141, 14,152,185,
				  0,  0,  0,107,204,  0,247, 49,  0, 53,245,
				  0,  0, 10,230, 71,  0,246, 49,  0, 53,246,
				  0,  0,119,193,  0,  0,189,142, 16,152,190,
				  0, 15,237, 59,  0,  0, 40,205,250,206, 42,
			},
		},
		/* 'X' - 38 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			12, // height of character
			{
				  0, 31,180,243,247,186, 33,  0,  0,  0,
				  0,195,217, 73, 70,217,195,  0,  0,  0,
				  0,250,117,  0,  0,116,249,  0,  0,  0,
				  0,220,161,  0,  8,197,194,  0,  0,  0,
				  0,109,253,116,210,219, 33,  0,  0,  0,
				  0, 27,238,255,169, 12,  0,  0,  0,  0,
				 40,231,198,194,230, 32,  0,  0,148,216,
				191,212,  8, 15,208,218, 21, 24,242,115,
				249,128,  0,  0, 25,223,203,200,210,  7,
				237,152,  0,  0,  0, 49,254,250, 34,  0,
				149,250,120, 67,104,217,226,243,163,  1,
				  8,141,230,253,228,146, 19, 67,248,140,
			},
		},
		/* 'X' - 39 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			2, // width of character
			4, // height of character
			{
				245,129,
				224,108,
				203, 87,
				182, 66,
			},
		},
		/* 'X' - 40 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			5, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			15, // height of character
			{
				  0,  6,203,169,  0,
				  0,123,242, 23,  0,
				 11,239,136,  0,  0,
				 91,255, 36,  0,  0,
				164,216,  0,  0,  0,
				213,164,  0,  0,  0,
				243,133,  0,  0,  0,
				253,122,  0,  0,  0,
				245,131,  0,  0,  0,
				218,160,  0,  0,  0,
				170,213,  0,  0,  0,
				 99,255, 32,  0,  0,
				 15,243,132,  0,  0,
				  0,131,239, 20,  0,
				  0,  8,205,165,  0,
			},
		},
		/* 'X' - 41 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			5, // X advance in pixels
			0, // Y advance in pixels
			4, // width of character
			15, // height of character
			{
				166,205,  6,  0,
				 21,241,120,  0,
				  0,135,238, 11,
				  0, 36,255, 91,
				  0,  0,218,165,
				  0,  0,165,213,
				  0,  0,134,242,
				  0,  0,122,253,
				  0,  0,131,245,
				  0,  0,161,218,
				  0,  0,212,171,
				  0, 32,255, 99,
				  0,131,242, 14,
				 19,239,128,  0,
				162,207,  8,  0,
			},
		},
		/* 'X' - 42 */
		{
			0, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			7, // height of character
			{
				  0,  0,  0,238,237,  0,  0,  0,
				  0,  0,  0,202,201,  0,  0,  0,
				155,137, 69,174,174, 69,135,161,
				146,180,203,255,255,203,180,149,
				  0,  0,139,214,226,140,  0,  0,
				  0, 79,255, 81, 86,255, 83,  0,
				  0,110,184,  0,  0,177,118,  0,
			},
		},
		/* 'X' - 43 */
		{
			0, // X offset from the origin in pixels
			10, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			9, // height of character
			{
				  0,  0,  0,  0,  8,  1,  0,  0,  0,
				  0,  0,  0,  0,255, 44,  0,  0,  0,
				  0,  0,  0,  0,255, 44,  0,  0,  0,
				  0,  0,  0,  0,255, 44,  0,  0,  0,
				  8,255,255,255,255,255,255,255, 48,
				  1, 44, 44, 44,255, 80, 44, 44,  8,
				  0,  0,  0,  0,255, 44,  0,  0,  0,
				  0,  0,  0,  0,255, 44,  0,  0,  0,
				  0,  0,  0,  0, 48,  8,  0,  0,  0,
			},
		},
		/* 'X' - 44 */
		{
			0, // X offset from the origin in pixels
			2, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			4, // height of character
			{
				  0,206,219,
				 27,254,112,
				111,229,  9,
				205, 94,  0,
			},
		},
		/* 'X' - 45 */
		{
			1, // X offset from the origin in pixels
			5, // Y offset from the origin in pixels
			5, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			2, // height of character
			{
				255,255,255,
				 80, 80, 80,
			},
		},
		/* 'X' - 46 */
		{
			0, // X offset from the origin in pixels
			2, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			2, // height of character
			{
				 86,246, 85,
				 85,248, 84,
			},
		},
		/* 'X' - 47 */
		{
			-1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			12, // height of character
			{
				  0,  0,  0,  0,  0,129,224,  2,
				  0,  0,  0,  0,  4,230,121,  0,
				  0,  0,  0,  0, 84,249, 22,  0,
				  0,  0,  0,  0,190,167,  0,  0,
				  0,  0,  0, 40,255, 61,  0,  0,
				  0,  0,  0,145,212,  0,  0,  0,
				  0,  0, 10,240,107,  0,  0,  0,
				  0,  0,101,243, 13,  0,  0,  0,
				  0,  0,206,152,  0,  0,  0,  0,
				  0, 56,255, 47,  0,  0,  0,  0,
				  0,162,197,  0,  0,  0,  0,  0,
				 19,247, 92,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 48 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				  0, 73,212,247,205, 59,  0,
				 37,247,156, 65,161,240, 26,
				144,226,  3,  0,  5,228,129,
				205,161,  0,  0,  0,162,197,
				238,130,  0,  0,  0,131,234,
				252,118,  0,  0,  0,119,250,
				251,119,  0,  0,  0,120,251,
				236,130,  0,  0,  0,131,237,
				201,161,  0,  0,  0,162,205,
				133,225,  3,  0,  5,228,142,
				 28,242,156, 64,161,246, 36,
				  0, 62,208,248,210, 69,  0,
			},
		},
		/* 'X' - 49 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			12, // height of character
			{
				  0,  7,136,252, 96,
				 55,214,173,247, 96,
				158,120,  1,251, 96,
				  0,  0,  0,255, 96,
				  0,  0,  0,255, 96,
				  0,  0,  0,255, 96,
				  0,  0,  0,255, 96,
				  0,  0,  0,255, 96,
				  0,  0,  0,255, 96,
				  0,  0,  0,255, 96,
				  0,  0,  0,255, 96,
				  0,  0,  0,255, 96,
			},
		},
		/* 'X' - 50 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			12, // height of character
			{
				 25,145,226,252,226,129,  4,  0,
				186,212,100, 61,116,250,136,  0,
				 17,  6,  0,  0,  0,149,234,  0,
				  0,  0,  0,  0,  0,123,248,  0,
				  0,  0,  0,  0,  0,179,194,  0,
				  0,  0,  0,  0, 59,254, 76,  0,
				  0,  0,  0, 30,230,154,  0,  0,
				  0,  0, 22,216,184,  5,  0,  0,
				  0, 15,206,195, 10,  0,  0,  0,
				 10,195,202, 14,  0,  0,  0,  0,
				183,237, 93, 76, 76, 76, 76, 34,
				255,255,255,255,255,255,255,116,
			},
		},
		/* 'X' - 51 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				 44,162,231,252,228,144, 11,
				184,185, 90, 61,109,243,163,
				  7,  0,  0,  0,  0,136,245,
				  0,  0,  0,  0,  0,145,228,
				  0,  0,  0, 10, 88,244, 99,
				  0,  0,255,255,237, 95,  0,
				  0,  0, 56, 68,142,253,106,
				  0,  0,  0,  0,  0,162,226,
				  0,  0,  0,  0,  0,121,250,
				  0,  0,  0,  0,  0,177,215,
				186,102, 62, 69,153,255, 96,
				152,225,251,246,200, 87,  0,
			},
		},
		/* 'X' - 52 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			12, // height of character
			{
				  0,  0,  0,  0,  0,122,255, 96,  0,
				  0,  0,  0,  0, 64,239,243, 96,  0,
				  0,  0,  0, 24,231,114,239, 96,  0,
				  0,  0,  3,191,171,  1,248, 96,  0,
				  0,  0,134,209, 11,  0,254, 96,  0,
				  0, 74,234, 32,  0,  0,255, 96,  0,
				 30,233, 66,  0,  0,  0,255, 96,  0,
				201,175, 76, 76, 76, 76,255,143, 76,
				255,255,255,255,255,255,255,255,255,
				  0,  0,  0,  0,  0,  0,255, 96,  0,
				  0,  0,  0,  0,  0,  0,255, 96,  0,
				  0,  0,  0,  0,  0,  0,255, 96,  0,
			},
		},
		/* 'X' - 53 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				153,255,255,255,255,255, 44,
				172,191, 76, 76, 76, 76, 13,
				191,146,  0,  0,  0,  0,  0,
				210,125,  0,  0,  0,  0,  0,
				229,105,  0,  0,  0,  0,  0,
				247,238,249,248,204, 97,  0,
				 62, 81, 60, 75,161,255,116,
				  0,  0,  0,  0,  0,171,228,
				  0,  0,  0,  0,  0,121,249,
				  0,  0,  0,  0,  0,174,207,
				184,101, 61, 70,151,255, 84,
				155,225,253,244,195, 77,  0,
			},
		},
		/* 'X' - 54 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				  0,  2,111,211,249,242, 31,
				  0,159,252,140, 66, 69, 13,
				 60,255,109,  0,  0,  0,  0,
				154,236,  5,  0,  0,  0,  0,
				211,174,  0,  0,  0,  0,  0,
				241,145,157,245,238,152,  9,
				253,236,116, 39, 79,238,145,
				247,151,  0,  0,  0,127,232,
				216,127,  0,  0,  0,100,250,
				148,202,  0,  0,  0,146,217,
				 33,243,158, 63,111,249,110,
				  0, 57,201,249,226,117,  1,
			},
		},
		/* 'X' - 55 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				255,255,255,255,255,255,255,
				 76, 76, 76, 76, 76,186,213,
				  0,  0,  0,  0, 13,240,102,
				  0,  0,  0,  0,113,237,  9,
				  0,  0,  0,  3,224,135,  0,
				  0,  0,  0, 86,251, 28,  0,
				  0,  0,  0,201,168,  0,  0,
				  0,  0, 60,255, 57,  0,  0,
				  0,  0,175,201,  0,  0,  0,
				  0, 35,253, 90,  0,  0,  0,
				  0,148,229,  5,  0,  0,  0,
				 17,244,123,  0,  0,  0,  0,
			},
		},
		/* 'X' - 56 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				 10,140,227,251,228,142, 10,
				166,233,103, 64,104,234,165,
				247,111,  0,  0,  0,112,246,
				228,135,  0,  0,  0,140,224,
				103,250,121, 26,125,249, 88,
				  0,123,255,255,253, 80,  0,
				 50,241,182, 87,219,226, 32,
				193,196,  3,  0, 14,210,180,
				249,109,  0,  0,  0,107,248,
				236,125,  0,  0,  0,131,230,
				145,240,101, 60,109,244,127,
				  7,137,228,251,224,121,  2,
			},
		},
		/* 'X' - 57 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				  1,118,224,249,200, 56,  0,
				111,250,113, 64,158,243, 33,
				217,147,  0,  0,  0,196,147,
				250,100,  0,  0,  0,120,215,
				233,127,  0,  0,  0,145,246,
				146,236, 79, 38,113,235,253,
				 10,151,238,247,163,141,241,
				  0,  0,  0,  0,  0,168,211,
				  0,  0,  0,  0,  2,228,154,
				  0,  0,  0,  0, 95,255, 61,
				  9, 46, 44,116,248,157,  0,
				 28,247,249,214,112,  2,  0,
			},
		},
		/* 'X' - 58 */
		{
			0, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			9, // height of character
			{
				 87,248, 86,
				 85,248, 84,
				  0,  0,  0,
				  0,  0,  0,
				  0,  0,  0,
				  0,  0,  0,
				  0,  0,  0,
				 86,246, 85,
				 85,248, 84,
			},
		},
		/* 'X' - 59 */
		{
			0, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			11, // height of character
			{
				 87,248, 86,
				 85,248, 84,
				  0,  0,  0,
				  0,  0,  0,
				  0,  0,  0,
				  0,  0,  0,
				  0,  0,  0,
				  0,206,219,
				 27,254,112,
				111,229,  9,
				205, 94,  0,
			},
		},
		/* 'X' - 60 */
		{
			1, // X offset from the origin in pixels
			10, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			8, // height of character
			{
				  0,  0,  0,  0,  0, 55,188,
				  0,  0,  0, 44,176,238,127,
				  0, 35,164,235,124, 14,  0,
				151,230,121, 13,  0,  0,  0,
				185,235,122, 13,  0,  0,  0,
				  0, 58,187,238,126, 15,  0,
				  0,  0,  0, 60,189,240,130,
				  0,  0,  0,  0,  0, 62,191,
			},
		},
		/* 'X' - 61 */
		{
			1, // X offset from the origin in pixels
			8, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			5, // height of character
			{
				192,255,255,255,255,255,255,
				 33, 44, 44, 44, 44, 44, 44,
				  0,  0,  0,  0,  0,  0,  0,
				192,255,255,255,255,255,255,
				 33, 44, 44, 44, 44, 44, 44,
			},
		},
		/* 'X' - 62 */
		{
			1, // X offset from the origin in pixels
			10, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			8, // height of character
			{
				188, 54,  0,  0,  0,  0,  0,
				127,238,176, 44,  0,  0,  0,
				  0, 14,124,234,163, 34,  0,
				  0,  0,  0, 13,121,229,151,
				  0,  0,  0, 13,120,234,184,
				  0, 15,125,237,186, 57,  0,
				130,240,189, 60,  0,  0,  0,
				191, 62,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 63 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			7, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			12, // height of character
			{
				109,201,248,238,155, 12,
				151,130, 73, 96,236,155,
				  0,  0,  0,  0,117,238,
				  0,  0,  0,  0, 95,250,
				  0,  0,  0,  0,170,203,
				  0,  0,  0,115,254, 74,
				  0,  0, 93,255,119,  0,
				  0,  0,221,173,  0,  0,
				  0,  0,254, 94,  0,  0,
				  0,  0,  0,  0,  0,  0,
				  0,  0,209,204,  0,  0,
				  0,  0,210,205,  0,  0,
			},
		},
		/* 'X' - 64 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			14, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			13, // height of character
			{
				  0,  0,  0, 71,179,236,251,229,162, 44,  0,  0,
				  0,  6,163,222,105, 40, 22, 49,138,243, 85,  0,
				  0,154,191, 11,  0,  0,  0,  0,  0, 74,244, 36,
				 52,239, 22,  1,135,238,248,205, 30,  0,162,150,
				154,146,  0,112,220, 34, 44,255, 36,  0, 77,219,
				217, 80,  0,214,109,  0, 37,255, 22,  0, 44,247,
				246, 52,  0,250, 69,  0, 51,255,  9,  0, 46,245,
				247, 52,  0,241, 75,  0, 83,255,  2,  0, 95,203,
				220, 86,  0,175,165, 16,184,233, 73, 31,216,110,
				156,166,  0, 29,195,250,194, 34,188,248,157,  3,
				 44,248, 71,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				  0, 97,245,140, 55, 25, 30, 73,146,  0,  0,  0,
				  0,  0, 47,162,226,250,245,210,139,  0,  0,  0,
			},
		},
		/* 'X' - 65 */
		{
			-1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			12, // height of character
			{
				  0,  0,  0,  0,  0,216,219,  0,  0,  0,  0,  0,
				  0,  0,  0,  0, 59,251,251, 62,  0,  0,  0,  0,
				  0,  0,  0,  0,157,194,194,160,  0,  0,  0,  0,
				  0,  0,  0, 11,243,107,107,244, 12,  0,  0,  0,
				  0,  0,  0, 97,250, 20, 20,250, 99,  0,  0,  0,
				  0,  0,  0,195,178,  0,  0,177,197,  0,  0,  0,
				  0,  0, 37,255, 86,  0,  0, 83,255, 38,  0,  0,
				  0,  0,135,255,255,255,255,255,255,136,  0,  0,
				  0,  3,229,149, 48, 48, 48, 48,147,230,  3,  0,
				  0, 75,255, 38,  0,  0,  0,  0, 38,255, 75,  0,
				  0,173,198,  0,  0,  0,  0,  0,  0,200,173,  0,
				 20,250,103,  0,  0,  0,  0,  0,  0,107,250, 20,
			},
		},
		/* 'X' - 66 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			12, // height of character
			{
				255,255,255,254,243,208,124,  6,
				255,142, 48, 49, 63,126,248,157,
				255,116,  0,  0,  0,  0,142,242,
				255,116,  0,  0,  0,  0,132,237,
				255,116,  0,  0, 12, 74,234,124,
				255,255,255,255,255,247,113,  0,
				255,142, 48, 49, 68,156,254,100,
				255,116,  0,  0,  0,  0,186,225,
				255,116,  0,  0,  0,  0,144,250,
				255,116,  0,  0,  0,  0,194,216,
				255,142, 48, 48, 65,157,255, 97,
				255,255,255,255,248,205, 91,  0,
			},
		},
		/* 'X' - 67 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			12, // height of character
			{
				  0,  0, 43,159,225,249,244,207,126,
				  0, 86,249,198, 91, 54, 70,139,122,
				 36,246,170,  3,  0,  0,  0,  0,  0,
				148,246, 19,  0,  0,  0,  0,  0,  0,
				217,182,  0,  0,  0,  0,  0,  0,  0,
				247,148,  0,  0,  0,  0,  0,  0,  0,
				247,147,  0,  0,  0,  0,  0,  0,  0,
				220,178,  0,  0,  0,  0,  0,  0,  0,
				158,242, 13,  0,  0,  0,  0,  0,  0,
				 49,252,161,  2,  0,  0,  0,  0,  0,
				  0,108,254,198, 95, 56, 55, 89,152,
				  0,  0, 55,168,228,250,250,227,174,
			},
		},
		/* 'X' - 68 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			12, // height of character
			{
				255,255,255,252,230,170, 58,  0,  0,
				255,142, 48, 54, 88,185,253,107,  0,
				255,116,  0,  0,  0,  0,146,252, 49,
				255,116,  0,  0,  0,  0, 10,240,158,
				255,116,  0,  0,  0,  0,  0,177,222,
				255,116,  0,  0,  0,  0,  0,147,248,
				255,116,  0,  0,  0,  0,  0,150,244,
				255,116,  0,  0,  0,  0,  0,183,215,
				255,116,  0,  0,  0,  0, 17,245,149,
				255,116,  0,  0,  0,  4,168,249, 39,
				255,142, 48, 59,103,206,250, 93,  0,
				255,255,255,248,222,158, 45,  0,  0,
			},
		},
		/* 'X' - 69 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			12, // height of character
			{
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,142, 48, 48, 48, 48,
				255,255,255,255,255,255,
			},
		},
		/* 'X' - 70 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			12, // height of character
			{
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
			},
		},
		/* 'X' - 71 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			12, // height of character
			{
				  0,  0, 22,130,204,240,252,236,195, 99,
				  0, 64,236,213,106, 59, 54, 90,157, 86,
				 29,240,179,  6,  0,  0,  0,  0,  0,  0,
				144,248, 23,  0,  0,  0,  0,  0,  0,  0,
				216,185,  0,  0,  0,  0,  0,  0,  0,  0,
				246,148,  0,  0,  0,  0,  0,  0,  0,  0,
				247,147,  0,  0,  0,  0,255,255,255,255,
				218,180,  0,  0,  0,  0, 48, 48,142,255,
				153,244, 16,  0,  0,  0,  0,  0,116,255,
				 42,250,168,  3,  0,  0,  0,  0,116,255,
				  0, 97,251,207,104, 60, 49, 65,167,255,
				  0,  0, 47,162,227,251,252,234,197,143,
			},
		},
		/* 'X' - 72 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			12, // height of character
			{
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,255,255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,142,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
			},
		},
		/* 'X' - 73 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			12, // height of character
			{
				102,252,255,255,151,
				  0, 40,255, 92,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 40,255, 92,  0,
				102,251,255,255,150,
			},
		},
		/* 'X' - 74 */
		{
			-2, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			15, // height of character
			{
				  0,  0,  0,255,116,
				  0,  0,  0,255,116,
				  0,  0,  0,255,116,
				  0,  0,  0,255,116,
				  0,  0,  0,255,116,
				  0,  0,  0,255,116,
				  0,  0,  0,255,116,
				  0,  0,  0,255,116,
				  0,  0,  0,255,116,
				  0,  0,  0,255,116,
				  0,  0,  0,255,116,
				  0,  0,  0,255,115,
				  0,  0, 18,255, 93,
				 65, 55,167,243, 22,
				239,250,204, 64,  0,
			},
		},
		/* 'X' - 75 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			12, // height of character
			{
				255,116,  0,  0,  0,  8,199,199,  9,
				255,116,  0,  0,  0,167,219, 20,  0,
				255,116,  0,  0,129,235, 36,  0,  0,
				255,116,  0, 89,246, 57,  0,  0,  0,
				255,116, 56,245, 82,  0,  0,  0,  0,
				255,137,228,221,  6,  0,  0,  0,  0,
				255,219, 71,232,134,  0,  0,  0,  0,
				255,116,  0, 84,252, 55,  0,  0,  0,
				255,116,  0,  0,173,216,  8,  0,  0,
				255,116,  0,  0, 24,238,142,  0,  0,
				255,116,  0,  0,  0, 95,253, 61,  0,
				255,116,  0,  0,  0,  0,183,221, 11,
			},
		},
		/* 'X' - 76 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,142, 48, 48, 48, 48, 30,
				255,255,255,255,255,255,160,
			},
		},
		/* 'X' - 77 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			14, // X advance in pixels
			0, // Y advance in pixels
			11, // width of character
			12, // height of character
			{
				255,255,108,  0,  0,  0,  0,  0, 82,255,255,
				255,220,188,  0,  0,  0,  0,  0,167,217,255,
				255,152,251, 17,  0,  0,  0,  8,242,141,255,
				255,108,229, 94,  0,  0,  0, 79,210,111,255,
				255,115,149,175,  0,  0,  0,163,125,115,255,
				255,116, 67,246, 10,  0,  6,240, 40,116,255,
				255,116,  4,237, 81,  0, 75,211,  0,116,255,
				255,116,  0,160,162,  0,159,126,  0,116,255,
				255,116,  0, 78,237,  9,237, 41,  0,116,255,
				255,116,  0,  8,244,138,212,  0,  0,116,255,
				255,116,  0,  0,171,252,127,  0,  0,116,255,
				255,116,  0,  0, 89,255, 42,  0,  0,116,255,
			},
		},
		/* 'X' - 78 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			12, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			12, // height of character
			{
				255,243, 25,  0,  0,  0,  0,116,255,
				255,246,159,  0,  0,  0,  0,116,255,
				255,140,252, 50,  0,  0,  0,116,255,
				255,101,160,194,  0,  0,  0,116,255,
				255,110, 25,243, 85,  0,  0,116,255,
				255,115,  0,123,223,  8,  0,116,255,
				255,116,  0,  8,224,122,  0,116,255,
				255,116,  0,  0, 87,243, 24,113,255,
				255,116,  0,  0,  0,195,158,103,255,
				255,116,  0,  0,  0, 51,252,143,255,
				255,116,  0,  0,  0,  0,160,248,255,
				255,116,  0,  0,  0,  0, 25,243,255,
			},
		},
		/* 'X' - 79 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			12, // height of character
			{
				  0,  1, 98,200,243,244,199, 92,  0,  0,
				  0,157,250,138, 62, 60,134,249,141,  0,
				 74,255,101,  0,  0,  0,  0, 97,255, 62,
				172,228,  1,  0,  0,  0,  0,  1,227,163,
				226,169,  0,  0,  0,  0,  0,  0,170,222,
				249,145,  0,  0,  0,  0,  0,  0,145,247,
				249,146,  0,  0,  0,  0,  0,  0,147,247,
				224,170,  0,  0,  0,  0,  0,  0,171,221,
				171,229,  2,  0,  0,  0,  0,  1,228,162,
				 73,255,100,  0,  0,  0,  0, 97,255, 61,
				  0,157,250,136, 61, 60,134,249,141,  0,
				  0,  2,102,204,245,244,200, 93,  0,  0,
			},
		},
		/* 'X' - 80 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				255,255,255,246,206,110,  2,
				255,142, 48, 64,148,255,128,
				255,116,  0,  0,  0,184,228,
				255,116,  0,  0,  0,145,250,
				255,116,  0,  0,  0,193,212,
				255,142, 49, 69,158,255, 88,
				255,255,255,240,190, 72,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 81 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			15, // height of character
			{
				  0,  1, 98,200,243,244,199, 92,  0,  0,
				  0,157,250,138, 62, 60,134,249,141,  0,
				 74,255,101,  0,  0,  0,  0, 97,255, 62,
				172,228,  1,  0,  0,  0,  0,  1,227,163,
				226,169,  0,  0,  0,  0,  0,  0,170,222,
				249,145,  0,  0,  0,  0,  0,  0,145,247,
				249,146,  0,  0,  0,  0,  0,  0,147,249,
				224,170,  0,  0,  0,  0,  0,  0,171,222,
				171,229,  2,  0,  0,  0,  0,  1,228,164,
				 73,255,100,  0,  0,  0,  0, 97,255, 62,
				  0,157,250,136, 61, 60,134,249,143,  0,
				  0,  2,102,204,245,254,255,107,  0,  0,
				  0,  0,  0,  0,  0, 34,250,144,  0,  0,
				  0,  0,  0,  0,  0,  0,113,255,146,  4,
				  0,  0,  0,  0,  0,  0,  0,114,155,  0,
			},
		},
		/* 'X' - 82 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			12, // height of character
			{
				255,255,255,245,208,113,  2,  0,  0,
				255,142, 48, 63,146,255,129,  0,  0,
				255,116,  0,  0,  0,184,228,  0,  0,
				255,116,  0,  0,  0,144,250,  0,  0,
				255,116,  0,  0,  0,189,208,  0,  0,
				255,142, 48, 63,150,250, 73,  0,  0,
				255,255,255,255,229, 47,  0,  0,  0,
				255,116,  0, 90,255, 71,  0,  0,  0,
				255,116,  0,  0,181,226, 14,  0,  0,
				255,116,  0,  0, 29,242,153,  0,  0,
				255,116,  0,  0,  0,107,255, 67,  0,
				255,116,  0,  0,  0,  1,196,223, 12,
			},
		},
		/* 'X' - 83 */
		{
			-1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			12, // height of character
			{
				  0,  6,129,222,251,242,202, 99,
				  0,149,243,109, 55, 73,141, 89,
				  0,241,137,  0,  0,  0,  0,  0,
				  0,243,135,  0,  0,  0,  0,  0,
				  0,170,239, 72,  0,  0,  0,  0,
				  0, 21,194,255,205,100,  6,  0,
				  0,  0,  0, 73,180,254,218, 37,
				  0,  0,  0,  0,  0, 52,232,193,
				  0,  0,  0,  0,  0,  0,129,249,
				  0,  0,  0,  0,  0,  0,148,226,
				 36,169, 93, 54, 58,123,250,113,
				 19,175,230,251,246,202, 96,  0,
			},
		},
		/* 'X' - 84 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			12, // height of character
			{
				255,255,255,255,255,255,255,128,
				 48, 48, 74,255,116, 48, 48, 24,
				  0,  0, 32,255, 84,  0,  0,  0,
				  0,  0, 32,255, 84,  0,  0,  0,
				  0,  0, 32,255, 84,  0,  0,  0,
				  0,  0, 32,255, 84,  0,  0,  0,
				  0,  0, 32,255, 84,  0,  0,  0,
				  0,  0, 32,255, 84,  0,  0,  0,
				  0,  0, 32,255, 84,  0,  0,  0,
				  0,  0, 32,255, 84,  0,  0,  0,
				  0,  0, 32,255, 84,  0,  0,  0,
				  0,  0, 32,255, 84,  0,  0,  0,
			},
		},
		/* 'X' - 85 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			12, // height of character
			{
				252,114,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				254,116,  0,  0,  0,  0,116,255,
				238,130,  0,  0,  0,  0,133,237,
				180,203,  0,  0,  0,  1,206,175,
				 54,250,164, 62, 62,166,248, 50,
				  0, 61,193,245,243,188, 55,  0,
			},
		},
		/* 'X' - 86 */
		{
			-1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			11, // width of character
			12, // height of character
			{
				 23,253,115,  0,  0,  0,  0,  0,115,253, 23,
				  0,191,193,  0,  0,  0,  0,  0,194,191,  0,
				  0,105,252, 19,  0,  0,  0, 19,252,105,  0,
				  0, 22,252, 95,  0,  0,  0, 94,252, 23,  0,
				  0,  0,189,173,  0,  0,  0,172,190,  0,  0,
				  0,  0,103,244,  8,  0,  6,242,104,  0,  0,
				  0,  0, 20,252, 75,  0, 72,252, 22,  0,  0,
				  0,  0,  0,187,153,  0,150,189,  0,  0,  0,
				  0,  0,  0,101,229,  1,227,103,  0,  0,  0,
				  0,  0,  0, 19,251, 84,252, 21,  0,  0,  0,
				  0,  0,  0,  0,185,207,188,  0,  0,  0,  0,
				  0,  0,  0,  0, 99,255,102,  0,  0,  0,  0,
			},
		},
		/* 'X' - 87 */
		{
			-1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			14, // X advance in pixels
			0, // Y advance in pixels
			15, // width of character
			12, // height of character
			{
				 32,255,104,  0,  0,  0, 97,255, 95,  0,  0,  0,104,255, 31,
				  0,225,160,  0,  0,  0,155,223,149,  0,  0,  0,161,223,  0,
				  0,162,216,  0,  0,  0,212,132,204,  0,  0,  0,218,159,  0,
				  0, 99,254, 17,  0, 15,252, 32,249,  8,  0, 19,255, 94,  0,
				  0, 36,255, 72,  0, 71,213,  0,217, 57,  0, 75,255, 30,  0,
				  0,  0,229,128,  0,129,157,  0,162,111,  0,131,222,  0,  0,
				  0,  0,166,184,  0,186,100,  0,107,166,  0,188,157,  0,  0,
				  0,  0,103,238,  3,241, 43,  0, 52,220,  2,241, 93,  0,  0,
				  0,  0, 40,255, 76,240,  1,  0,  5,247, 57,255, 29,  0,  0,
				  0,  0,  0,232,159,185,  0,  0,  0,198,148,220,  0,  0,  0,
				  0,  0,  0,170,229,128,  0,  0,  0,143,227,156,  0,  0,  0,
				  0,  0,  0,107,255, 72,  0,  0,  0, 88,255, 92,  0,  0,  0,
			},
		},
		/* 'X' - 88 */
		{
			-1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			12, // height of character
			{
				 13,229,152,  0,  0,  0,  0,136,229, 13,
				  0, 89,253, 51,  0,  0, 38,249, 89,  0,
				  0,  0,190,200,  1,  0,183,192,  0,  0,
				  0,  0, 42,250,100, 79,251, 43,  0,  0,
				  0,  0,  0,139,235,222,141,  0,  0,  0,
				  0,  0,  0, 12,238,244, 13,  0,  0,  0,
				  0,  0,  0, 57,252,252, 72,  0,  0,  0,
				  0,  0,  0,196,157,164,207,  1,  0,  0,
				  0,  0, 82,247, 29, 39,252, 92,  0,  0,
				  0,  5,218,140,  0,  0,164,223,  6,  0,
				  0,108,241, 19,  0,  0, 39,252,112,  0,
				 14,234,124,  0,  0,  0,  0,164,235, 14,
			},
		},
		/* 'X' - 89 */
		{
			-2, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			11, // width of character
			12, // height of character
			{
				  3,215,185,  0,  0,  0,  0,  0,145,236, 14,
				  0, 81,255, 61,  0,  0,  0, 28,248,113,  0,
				  0,  0,198,192,  0,  0,  0,151,225,  7,  0,
				  0,  0, 60,255, 69,  0, 31,249, 95,  0,  0,
				  0,  0,  0,178,200,  0,156,211,  2,  0,  0,
				  0,  0,  0, 43,252,112,251, 77,  0,  0,  0,
				  0,  0,  0,  0,158,255,196,  0,  0,  0,  0,
				  0,  0,  0,  0, 43,255, 91,  0,  0,  0,  0,
				  0,  0,  0,  0, 32,255, 84,  0,  0,  0,  0,
				  0,  0,  0,  0, 32,255, 84,  0,  0,  0,  0,
				  0,  0,  0,  0, 32,255, 84,  0,  0,  0,  0,
				  0,  0,  0,  0, 32,255, 84,  0,  0,  0,  0,
			},
		},
		/* 'X' - 90 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			12, // height of character
			{
				255,255,255,255,255,255,255,255,
				 48, 48, 48, 48, 48, 52,228,177,
				  0,  0,  0,  0,  0,123,240, 26,
				  0,  0,  0,  0, 41,248,100,  0,
				  0,  0,  0,  2,198,189,  0,  0,
				  0,  0,  0,112,245, 34,  0,  0,
				  0,  0, 33,244,113,  0,  0,  0,
				  0,  0,188,200,  2,  0,  0,  0,
				  0,100,249, 43,  0,  0,  0,  0,
				 26,240,126,  0,  0,  0,  0,  0,
				178,230, 53, 48, 48, 48, 48, 48,
				255,255,255,255,255,255,255,255,
			},
		},
		/* 'X' - 91 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			5, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			15, // height of character
			{
				255,255,255,
				255,133, 44,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,133, 44,
				255,255,255,
			},
		},
		/* 'X' - 92 */
		{
			-1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			12, // height of character
			{
				 19,247, 89,  0,  0,  0,  0,  0,
				  0,161,195,  0,  0,  0,  0,  0,
				  0, 55,255, 45,  0,  0,  0,  0,
				  0,  0,205,151,  0,  0,  0,  0,
				  0,  0, 99,243, 13,  0,  0,  0,
				  0,  0, 10,239,107,  0,  0,  0,
				  0,  0,  0,143,212,  0,  0,  0,
				  0,  0,  0, 38,254, 63,  0,  0,
				  0,  0,  0,  0,187,169,  0,  0,
				  0,  0,  0,  0, 81,250, 24,  0,
				  0,  0,  0,  0,  3,227,125,  0,
				  0,  0,  0,  0,  0,125,227,  3,
			},
		},
		/* 'X' - 93 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			5, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			15, // height of character
			{
				255,255,255,
				 44,133,255,
				  0,108,255,
				  0,108,255,
				  0,108,255,
				  0,108,255,
				  0,108,255,
				  0,108,255,
				  0,108,255,
				  0,108,255,
				  0,108,255,
				  0,108,255,
				  0,108,255,
				 44,133,255,
				255,255,255,
			},
		},
		/* 'X' - 94 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			7, // height of character
			{
				  0,  0,  0, 52,254, 76,  0,  0,  0,
				  0,  0,  1,199,211,216,  5,  0,  0,
				  0,  0, 95,231, 17,219,112,  0,  0,
				  0, 13,231,100,  0, 86,238, 18,  0,
				  0,138,210,  2,  0,  1,202,147,  0,
				 38,249, 70,  0,  0,  0, 64,251, 41,
				181,183,  0,  0,  0,  0,  0,181,183,
			},
		},
		/* 'X' - 95 */
		{
			0, // X offset from the origin in pixels
			-1, // Y offset from the origin in pixels
			7, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			2, // height of character
			{
				255,255,255,255,255,255,255,
				 24, 24, 24, 24, 24, 24, 24,
			},
		},
		/* 'X' - 96 */
		{
			3, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			3, // height of character
			{
				207,222,  2,
				 49,249, 86,
				  0, 98,214,
			},
		},
		/* 'X' - 97 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			9, // height of character
			{
				 73,180,235,252,234,166, 22,
				 80,149, 77, 52, 90,239,179,
				  0,  0,  0,  0,  0,134,246,
				  0,  0,  0,  0,  0,105,255,
				  9,122,200,233,247,254,255,
				174,242,129, 77, 58,137,255,
				249,134,  0,  0,  0,146,255,
				213,209, 68, 58,129,229,255,
				 51,202,251,239,157, 47,255,
			},
		},
		/* 'X' - 98 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,106,  0,  0,  0,  0,  0,
				255,121,179,248,229,112,  0,
				255,242,116, 54,126,255, 83,
				255,173,  0,  0,  0,192,187,
				255,120,  0,  0,  0,135,238,
				255,109,  0,  0,  0,122,252,
				255,121,  0,  0,  0,138,237,
				255,177,  0,  0,  0,198,186,
				255,240,122, 54,130,255, 82,
				255, 61,175,248,230,111,  0,
			},
		},
		/* 'X' - 99 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			9, // height of character
			{
				  0, 72,200,248,240,170,
				 58,252,164, 73, 86,101,
				177,207,  0,  0,  0,  0,
				235,139,  0,  0,  0,  0,
				251,122,  0,  0,  0,  0,
				238,137,  0,  0,  0,  0,
				183,203,  0,  0,  0,  0,
				 64,254,160, 72, 82,122,
				  0, 77,204,250,242,154,
			},
		},
		/* 'X' - 100 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,  0,  0,  0,108,255,
				  0,  0,  0,  0,  0,108,255,
				  0,  0,  0,  0,  0,108,255,
				  0,  0,  0,  0,  0,107,255,
				  0,109,228,246,173,117,255,
				 81,255,131, 55,122,243,255,
				189,198,  0,  0,  0,178,255,
				239,137,  0,  0,  0,124,255,
				253,122,  0,  0,  0,109,255,
				239,135,  0,  0,  0,121,255,
				192,191,  0,  0,  0,173,255,
				 86,255,125, 53,113,237,255,
				  0,115,230,248,176, 75,255,
			},
		},
		/* 'X' - 101 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			9, // height of character
			{
				  0, 68,205,248,219, 93,  0,
				 51,250,153, 56,116,253, 75,
				170,211,  1,  0,  0,178,190,
				232,144,  0,  0,  0,128,241,
				251,255,255,255,255,255,255,
				235,154, 48, 48, 48, 48, 48,
				174,192,  0,  0,  0,  0,  0,
				 48,248,160, 74, 70,111,111,
				  0, 57,192,246,249,211, 87,
			},
		},
		/* 'X' - 102 */
		{
			0, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			13, // height of character
			{
				  0, 52,213,251,198,
				  0,196,201, 56, 59,
				  0,246,116,  0,  0,
				  0,255,108,  0,  0,
				201,255,255,255,  0,
				  8,255,112,  8,  0,
				  0,255,108,  0,  0,
				  0,255,108,  0,  0,
				  0,255,108,  0,  0,
				  0,255,108,  0,  0,
				  0,255,108,  0,  0,
				  0,255,108,  0,  0,
				  0,255,108,  0,  0,
			},
		},
		/* 'X' - 103 */
		{
			0, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			13, // height of character
			{
				  0, 16,164,240,255,255,255,253, 25,
				  0,166,213, 38, 37,212,189, 17,  0,
				  0,241,119,  0,  0,119,238,  0,  0,
				  0,246,126,  0,  0,123,245,  0,  0,
				  0,170,228, 76, 74,225,173,  0,  0,
				  0, 20,220,254,245,174, 20,  0,  0,
				  0,153,163,  8,  0,  0,  0,  0,  0,
				  0,246,102,  1,  0,  0,  0,  0,  0,
				  0,164,255,255,255,249,200, 55,  0,
				134,222, 96, 72, 72, 84,193,221,  0,
				247, 99,  0,  0,  0,  0, 99,245,  0,
				211,181, 35, 10, 23, 79,222,157,  0,
				 38,175,236,253,243,203,115,  4,  0,
			},
		},
		/* 'X' - 104 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,116,161,242,245,180, 26,
				255,241,140, 56, 83,236,176,
				255,183,  0,  0,  0,133,240,
				255,121,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
			},
		},
		/* 'X' - 105 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			12, // height of character
			{
				  9,230,103,
				  9,230,100,
				  0,  0,  0,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
			},
		},
		/* 'X' - 106 */
		{
			-1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			4, // width of character
			16, // height of character
			{
				  0,  9,230,103,
				  0,  9,230,100,
				  0,  0,  0,  0,
				  0,  0,255,108,
				  0,  0,255,108,
				  0,  0,255,108,
				  0,  0,255,108,
				  0,  0,255,108,
				  0,  0,255,108,
				  0,  0,255,108,
				  0,  0,255,108,
				  0,  0,255,108,
				  0,  0,255,108,
				  0,  2,255,103,
				 59,107,255, 58,
				240,243,137,  0,
			},
		},
		/* 'X' - 107 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			13, // height of character
			{
				255,108,  0,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,  0,
				255,108,  0,  0, 41,235,149,  0,
				255,108,  0, 33,228,167,  2,  0,
				255,101, 25,221,183,  5,  0,  0,
				255,103,211,200, 10,  0,  0,  0,
				255,238,251,218, 13,  0,  0,  0,
				255,163, 31,230,165,  0,  0,  0,
				255,108,  0, 65,253,100,  0,  0,
				255,108,  0,  0,127,246, 43,  0,
				255,108,  0,  0,  2,189,213, 10,
			},
		},
		/* 'X' - 108 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			2, // width of character
			13, // height of character
			{
				255,108,
				255,108,
				255,108,
				255,108,
				255,108,
				255,108,
				255,108,
				255,108,
				255,108,
				255,108,
				255,108,
				255,108,
				255,108,
			},
		},
		/* 'X' - 109 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			14, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			9, // height of character
			{
				255, 76,169,246,237,146, 10,142,235,247,187, 30,
				255,237,125, 54,121,255,217,167, 60, 79,235,179,
				255,178,  0,  0,  0,216,231,  5,  0,  0,132,241,
				255,121,  0,  0,  0,192,181,  0,  0,  0,108,255,
				255,108,  0,  0,  0,192,172,  0,  0,  0,108,255,
				255,108,  0,  0,  0,192,172,  0,  0,  0,108,255,
				255,108,  0,  0,  0,192,172,  0,  0,  0,108,255,
				255,108,  0,  0,  0,192,172,  0,  0,  0,108,255,
				255,108,  0,  0,  0,192,172,  0,  0,  0,108,255,
			},
		},
		/* 'X' - 110 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			9, // height of character
			{
				255, 74,161,242,245,180, 26,
				255,238,140, 56, 83,236,176,
				255,183,  0,  0,  0,133,240,
				255,121,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
			},
		},
		/* 'X' - 111 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			9, // height of character
			{
				  0, 85,215,249,212, 77,  0,
				 68,254,126, 55,128,252, 59,
				184,190,  0,  0,  0,193,176,
				237,135,  0,  0,  0,136,234,
				252,122,  0,  0,  0,123,251,
				235,135,  0,  0,  0,137,235,
				178,191,  0,  0,  0,194,179,
				 59,252,125, 54,127,253, 64,
				  0, 78,213,250,214, 84,  0,
			},
		},
		/* 'X' - 112 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				255, 77,173,247,229,112,  0,
				255,236,114, 54,126,255, 83,
				255,170,  0,  0,  0,192,187,
				255,119,  0,  0,  0,135,238,
				255,109,  0,  0,  0,122,252,
				255,121,  0,  0,  0,138,237,
				255,177,  0,  0,  0,198,186,
				255,243,122, 54,130,255, 82,
				255,120,175,248,230,111,  0,
				255,107,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 113 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,109,228,246,170, 74,255,
				 81,255,131, 55,122,239,255,
				189,198,  0,  0,  0,178,255,
				239,137,  0,  0,  0,124,255,
				253,122,  0,  0,  0,109,255,
				239,135,  0,  0,  0,121,255,
				192,191,  0,  0,  0,173,255,
				 86,255,125, 53,113,237,255,
				  0,115,230,248,176,118,255,
				  0,  0,  0,  0,  0,108,255,
				  0,  0,  0,  0,  0,108,255,
				  0,  0,  0,  0,  0,108,255,
				  0,  0,  0,  0,  0,108,255,
			},
		},
		/* 'X' - 114 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			9, // height of character
			{
				255, 53,132,242,232,
				255,191,187, 87, 72,
				255,211,  4,  0,  0,
				255,127,  0,  0,  0,
				255,108,  0,  0,  0,
				255,108,  0,  0,  0,
				255,108,  0,  0,  0,
				255,108,  0,  0,  0,
				255,108,  0,  0,  0,
			},
		},
		/* 'X' - 115 */
		{
			0, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			7, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			9, // height of character
			{
				  0, 55,206,251,229,129,
				  0,216,190, 57, 86,103,
				  0,249,124,  0,  0,  0,
				  0,180,242,102,  3,  0,
				  0, 15,155,253,212, 42,
				  0,  0,  0, 49,223,207,
				  0,  0,  0,  0,116,250,
				 26,140, 63, 62,203,203,
				 15,189,245,248,193, 41,
			},
		},
		/* 'X' - 116 */
		{
			0, // X offset from the origin in pixels
			11, // Y offset from the origin in pixels
			5, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			11, // height of character
			{
				  0,138,104,  0,  0,
				  6,226,108,  0,  0,
				217,255,255,255,240,
				  8,255,112,  8,  7,
				  0,255,108,  0,  0,
				  0,255,108,  0,  0,
				  0,255,108,  0,  0,
				  0,255,108,  0,  0,
				  0,250,116,  0,  0,
				  0,207,205, 58, 66,
				  0, 58,217,253,225,
			},
		},
		/* 'X' - 117 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			9, // height of character
			{
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,123,255,
				241,133,  0,  0,  0,183,255,
				176,235, 82, 55,137,238,255,
				 26,181,245,243,163, 73,255,
			},
		},
		/* 'X' - 118 */
		{
			-1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			9, // height of character
			{
				 21,251,102,  0,  0,  0,  0,103,250, 21,
				  0,178,194,  0,  0,  0,  0,198,176,  0,
				  0, 83,254, 32,  0,  0, 36,255, 80,  0,
				  0,  6,238,123,  0,  0,130,234,  5,  0,
				  0,  0,150,215,  0,  1,222,144,  0,  0,
				  0,  0, 55,255, 49, 60,255, 48,  0,  0,
				  0,  0,  0,216,130,145,208,  0,  0,  0,
				  0,  0,  0,122,205,221,112,  0,  0,  0,
				  0,  0,  0, 29,253,250, 21,  0,  0,  0,
			},
		},
		/* 'X' - 119 */
		{
			-1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			12, // X advance in pixels
			0, // Y advance in pixels
			14, // width of character
			9, // height of character
			{
				 30,255, 93,  0,  0,  0,218,242,  5,  0,  0, 83,255, 29,
				  0,217,153,  0,  0, 39,242,233, 62,  0,  0,146,216,  0,
				  0,148,212,  0,  0,116,185,169,134,  0,  0,209,147,  0,
				  0, 79,254, 17,  0,193,119,103,205,  0, 18,254, 78,  0,
				  0, 14,251, 75, 17,251, 44, 33,254, 22, 78,251, 14,  0,
				  0,  0,197,134, 88,222,  0,  0,217, 90,137,196,  0,  0,
				  0,  0,128,186,152,145,  0,  0,145,155,188,127,  0,  0,
				  0,  0, 59,231,209, 67,  0,  0, 73,214,232, 58,  0,  0,
				  0,  0,  4,241,238,  5,  0,  0,  9,245,241,  4,  0,  0,
			},
		},
		/* 'X' - 120 */
		{
			0, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			9, // height of character
			{
				163,230, 19,  0,  0, 19,230,162,
				 13,220,174,  0,  0,175,218, 12,
				  0, 53,250, 99,100,249, 50,  0,
				  0,  0,118,244,244,113,  0,  0,
				  0,  0, 11,243,240,  9,  0,  0,
				  0,  0,148,227,227,145,  0,  0,
				  0, 70,254, 72, 73,254, 68,  0,
				 17,228,158,  0,  0,159,227, 17,
				167,228, 15,  0,  0, 16,229,167,
			},
		},
		/* 'X' - 121 */
		{
			-1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			13, // height of character
			{
				 20,249,108,  0,  0,  0,  0,104,250, 21,
				  0,168,204,  0,  0,  0,  0,200,173,  0,
				  0, 67,255, 44,  0,  0, 40,255, 75,  0,
				  0,  1,220,141,  0,  0,136,229,  3,  0,
				  0,  0,120,232,  4,  3,229,135,  0,  0,
				  0,  0, 24,251, 76, 71,255, 37,  0,  0,
				  0,  0,  0,173,163,159,195,  0,  0,  0,
				  0,  0,  0, 72,229,234, 97,  0,  0,  0,
				  0,  0,  0,  2,224,243, 11,  0,  0,  0,
				  0,  0,  0,  0,209,157,  0,  0,  0,  0,
				  0,  0,  0, 53,255, 58,  0,  0,  0,  0,
				  7, 52, 69,208,190,  0,  0,  0,  0,  0,
				 24,243,248,180, 24,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 122 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			9, // height of character
			{
				188,255,255,255,255,255,  0,
				  5,  8,  8,  9,196,189,  0,
				  0,  0,  0,103,245, 34,  0,
				  0,  0, 27,241,114,  0,  0,
				  0,  0,178,201,  2,  0,  0,
				  0, 88,249, 44,  0,  0,  0,
				 19,234,128,  0,  0,  0,  0,
				163,215, 14,  8,  8,  8,  1,
				255,255,255,255,255,255, 36,
			},
		},
		/* 'X' - 123 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			15, // height of character
			{
				  0,  0, 37,185,245,
				  0,  0,204,201, 60,
				  0,  0,253,111,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  5,255,101,  0,
				 14,120,249, 39,  0,
				255,232, 65,  0,  0,
				 58,159,233, 25,  0,
				  0,  9,255, 97,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,253,110,  0,
				  0,  0,208,199, 57,
				  0,  0, 42,190,246,
			},
		},
		/* 'X' - 124 */
		{
			4, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			2, // width of character
			17, // height of character
			{
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
			},
		},
		/* 'X' - 125 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			15, // height of character
			{
				245,183, 36,  0,  0,
				 60,201,201,  0,  0,
				  0,111,252,  0,  0,
				  0,108,255,  0,  0,
				  0,108,255,  0,  0,
				  0,101,255,  4,  0,
				  0, 39,249,117,  9,
				  0,  0, 64,232,255,
				  0, 25,233,158, 58,
				  0, 98,255,  9,  0,
				  0,108,255,  0,  0,
				  0,108,255,  0,  0,
				  0,110,253,  0,  0,
				 57,199,206,  0,  0,
				246,188, 40,  0,  0,
			},
		},
		/* 'X' - 126 */
		{
			1, // X offset from the origin in pixels
			8, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			5, // height of character
			{
				  0,  0,  0,  0,  0,  0,  0,
				 97,237,221, 66,  0,  0, 74,
				227, 70,118,245,115, 68,227,
				 73,  0,  0, 67,223,237, 97,
				  0,  0,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 127 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 128 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 129 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 130 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 131 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 132 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 133 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 134 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 135 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 136 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 137 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 138 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 139 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 140 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 141 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 142 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 143 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 144 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 145 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 146 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 147 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 148 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 149 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 150 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 151 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 152 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 153 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 154 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 155 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 156 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 157 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 158 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 159 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				247,208,208,208,208,208,247,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				208,  0,  0,  0,  0,  0,208,
				247,208,208,208,208,208,247,
			},
		},
		/* 'X' - 160 */
		{
			0, // X offset from the origin in pixels
			0, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			0, // width of character
			0, // height of character
			{
			},
		},
		/* 'X' - 161 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			2, // width of character
			12, // height of character
			{
				207,205,
				210,207,
				  0,  0,
				214,118,
				219,130,
				224,142,
				229,154,
				234,166,
				239,178,
				244,190,
				249,202,
				254,214,
			},
		},
		/* 'X' - 162 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				  0,  0,  0,255, 88,  0,  0,
				  0,  0,  0,255, 94,  0,  0,
				  0,118,226,255,255,241,170,
				107,255,174, 77, 61, 95, 91,
				210,199,  1,  0,  0,  0,  0,
				248,131,  0,  0,  0,  0,  0,
				249,129,  0,  0,  0,  0,  0,
				213,195,  0,  0,  0,  0,  0,
				110,255,168, 75, 59, 84,124,
				  1,119,227,255,255,242,159,
				  0,  0,  0,255, 93,  0,  0,
				  0,  0,  0,255, 88,  0,  0,
			},
		},
		/* 'X' - 163 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				  0, 24,173,243,247,201, 73,
				  0,185,232, 84, 66,131, 59,
				  0,250,131,  0,  0,  0,  0,
				  0,255,116,  0,  0,  0,  0,
				  0,255,116,  0,  0,  0,  0,
				252,255,255,255,255,  0,  0,
				 31,255,133, 32, 32,  0,  0,
				  0,255,116,  0,  0,  0,  0,
				  5,255,109,  0,  0,  0,  0,
				 48,255, 59,  0,  0,  0,  0,
				196,207, 76, 76, 76, 76, 76,
				255,255,255,255,255,255,255,
			},
		},
		/* 'X' - 164 */
		{
			0, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			7, // height of character
			{
				  0,183,159,238,237,158,181,  0,
				  0,161,206, 48, 43,193,161,  0,
				  0,233, 67,  0,  0, 42,242,  0,
				  0,235, 66,  0,  0, 40,227,  0,
				  0,161,204, 46, 41,190,157,  0,
				  0,181,160,240,239,162,184,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 165 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			12, // height of character
			{
				198,180,  0,  0,  0,  0,183,190,
				 82,253, 30,  0,  0, 47,255, 59,
				  2,219,132,  0,  0,165,185,  0,
				  0,106,230,  4, 31,251, 55,  0,
				  0,  9,236, 84,146,179,  0,  0,
				  0,  0,130,201,244, 50,  0,  0,
				  8,255,255,255,255,255,216,  0,
				  1, 48, 48,255,142, 48, 40,  0,
				  8,255,255,255,255,255,216,  0,
				  1, 48, 48,255,142, 48, 40,  0,
				  0,  0,  0,255,116,  0,  0,  0,
				  0,  0,  0,255,116,  0,  0,  0,
			},
		},
		/* 'X' - 166 */
		{
			4, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			2, // width of character
			17, // height of character
			{
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				  0,  0,
				  0,  0,
				  0,  0,
				  0,  0,
				  0,  0,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
				255, 44,
			},
		},
		/* 'X' - 167 */
		{
			0, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0, 40,180,242,250,215,116,
				  0,215,183, 63, 58,109, 92,
				  0,242,126,  0,  0,  0,  0,
				  0,122,254,173, 63,  0,  0,
				  0, 67,236,189,252,195, 29,
				  0,222,125,  0, 40,216,196,
				  0,248,114,  0,  0, 98,250,
				  0,164,245,106,  7,155,197,
				  0,  6,126,238,239,249, 48,
				  0,  0,  0, 10,104,236,175,
				  0,  0,  0,  0,  0,102,247,
				 25,147, 78, 50, 72,201,192,
				 15,180,237,253,236,164, 24,
			},
		},
		/* 'X' - 168 */
		{
			2, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			2, // height of character
			{
				215, 91,  0, 95,216,
				215, 93,  0, 94,214,
			},
		},
		/* 'X' - 169 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			13, // X advance in pixels
			0, // Y advance in pixels
			11, // width of character
			12, // height of character
			{
				  0,  0, 23,144,218,222,218,144, 23,  0,  0,
				  0, 48,217,100,  9,  0,  9,102,217, 48,  0,
				 13,216, 48,  0,  0,  0,  0,  0, 49,216, 13,
				123,120,  0, 16,162,240,244,166,  0,122,122,
				207, 22,  0,166,203, 43, 31, 63,  0, 24,204,
				223,  0,  0,243, 81,  0,  0,  0,  0,  0,223,
				223,  0,  0,242, 78,  0,  0,  0,  0,  0,223,
				208, 21,  0,164,199, 44, 22, 69,  0, 24,205,
				126,120,  0, 14,158,237,250,202,  0,122,125,
				 16,217, 46,  0,  0,  0,  0,  0, 46,217, 15,
				  0, 50,218,100,  9,  0,  9,101,218, 50,  0,
				  0,  0, 25,149,220,222,220,149, 25,  0,  0,
			},
		},
		/* 'X' - 170 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			4, // width of character
			5, // height of character
			{
				163,222,229,130,
				 24,  0, 28,249,
				114,221,220,255,
				248, 33, 41,255,
				156,228,169,227,
			},
		},
		/* 'X' - 171 */
		{
			0, // X offset from the origin in pixels
			8, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			7, // height of character
			{
				  0,  0, 49,170,  0, 49,170,
				  0,  5,208,101,  5,208,101,
				  0,127,178,  0,127,178,  0,
				  8,245, 44,  8,245, 44,  0,
				  0,131,178,  0,131,178,  0,
				  0,  6,210,101,  6,210,101,
				  0,  0, 50,170,  0, 50,170,
			},
		},
		/* 'X' - 172 */
		{
			1, // X offset from the origin in pixels
			6, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			5, // height of character
			{
				192,255,255,255,255,255,255,
				 33, 44, 44, 44, 44, 80,255,
				  0,  0,  0,  0,  0, 44,255,
				  0,  0,  0,  0,  0, 44,255,
				  0,  0,  0,  0,  0,  8, 48,
			},
		},
		/* 'X' - 173 */
		{
			1, // X offset from the origin in pixels
			5, // Y offset from the origin in pixels
			5, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			2, // height of character
			{
				255,255,255,
				 80, 80, 80,
			},
		},
		/* 'X' - 174 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			13, // X advance in pixels
			0, // Y advance in pixels
			11, // width of character
			12, // height of character
			{
				  0,  0, 23,144,218,222,218,144, 23,  0,  0,
				  0, 48,217,100,  9,  0,  9,102,217, 48,  0,
				 13,216, 48,  0,  0,  0,  0,  0, 49,216, 13,
				123,120,  0,  0,255,255,240,150,  1,122,122,
				207, 22,  0,  0,255, 76, 60,255, 50, 24,204,
				223,  0,  0,  0,255,112,113,249, 28,  0,223,
				223,  0,  0,  0,255,221,240, 87,  0,  0,223,
				208, 21,  0,  0,255, 64, 84,162,  0, 24,205,
				126,120,  0,  0,255, 64,  0,199, 50,122,125,
				 16,217, 46,  0,  0,  0,  0,  0, 46,217, 15,
				  0, 50,218,100,  9,  0,  9,101,218, 50,  0,
				  0,  0, 25,149,220,222,220,149, 25,  0,  0,
			},
		},
		/* 'X' - 175 */
		{
			0, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			2, // height of character
			{
				255,255,255,255,255,255,255,255,
				 24, 24, 24, 24, 24, 24, 24, 24,
			},
		},
		/* 'X' - 176 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			7, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			5, // height of character
			{
				 34,195,249,193, 32,
				195,164, 30,141,192,
				250, 52,  0, 24,249,
				198,159, 29,136,195,
				 36,197,250,196, 34,
			},
		},
		/* 'X' - 177 */
		{
			0, // X offset from the origin in pixels
			10, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			10, // height of character
			{
				  0,  0,  0,  0,  8,  1,  0,  0,  0,
				  0,  0,  0,  0,255, 44,  0,  0,  0,
				  0,  0,  0,  0,255, 44,  0,  0,  0,
				  0,  0,  0,  0,255, 44,  0,  0,  0,
				  8,255,255,255,255,255,255,255, 48,
				  1, 44, 44, 44,255, 80, 44, 44,  8,
				  0,  0,  0,  0,255, 44,  0,  0,  0,
				  0,  0,  0,  0,255, 44,  0,  0,  0,
				  1, 44, 44, 44, 92, 52, 44, 44,  8,
				  8,255,255,255,255,255,255,255, 48,
			},
		},
		/* 'X' - 178 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			7, // height of character
			{
				 99,214,248,218, 79,  0,
				 91, 69,  2, 83,237,  0,
				  0,  0,  0, 65,222,  0,
				  0,  0, 34,213, 63,  0,
				  0, 53,203, 51,  0,  0,
				 80,176, 20,  0,  0,  0,
				253,249,248,248,248, 69,
			},
		},
		/* 'X' - 179 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			7, // height of character
			{
				122,222,249,220, 89,
				 74, 45,  0, 80,241,
				  0,  0,  8,117,191,
				  0,220,233,239, 57,
				  0,  0,  0, 81,228,
				 74, 10,  2,107,229,
				193,245,247,206, 64,
			},
		},
		/* 'X' - 180 */
		{
			3, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			3, // height of character
			{
				  2,222,206,
				 85,248, 47,
				213, 97,  0,
			},
		},
		/* 'X' - 181 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,123,255,
				255,133,  0,  0,  0,183,255,
				255,235, 82, 55,135,249,255,
				255,190,235,247,188, 89,255,
				255,107,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 182 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			15, // height of character
			{
				  6,152,239,255,255,255,255,
				123,255,255,255,244, 64,244,
				211,255,255,255,240,  0,240,
				246,255,255,255,240,  0,240,
				252,255,255,255,240,  0,240,
				233,255,255,255,240,  0,240,
				174,255,255,255,240,  0,240,
				 46,240,255,255,240,  0,240,
				  0, 22, 87, 85,240,  0,240,
				  0,  0,  0,  0,240,  0,240,
				  0,  0,  0,  0,240,  0,240,
				  0,  0,  0,  0,240,  0,240,
				  0,  0,  0,  0,240,  0,240,
				  0,  0,  0,  0,240,  0,240,
				  0,  0,  0,  0,240,  0,240,
			},
		},
		/* 'X' - 183 */
		{
			0, // X offset from the origin in pixels
			7, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			2, // height of character
			{
				 85,246, 84,
				 85,248, 84,
			},
		},
		/* 'X' - 184 */
		{
			0, // X offset from the origin in pixels
			0, // Y offset from the origin in pixels
			3, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			4, // height of character
			{
				  0,126,110,
				  0,210,189,
				  0, 59,247,
				223,227,114,
			},
		},
		/* 'X' - 185 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			4, // width of character
			7, // height of character
			{
				 19,161,255, 32,
				169,109,248, 32,
				  0,  0,255, 32,
				  0,  0,255, 32,
				  0,  0,255, 32,
				  0,  0,255, 32,
				  0,  0,255, 32,
			},
		},
		/* 'X' - 186 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			4, // width of character
			5, // height of character
			{
				 76,222,221, 71,
				219, 52, 54,215,
				252, 12, 13,251,
				217, 52, 55,218,
				 71,221,221, 73,
			},
		},
		/* 'X' - 187 */
		{
			1, // X offset from the origin in pixels
			8, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			7, // height of character
			{
				170, 49,  0,170, 49,  0,  0,
				102,208,  5,102,208,  5,  0,
				  0,179,126,  0,179,126,  0,
				  0, 45,245,  8, 45,245,  8,
				  0,178,130,  0,178,130,  0,
				102,209,  5,102,209,  5,  0,
				170, 49,  0,170, 49,  0,  0,
			},
		},
		/* 'X' - 188 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			12, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			12, // height of character
			{
				 19,161,255, 32,  0,  0,  0, 69,228, 13,  0,  0,
				169,109,248, 32,  0,  0,  7,218, 86,  0,  0,  0,
				  0,  0,255, 32,  0,  0,124,187,  0,  0,  0,  0,
				  0,  0,255, 32,  0, 33,239, 38,  0,  0,  0,  0,
				  0,  0,255, 32,  0,179,132,  0,  0,  0,  0,  0,
				  0,  0,255, 32, 78,223,  9,  0, 88,255, 32,  0,
				  0,  0,255, 41,223, 78,  0, 33,178,252, 32,  0,
				  0,  0,  0,133,178,  0,  4,191, 41,255, 32,  0,
				  0,  0, 38,240, 32,  0,132,117,  0,255, 32,  0,
				  0,  0,187,124,  0,  0,245,248,248,255,249, 27,
				  0, 87,217,  6,  0,  0,  0,  0,  0,255, 32,  0,
				 13,228, 69,  0,  0,  0,  0,  0,  0,255, 32,  0,
			},
		},
		/* 'X' - 189 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			12, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			12, // height of character
			{
				 19,161,255, 32,  0,  0,  0, 69,228, 13,  0,  0,
				169,109,248, 32,  0,  0,  7,218, 86,  0,  0,  0,
				  0,  0,255, 32,  0,  0,124,187,  0,  0,  0,  0,
				  0,  0,255, 32,  0, 33,239, 38,  0,  0,  0,  0,
				  0,  0,255, 32,  0,179,132,  0,  0,  0,  0,  0,
				  0,  0,255, 32, 78,223,109,214,248,218, 79,  0,
				  0,  0,255, 41,223, 78, 91, 69,  2, 83,237,  0,
				  0,  0,  0,133,178,  0,  0,  0,  0, 65,222,  0,
				  0,  0, 38,240, 32,  0,  0,  0, 34,213, 63,  0,
				  0,  0,187,124,  0,  0,  0, 53,203, 51,  0,  0,
				  0, 87,217,  6,  0,  0, 80,176, 20,  0,  0,  0,
				 13,228, 69,  0,  0,  0,253,249,248,248,248, 69,
			},
		},
		/* 'X' - 190 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			12, // X advance in pixels
			0, // Y advance in pixels
			13, // width of character
			12, // height of character
			{
				122,222,249,220, 89,  0,  0,  1,196,114,  0,  0,  0,
				 74, 45,  0, 80,241,  0,  0, 97,210,  4,  0,  0,  0,
				  0,  0,  8,117,191,  0, 17,233, 60,  0,  0,  0,  0,
				  0,220,233,239, 57,  0,152,160,  0,  0,  0,  0,  0,
				  0,  0,  0, 81,228, 53,236, 21,  0,  0,  0,  0,  0,
				 74, 10,  2,107,231,203,105,  0,  0, 88,255, 32,  0,
				193,245,247,206,170,203,  2,  0, 33,178,252, 32,  0,
				  0,  0,  0, 22,236, 53,  0,  4,191, 41,255, 32,  0,
				  0,  0,  0,160,151,  0,  0,132,117,  0,255, 32,  0,
				  0,  0, 60,233, 17,  0,  0,245,248,248,255,249, 27,
				  0,  4,211, 96,  0,  0,  0,  0,  0,  0,255, 32,  0,
				  0,114,196,  1,  0,  0,  0,  0,  0,  0,255, 32,  0,
			},
		},
		/* 'X' - 191 */
		{
			0, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			7, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			12, // height of character
			{
				  0,  0,203,209,  0,  0,
				  0,  0,206,211,  0,  0,
				  0,  0,  0,  0,  0,  0,
				  0,  0, 94,253,  0,  0,
				  0,  0,175,216,  0,  0,
				  0,120,255, 91,  0,  0,
				 77,254,114,  0,  0,  0,
				205,168,  0,  0,  0,  0,
				250, 95,  0,  0,  0,  0,
				238,114,  0,  0,  0,  0,
				156,235, 95, 73,131,150,
				 12,158,239,248,204,110,
			},
		},
		/* 'X' - 192 */
		{
			-1, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			16, // height of character
			{
				  0,  0,  0,  0,207,222,  2,  0,  0,  0,  0,  0,
				  0,  0,  0,  0, 49,249, 86,  0,  0,  0,  0,  0,
				  0,  0,  0,  0,  0, 98,214,  0,  0,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				  0,  0,  0,  0,  0,216,219,  0,  0,  0,  0,  0,
				  0,  0,  0,  0, 59,251,251, 62,  0,  0,  0,  0,
				  0,  0,  0,  0,157,194,194,160,  0,  0,  0,  0,
				  0,  0,  0, 11,243,107,107,244, 12,  0,  0,  0,
				  0,  0,  0, 97,250, 20, 20,250, 99,  0,  0,  0,
				  0,  0,  0,195,178,  0,  0,177,197,  0,  0,  0,
				  0,  0, 37,255, 86,  0,  0, 83,255, 38,  0,  0,
				  0,  0,135,255,255,255,255,255,255,136,  0,  0,
				  0,  3,229,149, 48, 48, 48, 48,147,230,  3,  0,
				  0, 75,255, 38,  0,  0,  0,  0, 38,255, 75,  0,
				  0,173,198,  0,  0,  0,  0,  0,  0,200,173,  0,
				 20,250,103,  0,  0,  0,  0,  0,  0,107,250, 20,
			},
		},
		/* 'X' - 193 */
		{
			-1, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			16, // height of character
			{
				  0,  0,  0,  0,  0,  0,  2,222,206,  0,  0,  0,
				  0,  0,  0,  0,  0,  0, 85,248, 47,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,213, 97,  0,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				  0,  0,  0,  0,  0,216,219,  0,  0,  0,  0,  0,
				  0,  0,  0,  0, 59,251,251, 62,  0,  0,  0,  0,
				  0,  0,  0,  0,157,194,194,160,  0,  0,  0,  0,
				  0,  0,  0, 11,243,107,107,244, 12,  0,  0,  0,
				  0,  0,  0, 97,250, 20, 20,250, 99,  0,  0,  0,
				  0,  0,  0,195,178,  0,  0,177,197,  0,  0,  0,
				  0,  0, 37,255, 86,  0,  0, 83,255, 38,  0,  0,
				  0,  0,135,255,255,255,255,255,255,136,  0,  0,
				  0,  3,229,149, 48, 48, 48, 48,147,230,  3,  0,
				  0, 75,255, 38,  0,  0,  0,  0, 38,255, 75,  0,
				  0,173,198,  0,  0,  0,  0,  0,  0,200,173,  0,
				 20,250,103,  0,  0,  0,  0,  0,  0,107,250, 20,
			},
		},
		/* 'X' - 194 */
		{
			-1, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			16, // height of character
			{
				  0,  0,  0,  0,  0,128,255,128,  0,  0,  0,  0,
				  0,  0,  0,  0, 38,241,115,242, 36,  0,  0,  0,
				  0,  0,  0,  0,203,100,  0,102,201,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				  0,  0,  0,  0,  0,216,219,  0,  0,  0,  0,  0,
				  0,  0,  0,  0, 59,251,251, 62,  0,  0,  0,  0,
				  0,  0,  0,  0,157,194,194,160,  0,  0,  0,  0,
				  0,  0,  0, 11,243,107,107,244, 12,  0,  0,  0,
				  0,  0,  0, 97,250, 20, 20,250, 99,  0,  0,  0,
				  0,  0,  0,195,178,  0,  0,177,197,  0,  0,  0,
				  0,  0, 37,255, 86,  0,  0, 83,255, 38,  0,  0,
				  0,  0,135,255,255,255,255,255,255,136,  0,  0,
				  0,  3,229,149, 48, 48, 48, 48,147,230,  3,  0,
				  0, 75,255, 38,  0,  0,  0,  0, 38,255, 75,  0,
				  0,173,198,  0,  0,  0,  0,  0,  0,200,173,  0,
				 20,250,103,  0,  0,  0,  0,  0,  0,107,250, 20,
			},
		},
		/* 'X' - 195 */
		{
			-1, // X offset from the origin in pixels
			17, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			17, // height of character
			{
				  0,  0,  0,  0,  0,  0,  0,  0,  3,  0,  0,  0,
				  0,  0,  0, 60,236,158,  3,  2,227,  0,  0,  0,
				  0,  0,  0,189, 98,165,168,101,185,  0,  0,  0,
				  0,  0,  0,227,  1,  3,158,235, 56,  0,  0,  0,
				  0,  0,  0,  3,  0,  0,  0,  0,  0,  0,  0,  0,
				  0,  0,  0,  0,  0,216,219,  0,  0,  0,  0,  0,
				  0,  0,  0,  0, 59,251,251, 62,  0,  0,  0,  0,
				  0,  0,  0,  0,157,194,194,160,  0,  0,  0,  0,
				  0,  0,  0, 11,243,107,107,244, 12,  0,  0,  0,
				  0,  0,  0, 97,250, 20, 20,250, 99,  0,  0,  0,
				  0,  0,  0,195,178,  0,  0,177,197,  0,  0,  0,
				  0,  0, 37,255, 86,  0,  0, 83,255, 38,  0,  0,
				  0,  0,135,255,255,255,255,255,255,136,  0,  0,
				  0,  3,229,149, 48, 48, 48, 48,147,230,  3,  0,
				  0, 75,255, 38,  0,  0,  0,  0, 38,255, 75,  0,
				  0,173,198,  0,  0,  0,  0,  0,  0,200,173,  0,
				 20,250,103,  0,  0,  0,  0,  0,  0,107,250, 20,
			},
		},
		/* 'X' - 196 */
		{
			-1, // X offset from the origin in pixels
			15, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			15, // height of character
			{
				  0,  0,  0,  0,215, 91,  0, 95,216,  0,  0,  0,
				  0,  0,  0,  0,215, 93,  0, 94,214,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				  0,  0,  0,  0,  0,216,219,  0,  0,  0,  0,  0,
				  0,  0,  0,  0, 59,251,251, 62,  0,  0,  0,  0,
				  0,  0,  0,  0,157,194,194,160,  0,  0,  0,  0,
				  0,  0,  0, 11,243,107,107,244, 12,  0,  0,  0,
				  0,  0,  0, 97,250, 20, 20,250, 99,  0,  0,  0,
				  0,  0,  0,195,178,  0,  0,177,197,  0,  0,  0,
				  0,  0, 37,255, 86,  0,  0, 83,255, 38,  0,  0,
				  0,  0,135,255,255,255,255,255,255,136,  0,  0,
				  0,  3,229,149, 48, 48, 48, 48,147,230,  3,  0,
				  0, 75,255, 38,  0,  0,  0,  0, 38,255, 75,  0,
				  0,173,198,  0,  0,  0,  0,  0,  0,200,173,  0,
				 20,250,103,  0,  0,  0,  0,  0,  0,107,250, 20,
			},
		},
		/* 'X' - 197 */
		{
			-1, // X offset from the origin in pixels
			15, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			15, // height of character
			{
				  0,  0,  0,  0, 95,215,212, 88,  0,  0,  0,  0,
				  0,  0,  0,  0,223, 14, 15,222,  0,  0,  0,  0,
				  0,  0,  0,  0,223, 10, 14,221,  0,  0,  0,  0,
				  0,  0,  0,  0, 96,255,255, 90,  0,  0,  0,  0,
				  0,  0,  0,  0, 59,251,251, 62,  0,  0,  0,  0,
				  0,  0,  0,  0,157,194,194,160,  0,  0,  0,  0,
				  0,  0,  0, 11,243,107,107,244, 12,  0,  0,  0,
				  0,  0,  0, 97,250, 20, 20,250, 99,  0,  0,  0,
				  0,  0,  0,195,178,  0,  0,177,197,  0,  0,  0,
				  0,  0, 37,255, 86,  0,  0, 83,255, 38,  0,  0,
				  0,  0,135,255,255,255,255,255,255,136,  0,  0,
				  0,  3,229,149, 48, 48, 48, 48,147,230,  3,  0,
				  0, 75,255, 38,  0,  0,  0,  0, 38,255, 75,  0,
				  0,173,198,  0,  0,  0,  0,  0,  0,200,173,  0,
				 20,250,103,  0,  0,  0,  0,  0,  0,107,250, 20,
			},
		},
		/* 'X' - 198 */
		{
			-1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			14, // X advance in pixels
			0, // Y advance in pixels
			14, // width of character
			12, // height of character
			{
				  0,  0,  0,  0,  0, 15,242,255,255,255,255,255,255,255,
				  0,  0,  0,  0,  0,119,218, 48,255,142, 48, 48, 48, 48,
				  0,  0,  0,  0,  6,229,106,  0,255,116,  0,  0,  0,  0,
				  0,  0,  0,  0, 96,238, 11,  0,255,116,  0,  0,  0,  0,
				  0,  0,  0,  1,212,135,  0,  0,255,116,  0,  0,  0,  0,
				  0,  0,  0, 74,250, 27,  0,  0,255,255,255,255,255,255,
				  0,  0,  0,190,164,  0,  0,  0,255,142, 48, 48, 48, 48,
				  0,  0, 51,255,255,255,255,255,255,116,  0,  0,  0,  0,
				  0,  0,168,195, 48, 48, 48, 48,255,116,  0,  0,  0,  0,
				  0, 32,252, 78,  0,  0,  0,  0,255,116,  0,  0,  0,  0,
				  0,145,219,  2,  0,  0,  0,  0,255,142, 48, 48, 48, 48,
				 17,244,108,  0,  0,  0,  0,  0,255,255,255,255,255,255,
			},
		},
		/* 'X' - 199 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			16, // height of character
			{
				  0,  0, 43,159,225,249,244,207,126,
				  0, 86,249,198, 91, 54, 70,139,122,
				 36,246,170,  3,  0,  0,  0,  0,  0,
				148,246, 19,  0,  0,  0,  0,  0,  0,
				217,182,  0,  0,  0,  0,  0,  0,  0,
				247,148,  0,  0,  0,  0,  0,  0,  0,
				247,147,  0,  0,  0,  0,  0,  0,  0,
				220,178,  0,  0,  0,  0,  0,  0,  0,
				158,242, 13,  0,  0,  0,  0,  0,  0,
				 49,252,161,  2,  0,  0,  0,  0,  0,
				  0,108,254,198, 95, 56, 55, 89,152,
				  0,  0, 55,168,228,250,250,227,174,
				  0,  0,  0,  0,  0,126,110,  0,  0,
				  0,  0,  0,  0,  0,210,189,  0,  0,
				  0,  0,  0,  0,  0, 59,247,  0,  0,
				  0,  0,  0,  0,223,227,114,  0,  0,
			},
		},
		/* 'X' - 200 */
		{
			1, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			16, // height of character
			{
				  0,207,222,  2,  0,  0,
				  0, 49,249, 86,  0,  0,
				  0,  0, 98,214,  0,  0,
				  0,  0,  0,  0,  0,  0,
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,142, 48, 48, 48, 48,
				255,255,255,255,255,255,
			},
		},
		/* 'X' - 201 */
		{
			1, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			16, // height of character
			{
				  0,  0,  2,222,206,  0,
				  0,  0, 85,248, 47,  0,
				  0,  0,213, 97,  0,  0,
				  0,  0,  0,  0,  0,  0,
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,142, 48, 48, 48, 48,
				255,255,255,255,255,255,
			},
		},
		/* 'X' - 202 */
		{
			1, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			16, // height of character
			{
				  0,  0,128,255,128,  0,
				  0, 38,241,115,242, 36,
				  0,203,100,  0,102,201,
				  0,  0,  0,  0,  0,  0,
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,142, 48, 48, 48, 48,
				255,255,255,255,255,255,
			},
		},
		/* 'X' - 203 */
		{
			1, // X offset from the origin in pixels
			15, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			15, // height of character
			{
				  0,215, 91,  0, 95,216,
				  0,215, 93,  0, 94,214,
				  0,  0,  0,  0,  0,  0,
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,255,255,255,255,255,
				255,142, 48, 48, 48, 48,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,
				255,142, 48, 48, 48, 48,
				255,255,255,255,255,255,
			},
		},
		/* 'X' - 204 */
		{
			0, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			16, // height of character
			{
				  0,207,222,  2,  0,
				  0, 49,249, 86,  0,
				  0,  0, 98,214,  0,
				  0,  0,  0,  0,  0,
				102,252,255,255,151,
				  0, 40,255, 92,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 40,255, 92,  0,
				102,251,255,255,150,
			},
		},
		/* 'X' - 205 */
		{
			0, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			16, // height of character
			{
				  0,  0,  2,222,206,
				  0,  0, 85,248, 47,
				  0,  0,213, 97,  0,
				  0,  0,  0,  0,  0,
				102,252,255,255,151,
				  0, 40,255, 92,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 40,255, 92,  0,
				102,251,255,255,150,
			},
		},
		/* 'X' - 206 */
		{
			0, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			16, // height of character
			{
				  0,128,255,128,  0,
				 38,241,115,242, 36,
				203,100,  0,102,201,
				  0,  0,  0,  0,  0,
				102,252,255,255,151,
				  0, 40,255, 92,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 40,255, 92,  0,
				102,251,255,255,150,
			},
		},
		/* 'X' - 207 */
		{
			0, // X offset from the origin in pixels
			15, // Y offset from the origin in pixels
			6, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			15, // height of character
			{
				215, 91,  0, 95,216,
				215, 93,  0, 94,214,
				  0,  0,  0,  0,  0,
				102,252,255,255,151,
				  0, 40,255, 92,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 32,255, 84,  0,
				  0, 40,255, 92,  0,
				102,251,255,255,150,
			},
		},
		/* 'X' - 208 */
		{
			0, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			12, // height of character
			{
				  0,255,255,255,252,230,170, 58,  0,  0,
				  0,255,142, 48, 54, 88,185,253,107,  0,
				  0,255,116,  0,  0,  0,  0,146,252, 49,
				  0,255,116,  0,  0,  0,  0, 10,240,158,
				  0,255,116,  0,  0,  0,  0,  0,177,222,
				255,255,255,255,255,  0,  0,  0,147,248,
				 48,255,142, 48, 48,  0,  0,  0,150,244,
				  0,255,116,  0,  0,  0,  0,  0,183,215,
				  0,255,116,  0,  0,  0,  0, 17,245,149,
				  0,255,116,  0,  0,  0,  4,168,249, 39,
				  0,255,142, 48, 59,103,206,250, 93,  0,
				  0,255,255,255,248,222,158, 45,  0,  0,
			},
		},
		/* 'X' - 209 */
		{
			1, // X offset from the origin in pixels
			17, // Y offset from the origin in pixels
			12, // X advance in pixels
			0, // Y advance in pixels
			9, // width of character
			17, // height of character
			{
				  0,  0,  0,  0,  0,  0,  0,  3,  0,
				  0,  0, 60,236,158,  3,  2,227,  0,
				  0,  0,189, 98,165,168,101,185,  0,
				  0,  0,227,  1,  3,158,235, 56,  0,
				  0,  0,  3,  0,  0,  0,  0,  0,  0,
				255,243, 25,  0,  0,  0,  0,116,255,
				255,246,159,  0,  0,  0,  0,116,255,
				255,140,252, 50,  0,  0,  0,116,255,
				255,101,160,194,  0,  0,  0,116,255,
				255,110, 25,243, 85,  0,  0,116,255,
				255,115,  0,123,223,  8,  0,116,255,
				255,116,  0,  8,224,122,  0,116,255,
				255,116,  0,  0, 87,243, 24,113,255,
				255,116,  0,  0,  0,195,158,103,255,
				255,116,  0,  0,  0, 51,252,143,255,
				255,116,  0,  0,  0,  0,160,248,255,
				255,116,  0,  0,  0,  0, 25,243,255,
			},
		},
		/* 'X' - 210 */
		{
			0, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			16, // height of character
			{
				  0,  0,  0,207,222,  2,  0,  0,  0,  0,
				  0,  0,  0, 49,249, 86,  0,  0,  0,  0,
				  0,  0,  0,  0, 98,214,  0,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				  0,  1, 98,200,243,244,199, 92,  0,  0,
				  0,157,250,138, 62, 60,134,249,141,  0,
				 74,255,101,  0,  0,  0,  0, 97,255, 62,
				172,228,  1,  0,  0,  0,  0,  1,227,163,
				226,169,  0,  0,  0,  0,  0,  0,170,222,
				249,145,  0,  0,  0,  0,  0,  0,145,247,
				249,146,  0,  0,  0,  0,  0,  0,147,247,
				224,170,  0,  0,  0,  0,  0,  0,171,221,
				171,229,  2,  0,  0,  0,  0,  1,228,162,
				 73,255,100,  0,  0,  0,  0, 97,255, 61,
				  0,157,250,136, 61, 60,134,249,141,  0,
				  0,  2,102,204,245,244,200, 93,  0,  0,
			},
		},
		/* 'X' - 211 */
		{
			0, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			16, // height of character
			{
				  0,  0,  0,  0,  2,222,206,  0,  0,  0,
				  0,  0,  0,  0, 85,248, 47,  0,  0,  0,
				  0,  0,  0,  0,213, 97,  0,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				  0,  1, 98,200,243,244,199, 92,  0,  0,
				  0,157,250,138, 62, 60,134,249,141,  0,
				 74,255,101,  0,  0,  0,  0, 97,255, 62,
				172,228,  1,  0,  0,  0,  0,  1,227,163,
				226,169,  0,  0,  0,  0,  0,  0,170,222,
				249,145,  0,  0,  0,  0,  0,  0,145,247,
				249,146,  0,  0,  0,  0,  0,  0,147,247,
				224,170,  0,  0,  0,  0,  0,  0,171,221,
				171,229,  2,  0,  0,  0,  0,  1,228,162,
				 73,255,100,  0,  0,  0,  0, 97,255, 61,
				  0,157,250,136, 61, 60,134,249,141,  0,
				  0,  2,102,204,245,244,200, 93,  0,  0,
			},
		},
		/* 'X' - 212 */
		{
			0, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			16, // height of character
			{
				  0,  0,  0,  0,128,255,128,  0,  0,  0,
				  0,  0,  0, 38,241,115,242, 36,  0,  0,
				  0,  0,  0,203,100,  0,102,201,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				  0,  1, 98,200,243,244,199, 92,  0,  0,
				  0,157,250,138, 62, 60,134,249,141,  0,
				 74,255,101,  0,  0,  0,  0, 97,255, 62,
				172,228,  1,  0,  0,  0,  0,  1,227,163,
				226,169,  0,  0,  0,  0,  0,  0,170,222,
				249,145,  0,  0,  0,  0,  0,  0,145,247,
				249,146,  0,  0,  0,  0,  0,  0,147,247,
				224,170,  0,  0,  0,  0,  0,  0,171,221,
				171,229,  2,  0,  0,  0,  0,  1,228,162,
				 73,255,100,  0,  0,  0,  0, 97,255, 61,
				  0,157,250,136, 61, 60,134,249,141,  0,
				  0,  2,102,204,245,244,200, 93,  0,  0,
			},
		},
		/* 'X' - 213 */
		{
			0, // X offset from the origin in pixels
			17, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			17, // height of character
			{
				  0,  0,  0,  0,  0,  0,  0,  3,  0,  0,
				  0,  0, 60,236,158,  3,  2,227,  0,  0,
				  0,  0,189, 98,165,168,101,185,  0,  0,
				  0,  0,227,  1,  3,158,235, 56,  0,  0,
				  0,  0,  3,  0,  0,  0,  0,  0,  0,  0,
				  0,  1, 98,200,243,244,199, 92,  0,  0,
				  0,157,250,138, 62, 60,134,249,141,  0,
				 74,255,101,  0,  0,  0,  0, 97,255, 62,
				172,228,  1,  0,  0,  0,  0,  1,227,163,
				226,169,  0,  0,  0,  0,  0,  0,170,222,
				249,145,  0,  0,  0,  0,  0,  0,145,247,
				249,146,  0,  0,  0,  0,  0,  0,147,247,
				224,170,  0,  0,  0,  0,  0,  0,171,221,
				171,229,  2,  0,  0,  0,  0,  1,228,162,
				 73,255,100,  0,  0,  0,  0, 97,255, 61,
				  0,157,250,136, 61, 60,134,249,141,  0,
				  0,  2,102,204,245,244,200, 93,  0,  0,
			},
		},
		/* 'X' - 214 */
		{
			0, // X offset from the origin in pixels
			15, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			15, // height of character
			{
				  0,  0,  0,215, 91,  0, 95,216,  0,  0,
				  0,  0,  0,215, 93,  0, 94,214,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				  0,  1, 98,200,243,244,199, 92,  0,  0,
				  0,157,250,138, 62, 60,134,249,141,  0,
				 74,255,101,  0,  0,  0,  0, 97,255, 62,
				172,228,  1,  0,  0,  0,  0,  1,227,163,
				226,169,  0,  0,  0,  0,  0,  0,170,222,
				249,145,  0,  0,  0,  0,  0,  0,145,247,
				249,146,  0,  0,  0,  0,  0,  0,147,247,
				224,170,  0,  0,  0,  0,  0,  0,171,221,
				171,229,  2,  0,  0,  0,  0,  1,228,162,
				 73,255,100,  0,  0,  0,  0, 97,255, 61,
				  0,157,250,136, 61, 60,134,249,141,  0,
				  0,  2,102,204,245,244,200, 93,  0,  0,
			},
		},
		/* 'X' - 215 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			7, // height of character
			{
				 79, 76,  0,  0,  0, 68, 89,
				 68,225, 42,  0, 40,223, 69,
				  0, 39,184, 38,183, 39,  0,
				  0,  0, 36,228, 35,  0,  0,
				  0, 40,184, 38,182, 39,  0,
				 70,225, 41,  0, 39,222, 69,
				 72, 71,  0,  0,  0, 66, 84,
			},
		},
		/* 'X' - 216 */
		{
			0, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			14, // height of character
			{
				  0,  0,  0,  0,  0,  0,  0,  0, 38,  0,
				  0,  1, 98,200,243,247,200,150,245, 19,
				  0,157,250,138, 62, 60,149,255,183,  0,
				 74,255,101,  0,  0,  0,159,240,255, 60,
				172,228,  1,  0,  0, 55,253, 66,229,162,
				226,169,  0,  0,  2,203,167,  0,170,221,
				249,145,  0,  0,101,243, 27,  0,145,247,
				248,145,  0, 17,235,119,  0,  0,147,247,
				225,168,  0,148,217,  6,  0,  0,171,221,
				171,227, 49,252, 72,  0,  0,  1,228,162,
				 74,255,233,176,  0,  0,  0, 97,255, 61,
				  0,183,255,154, 59, 61,134,249,141,  0,
				 13,238,170,208,248,244,200, 93,  0,  0,
				  0, 54,  3,  0,  0,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 217 */
		{
			1, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			16, // height of character
			{
				  0,  0,207,222,  2,  0,  0,  0,
				  0,  0, 49,249, 86,  0,  0,  0,
				  0,  0,  0, 98,214,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,
				252,114,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				254,116,  0,  0,  0,  0,116,255,
				238,130,  0,  0,  0,  0,133,237,
				180,203,  0,  0,  0,  1,206,175,
				 54,250,164, 62, 62,166,248, 50,
				  0, 61,193,245,243,188, 55,  0,
			},
		},
		/* 'X' - 218 */
		{
			1, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			16, // height of character
			{
				  0,  0,  0,  2,222,206,  0,  0,
				  0,  0,  0, 85,248, 47,  0,  0,
				  0,  0,  0,213, 97,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,
				252,114,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				254,116,  0,  0,  0,  0,116,255,
				238,130,  0,  0,  0,  0,133,237,
				180,203,  0,  0,  0,  1,206,175,
				 54,250,164, 62, 62,166,248, 50,
				  0, 61,193,245,243,188, 55,  0,
			},
		},
		/* 'X' - 219 */
		{
			1, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			16, // height of character
			{
				  0,  0,  0,128,255,128,  0,  0,
				  0,  0, 38,241,115,242, 36,  0,
				  0,  0,203,100,  0,102,201,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,
				252,114,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				254,116,  0,  0,  0,  0,116,255,
				238,130,  0,  0,  0,  0,133,237,
				180,203,  0,  0,  0,  1,206,175,
				 54,250,164, 62, 62,166,248, 50,
				  0, 61,193,245,243,188, 55,  0,
			},
		},
		/* 'X' - 220 */
		{
			1, // X offset from the origin in pixels
			15, // Y offset from the origin in pixels
			11, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			15, // height of character
			{
				  0,  0,215, 91,  0, 95,216,  0,
				  0,  0,215, 93,  0, 94,214,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,
				252,114,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				255,116,  0,  0,  0,  0,116,255,
				254,116,  0,  0,  0,  0,116,255,
				238,130,  0,  0,  0,  0,133,237,
				180,203,  0,  0,  0,  1,206,175,
				 54,250,164, 62, 62,166,248, 50,
				  0, 61,193,245,243,188, 55,  0,
			},
		},
		/* 'X' - 221 */
		{
			-2, // X offset from the origin in pixels
			16, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			11, // width of character
			16, // height of character
			{
				  0,  0,  0,  0,  0,  2,222,206,  0,  0,  0,
				  0,  0,  0,  0,  0, 85,248, 47,  0,  0,  0,
				  0,  0,  0,  0,  0,213, 97,  0,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				  3,215,185,  0,  0,  0,  0,  0,145,236, 14,
				  0, 81,255, 61,  0,  0,  0, 28,248,113,  0,
				  0,  0,198,192,  0,  0,  0,151,225,  7,  0,
				  0,  0, 60,255, 69,  0, 31,249, 95,  0,  0,
				  0,  0,  0,178,200,  0,156,211,  2,  0,  0,
				  0,  0,  0, 43,252,112,251, 77,  0,  0,  0,
				  0,  0,  0,  0,158,255,196,  0,  0,  0,  0,
				  0,  0,  0,  0, 43,255, 91,  0,  0,  0,  0,
				  0,  0,  0,  0, 32,255, 84,  0,  0,  0,  0,
				  0,  0,  0,  0, 32,255, 84,  0,  0,  0,  0,
				  0,  0,  0,  0, 32,255, 84,  0,  0,  0,  0,
				  0,  0,  0,  0, 32,255, 84,  0,  0,  0,  0,
			},
		},
		/* 'X' - 222 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,255,255,246,205,108,  1,
				255,142, 48, 64,148,255,126,
				255,116,  0,  0,  0,184,228,
				255,116,  0,  0,  0,145,250,
				255,116,  0,  0,  0,193,212,
				255,142, 49, 69,158,255, 88,
				255,255,255,240,190, 72,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
				255,116,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 223 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			10, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			13, // height of character
			{
				 14,152,231,252,234,164, 24,  0,
				165,236, 92, 51, 82,225,191,  0,
				242,126,  0,  0,  0,118,248,  0,
				255,108,  0,  0, 19,208,173,  0,
				255,108,  0, 54,228,174, 12,  0,
				255,108,  0,225,149,  0,  0,  0,
				255,108,  0,234,165,  5,  0,  0,
				255,108,  0, 75,243,213, 53,  0,
				255,108,  0,  0, 32,185,249, 76,
				255,108,  0,  0,  0,  1,177,223,
				255,108,  0,  0,  0,  0,115,249,
				255,108,  0,147, 63, 65,213,192,
				255,108,  0,178,243,248,191, 36,
			},
		},
		/* 'X' - 224 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,207,222,  2,  0,  0,
				  0,  0, 49,249, 86,  0,  0,
				  0,  0,  0, 98,214,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,
				 73,180,235,252,234,166, 22,
				 80,149, 77, 52, 90,239,179,
				  0,  0,  0,  0,  0,134,246,
				  0,  0,  0,  0,  0,105,255,
				  9,122,200,233,247,254,255,
				174,242,129, 77, 58,137,255,
				249,134,  0,  0,  0,146,255,
				213,209, 68, 58,129,229,255,
				 51,202,251,239,157, 47,255,
			},
		},
		/* 'X' - 225 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,  0,  2,222,206,  0,
				  0,  0,  0, 85,248, 47,  0,
				  0,  0,  0,213, 97,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,
				 73,180,235,252,234,166, 22,
				 80,149, 77, 52, 90,239,179,
				  0,  0,  0,  0,  0,134,246,
				  0,  0,  0,  0,  0,105,255,
				  9,122,200,233,247,254,255,
				174,242,129, 77, 58,137,255,
				249,134,  0,  0,  0,146,255,
				213,209, 68, 58,129,229,255,
				 51,202,251,239,157, 47,255,
			},
		},
		/* 'X' - 226 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,  0,128,255,128,  0,
				  0,  0, 38,241,115,242, 36,
				  0,  0,203,100,  0,102,201,
				  0,  0,  0,  0,  0,  0,  0,
				 73,180,235,252,234,166, 22,
				 80,149, 77, 52, 90,239,179,
				  0,  0,  0,  0,  0,134,246,
				  0,  0,  0,  0,  0,105,255,
				  9,122,200,233,247,254,255,
				174,242,129, 77, 58,137,255,
				249,134,  0,  0,  0,146,255,
				213,209, 68, 58,129,229,255,
				 51,202,251,239,157, 47,255,
			},
		},
		/* 'X' - 227 */
		{
			1, // X offset from the origin in pixels
			14, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			14, // height of character
			{
				  0,  0,  0,  0,  0,  0,  3,
				  0, 60,236,158,  3,  2,227,
				  0,189, 98,165,168,101,185,
				  0,227,  1,  3,158,235, 56,
				  0,  3,  0,  0,  0,  0,  0,
				 73,180,235,252,234,166, 22,
				 80,149, 77, 52, 90,239,179,
				  0,  0,  0,  0,  0,134,246,
				  0,  0,  0,  0,  0,105,255,
				  9,122,200,233,247,254,255,
				174,242,129, 77, 58,137,255,
				249,134,  0,  0,  0,146,255,
				213,209, 68, 58,129,229,255,
				 51,202,251,239,157, 47,255,
			},
		},
		/* 'X' - 228 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				  0,  0,215, 91,  0, 95,216,
				  0,  0,215, 93,  0, 94,214,
				  0,  0,  0,  0,  0,  0,  0,
				 73,180,235,252,234,166, 22,
				 80,149, 77, 52, 90,239,179,
				  0,  0,  0,  0,  0,134,246,
				  0,  0,  0,  0,  0,105,255,
				  9,122,200,233,247,254,255,
				174,242,129, 77, 58,137,255,
				249,134,  0,  0,  0,146,255,
				213,209, 68, 58,129,229,255,
				 51,202,251,239,157, 47,255,
			},
		},
		/* 'X' - 229 */
		{
			1, // X offset from the origin in pixels
			14, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			14, // height of character
			{
				  0,  0, 95,215,212, 88,  0,
				  0,  0,223, 14, 15,222,  0,
				  0,  0,223, 10, 14,221,  0,
				  0,  0, 96,215,214, 89,  0,
				  0,  0,  0,  0,  0,  0,  0,
				 73,180,235,252,234,166, 22,
				 80,149, 77, 52, 90,239,179,
				  0,  0,  0,  0,  0,134,246,
				  0,  0,  0,  0,  0,105,255,
				  9,122,200,233,247,254,255,
				174,242,129, 77, 58,137,255,
				249,134,  0,  0,  0,146,255,
				213,209, 68, 58,129,229,255,
				 51,202,251,239,157, 47,255,
			},
		},
		/* 'X' - 230 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			14, // X advance in pixels
			0, // Y advance in pixels
			12, // width of character
			9, // height of character
			{
				113,201,245,246,200, 59, 60,203,248,218, 90,  0,
				128,120, 61, 58,176,238,243,153, 56,116,253, 73,
				  0,  0,  0,  0, 23,255,211,  1,  0,  0,178,189,
				  0,  0,  0,  0,  0,252,144,  0,  0,  0,128,241,
				 15,139,213,240,251,255,255,255,255,255,255,255,
				182,224, 72, 21,  6,255,153, 48, 48, 48, 48, 48,
				249,129,  0,  0, 39,255,191,  0,  0,  0,  0,  0,
				213,209, 63, 73,204,147,247,163, 81, 78,119,115,
				 53,208,251,226,114,  0, 57,192,244,249,211, 85,
			},
		},
		/* 'X' - 231 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			6, // width of character
			13, // height of character
			{
				  0, 72,200,248,240,170,
				 58,252,164, 73, 86,101,
				177,207,  0,  0,  0,  0,
				235,139,  0,  0,  0,  0,
				251,122,  0,  0,  0,  0,
				238,137,  0,  0,  0,  0,
				183,203,  0,  0,  0,  0,
				 64,254,160, 72, 82,122,
				  0, 77,204,250,242,154,
				  0,  0,  0,126,110,  0,
				  0,  0,  0,210,189,  0,
				  0,  0,  0, 59,247,  0,
				  0,  0,223,227,114,  0,
			},
		},
		/* 'X' - 232 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,207,222,  2,  0,  0,
				  0,  0, 49,249, 86,  0,  0,
				  0,  0,  0, 98,214,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,
				  0, 68,205,248,219, 93,  0,
				 51,250,153, 56,116,253, 75,
				170,211,  1,  0,  0,178,190,
				232,144,  0,  0,  0,128,241,
				251,255,255,255,255,255,255,
				235,154, 48, 48, 48, 48, 48,
				174,192,  0,  0,  0,  0,  0,
				 48,248,160, 74, 70,111,111,
				  0, 57,192,246,249,211, 87,
			},
		},
		/* 'X' - 233 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,  0,  2,222,206,  0,
				  0,  0,  0, 85,248, 47,  0,
				  0,  0,  0,213, 97,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,
				  0, 68,205,248,219, 93,  0,
				 51,250,153, 56,116,253, 75,
				170,211,  1,  0,  0,178,190,
				232,144,  0,  0,  0,128,241,
				251,255,255,255,255,255,255,
				235,154, 48, 48, 48, 48, 48,
				174,192,  0,  0,  0,  0,  0,
				 48,248,160, 74, 70,111,111,
				  0, 57,192,246,249,211, 87,
			},
		},
		/* 'X' - 234 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,128,255,128,  0,  0,
				  0, 38,241,115,242, 36,  0,
				  0,203,100,  0,102,201,  0,
				  0,  0,  0,  0,  0,  0,  0,
				  0, 68,205,248,219, 93,  0,
				 51,250,153, 56,116,253, 75,
				170,211,  1,  0,  0,178,190,
				232,144,  0,  0,  0,128,241,
				251,255,255,255,255,255,255,
				235,154, 48, 48, 48, 48, 48,
				174,192,  0,  0,  0,  0,  0,
				 48,248,160, 74, 70,111,111,
				  0, 57,192,246,249,211, 87,
			},
		},
		/* 'X' - 235 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				  0,215, 91,  0, 95,216,  0,
				  0,215, 93,  0, 94,214,  0,
				  0,  0,  0,  0,  0,  0,  0,
				  0, 68,205,248,219, 93,  0,
				 51,250,153, 56,116,253, 75,
				170,211,  1,  0,  0,178,190,
				232,144,  0,  0,  0,128,241,
				251,255,255,255,255,255,255,
				235,154, 48, 48, 48, 48, 48,
				174,192,  0,  0,  0,  0,  0,
				 48,248,160, 74, 70,111,111,
				  0, 57,192,246,249,211, 87,
			},
		},
		/* 'X' - 236 */
		{
			0, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			13, // height of character
			{
				207,222,  2,
				 49,249, 86,
				  0, 98,214,
				  0,  0,  0,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
				  0,255,108,
			},
		},
		/* 'X' - 237 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			3, // width of character
			13, // height of character
			{
				  2,222,206,
				 85,248, 47,
				213, 97,  0,
				  0,  0,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
				255,108,  0,
			},
		},
		/* 'X' - 238 */
		{
			-1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			13, // height of character
			{
				  0,128,255,128,  0,
				 38,241,115,242, 36,
				203,100,  0,102,201,
				  0,  0,  0,  0,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
			},
		},
		/* 'X' - 239 */
		{
			-1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			4, // X advance in pixels
			0, // Y advance in pixels
			5, // width of character
			12, // height of character
			{
				215, 91,  0, 95,216,
				215, 93,  0, 94,214,
				  0,  0,  0,  0,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
				  0,  0,255,108,  0,
			},
		},
		/* 'X' - 240 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,170, 64, 43,149,  0,
				  0,  0,110,248,238,107,  0,
				  0, 56,190,231,243, 46,  0,
				  0,167,128,  9,147,210,  3,
				  0,  0,  0,  0, 17,244, 84,
				  0,122,230,249,189,199,168,
				104,253,117, 54,125,254,220,
				208,176,  0,  0,  0,174,248,
				248,127,  0,  0,  0,124,250,
				246,127,  0,  0,  0,135,226,
				201,179,  0,  0,  0,191,166,
				 84,254,124, 54,126,250, 51,
				  0, 95,218,249,212, 75,  0,
			},
		},
		/* 'X' - 241 */
		{
			1, // X offset from the origin in pixels
			14, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			14, // height of character
			{
				  0,  0,  0,  0,  0,  0,  3,
				  0, 60,236,158,  3,  2,227,
				  0,189, 98,165,168,101,185,
				  0,227,  1,  3,158,235, 56,
				  0,  3,  0,  0,  0,  0,  0,
				255, 74,161,242,245,180, 26,
				255,238,140, 56, 83,236,176,
				255,183,  0,  0,  0,133,240,
				255,121,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
			},
		},
		/* 'X' - 242 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,207,222,  2,  0,  0,
				  0,  0, 49,249, 86,  0,  0,
				  0,  0,  0, 98,214,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,
				  0, 85,215,249,212, 77,  0,
				 68,254,126, 55,128,252, 59,
				184,190,  0,  0,  0,193,176,
				237,135,  0,  0,  0,136,234,
				252,122,  0,  0,  0,123,251,
				235,135,  0,  0,  0,137,235,
				178,191,  0,  0,  0,194,179,
				 59,252,125, 54,127,253, 64,
				  0, 78,213,250,214, 84,  0,
			},
		},
		/* 'X' - 243 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,  0,  2,222,206,  0,
				  0,  0,  0, 85,248, 47,  0,
				  0,  0,  0,213, 97,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,
				  0, 85,215,249,212, 77,  0,
				 68,254,126, 55,128,252, 59,
				184,190,  0,  0,  0,193,176,
				237,135,  0,  0,  0,136,234,
				252,122,  0,  0,  0,123,251,
				235,135,  0,  0,  0,137,235,
				178,191,  0,  0,  0,194,179,
				 59,252,125, 54,127,253, 64,
				  0, 78,213,250,214, 84,  0,
			},
		},
		/* 'X' - 244 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,128,255,128,  0,  0,
				  0, 38,241,115,242, 36,  0,
				  0,203,100,  0,102,201,  0,
				  0,  0,  0,  0,  0,  0,  0,
				  0, 85,215,249,212, 77,  0,
				 68,254,126, 55,128,252, 59,
				184,190,  0,  0,  0,193,176,
				237,135,  0,  0,  0,136,234,
				252,122,  0,  0,  0,123,251,
				235,135,  0,  0,  0,137,235,
				178,191,  0,  0,  0,194,179,
				 59,252,125, 54,127,253, 64,
				  0, 78,213,250,214, 84,  0,
			},
		},
		/* 'X' - 245 */
		{
			1, // X offset from the origin in pixels
			14, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			14, // height of character
			{
				  0,  0,  0,  0,  0,  0,  3,
				  0, 60,236,158,  3,  2,227,
				  0,189, 98,165,168,101,185,
				  0,227,  1,  3,158,235, 56,
				  0,  3,  0,  0,  0,  0,  0,
				  0, 85,215,249,212, 77,  0,
				 68,254,126, 55,128,252, 59,
				184,190,  0,  0,  0,193,176,
				237,135,  0,  0,  0,136,234,
				252,122,  0,  0,  0,123,251,
				235,135,  0,  0,  0,137,235,
				178,191,  0,  0,  0,194,179,
				 59,252,125, 54,127,253, 64,
				  0, 78,213,250,214, 84,  0,
			},
		},
		/* 'X' - 246 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				  0,215, 91,  0, 95,216,  0,
				  0,215, 93,  0, 94,214,  0,
				  0,  0,  0,  0,  0,  0,  0,
				  0, 85,215,249,212, 77,  0,
				 68,254,126, 55,128,252, 59,
				184,190,  0,  0,  0,193,176,
				237,135,  0,  0,  0,136,234,
				252,122,  0,  0,  0,123,251,
				235,135,  0,  0,  0,137,235,
				178,191,  0,  0,  0,194,179,
				 59,252,125, 54,127,253, 64,
				  0, 78,213,250,214, 84,  0,
			},
		},
		/* 'X' - 247 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			8, // width of character
			7, // height of character
			{
				  0,  0,  0,230, 27,  0,  0,  0,
				  0,  0,  0, 27,  0,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,
				184,255,255,255,255,255,255,128,
				 31, 44, 44, 44, 44, 44, 44, 22,
				  0,  0,  0, 27,  0,  0,  0,  0,
				  0,  0,  0,230, 27,  0,  0,  0,
			},
		},
		/* 'X' - 248 */
		{
			1, // X offset from the origin in pixels
			9, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			9, // height of character
			{
				  0, 85,214,250,211,202, 82,
				 68,254,125, 54,186,255, 67,
				184,190,  0, 21,241,225,178,
				237,135,  0,146,175,137,235,
				252,121, 35,245, 39,123,251,
				236,133,168,150,  0,137,235,
				179,219,242, 22,  0,194,179,
				 66,255,185, 53,127,253, 64,
				 78,206,211,249,214, 83,  0,
			},
		},
		/* 'X' - 249 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,207,222,  2,  0,  0,  0,
				  0, 49,249, 86,  0,  0,  0,
				  0,  0, 98,214,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,123,255,
				241,133,  0,  0,  0,183,255,
				176,235, 82, 55,137,238,255,
				 26,181,245,243,163, 73,255,
			},
		},
		/* 'X' - 250 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,  0,  2,222,206,  0,
				  0,  0,  0, 85,248, 47,  0,
				  0,  0,  0,213, 97,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,123,255,
				241,133,  0,  0,  0,183,255,
				176,235, 82, 55,137,238,255,
				 26,181,245,243,163, 73,255,
			},
		},
		/* 'X' - 251 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			13, // height of character
			{
				  0,  0,128,255,128,  0,  0,
				  0, 38,241,115,242, 36,  0,
				  0,203,100,  0,102,201,  0,
				  0,  0,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,123,255,
				241,133,  0,  0,  0,183,255,
				176,235, 82, 55,137,238,255,
				 26,181,245,243,163, 73,255,
			},
		},
		/* 'X' - 252 */
		{
			1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			12, // height of character
			{
				  0,215, 91,  0, 95,216,  0,
				  0,215, 93,  0, 94,214,  0,
				  0,  0,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,108,255,
				255,108,  0,  0,  0,123,255,
				241,133,  0,  0,  0,183,255,
				176,235, 82, 55,137,238,255,
				 26,181,245,243,163, 73,255,
			},
		},
		/* 'X' - 253 */
		{
			-1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			17, // height of character
			{
				  0,  0,  0,  0,  0,  2,222,206,  0,  0,
				  0,  0,  0,  0,  0, 85,248, 47,  0,  0,
				  0,  0,  0,  0,  0,213, 97,  0,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				 20,249,108,  0,  0,  0,  0,104,250, 21,
				  0,168,204,  0,  0,  0,  0,200,173,  0,
				  0, 67,255, 44,  0,  0, 40,255, 75,  0,
				  0,  1,220,141,  0,  0,136,229,  3,  0,
				  0,  0,120,232,  4,  3,229,135,  0,  0,
				  0,  0, 24,251, 76, 71,255, 37,  0,  0,
				  0,  0,  0,173,163,159,195,  0,  0,  0,
				  0,  0,  0, 72,229,234, 97,  0,  0,  0,
				  0,  0,  0,  2,224,243, 11,  0,  0,  0,
				  0,  0,  0,  0,209,157,  0,  0,  0,  0,
				  0,  0,  0, 53,255, 58,  0,  0,  0,  0,
				  7, 52, 69,208,190,  0,  0,  0,  0,  0,
				 24,243,248,180, 24,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 254 */
		{
			1, // X offset from the origin in pixels
			13, // Y offset from the origin in pixels
			9, // X advance in pixels
			0, // Y advance in pixels
			7, // width of character
			17, // height of character
			{
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,119,173,247,229,112,  0,
				255,239,114, 54,126,255, 83,
				255,170,  0,  0,  0,192,187,
				255,119,  0,  0,  0,135,238,
				255,109,  0,  0,  0,122,252,
				255,121,  0,  0,  0,138,237,
				255,177,  0,  0,  0,198,186,
				255,243,122, 54,130,255, 82,
				255,120,175,248,230,111,  0,
				255,107,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
				255,108,  0,  0,  0,  0,  0,
			},
		},
		/* 'X' - 255 */
		{
			-1, // X offset from the origin in pixels
			12, // Y offset from the origin in pixels
			8, // X advance in pixels
			0, // Y advance in pixels
			10, // width of character
			16, // height of character
			{
				  0,  0,  0,215, 91,  0, 95,216,  0,  0,
				  0,  0,  0,215, 93,  0, 94,214,  0,  0,
				  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
				 20,249,108,  0,  0,  0,  0,104,250, 21,
				  0,168,204,  0,  0,  0,  0,200,173,  0,
				  0, 67,255, 44,  0,  0, 40,255, 75,  0,
				  0,  1,220,141,  0,  0,136,229,  3,  0,
				  0,  0,120,232,  4,  3,229,135,  0,  0,
				  0,  0, 24,251, 76, 71,255, 37,  0,  0,
				  0,  0,  0,173,163,159,195,  0,  0,  0,
				  0,  0,  0, 72,229,234, 97,  0,  0,  0,
				  0,  0,  0,  2,224,243, 11,  0,  0,  0,
				  0,  0,  0,  0,209,157,  0,  0,  0,  0,
				  0,  0,  0, 53,255, 58,  0,  0,  0,  0,
				  7, 52, 69,208,190,  0,  0,  0,  0,  0,
				 24,243,248,180, 24,  0,  0,  0,  0,  0,
			},
		},
	},
};

#endif /* _FONT_H */
