BINLOCATION  = "${S}/gfx_rel_es3.x"
BINLOCATION_omap3  = "${S}/gfx_rel_es3.x"
BINLOCATION_ti816x = "${S}/gfx_rel_es6.x"

ES2LOCATION = "${S}/gfx_rel_es2.x"
ES3LOCATION = "${S}/gfx_rel_es3.x"
ES5LOCATION = "${S}/gfx_rel_es5.x"
ES6LOCATION = "${S}/gfx_rel_es6.x"

require libgles-omap3.inc

# download required binary distribution from:
# http://software-dl.ti.com/dsps/dsps_public_sw/sdo_sb/targetcontent/gfxsdk/latest/index_FDS.html
# see libgles-omap3.inc for detailed installation instructions

SGXPV = "4_03_00_02"
IMGPV = "1.6.16.3977"
SDKNAME = "Graphics_SDK_${SGXPV}"
BINFILE = "Graphics_SDK_setuplinux_${SGXPV}.bin"

SRC_URI += " file://fix-SGX-demos.patch;patch=0 "


SRC_URI[md5sum] = "ff8c1f2b8e4cb42f4ced6a613b081ada"
SRC_URI[sha256sum] = "cdb0bd3964e107733d632aa8224e0537b05c1ffac34befc036423458c8d75255"

