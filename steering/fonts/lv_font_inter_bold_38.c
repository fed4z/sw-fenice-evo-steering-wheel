/*******************************************************************************
 * Size: 38 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_INTER_BOLD_38
#define LV_FONT_INTER_BOLD_38 1
#endif

#if LV_FONT_INTER_BOLD_38

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x3f, 0xfc, 0x3f, 0xfc, 0x3f, 0xfc, 0x2f, 0xfc,
    0x2f, 0xfc, 0x2f, 0xfc, 0x2f, 0xfc, 0x2f, 0xfc,
    0x2f, 0xfc, 0x2f, 0xfc, 0x2f, 0xfc, 0x2f, 0xfc,
    0x1f, 0xfc, 0x1f, 0xfc, 0x1f, 0xfc, 0x1f, 0xf8,
    0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x5, 0x50,
    0x0, 0x0, 0x1, 0x40, 0xf, 0xf4, 0x3f, 0xfc,
    0x3f, 0xfd, 0x3f, 0xfd, 0x2f, 0xfc, 0x7, 0xe0,

    /* U+0022 "\"" */
    0x3f, 0xc0, 0xff, 0x3f, 0xc0, 0xff, 0x3f, 0xc0,
    0xff, 0x3f, 0xc0, 0xff, 0x3f, 0xc0, 0xff, 0x3f,
    0xc0, 0xff, 0x3f, 0xc0, 0xff, 0x3f, 0xc0, 0xff,
    0x3f, 0xc0, 0xff, 0x3f, 0xc0, 0xff, 0x2a, 0x40,
    0xa9,

    /* U+0025 "%" */
    0x0, 0x15, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0x80, 0x0, 0x1, 0xfc, 0x1, 0xff, 0xff,
    0xc0, 0x0, 0xf, 0xd0, 0xf, 0xff, 0xff, 0x80,
    0x0, 0xbf, 0x0, 0x7f, 0xc1, 0xff, 0x0, 0x7,
    0xf0, 0x2, 0xfd, 0x3, 0xfc, 0x0, 0x3f, 0x40,
    0xf, 0xf0, 0xb, 0xf4, 0x2, 0xfc, 0x0, 0x3f,
    0xc0, 0x2f, 0xd0, 0x1f, 0xc0, 0x0, 0xff, 0x0,
    0xbf, 0x40, 0xfd, 0x0, 0x2, 0xfe, 0x3, 0xfc,
    0xf, 0xe0, 0x0, 0x7, 0xfe, 0xbf, 0xf0, 0x7f,
    0x0, 0x0, 0xf, 0xff, 0xff, 0x43, 0xf4, 0x0,
    0x0, 0xf, 0xff, 0xf4, 0x3f, 0x80, 0x0, 0x0,
    0x7, 0xfe, 0x2, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xf0,
    0x1b, 0xf9, 0x0, 0x0, 0x0, 0x3f, 0x42, 0xff,
    0xfe, 0x0, 0x0, 0x3, 0xf8, 0x1f, 0xff, 0xfd,
    0x0, 0x0, 0x2f, 0xc0, 0xff, 0xaf, 0xfc, 0x0,
    0x1, 0xfd, 0x7, 0xf8, 0xf, 0xf4, 0x0, 0xf,
    0xe0, 0x2f, 0xd0, 0x2f, 0xd0, 0x0, 0xbf, 0x0,
    0xbf, 0x40, 0x7f, 0x80, 0x7, 0xf0, 0x2, 0xfd,
    0x1, 0xfe, 0x0, 0x3f, 0x80, 0xb, 0xf4, 0xb,
    0xf4, 0x2, 0xfc, 0x0, 0x1f, 0xe0, 0x3f, 0xd0,
    0x1f, 0xc0, 0x0, 0x3f, 0xeb, 0xff, 0x0, 0xfe,
    0x0, 0x0, 0xbf, 0xff, 0xf4, 0xb, 0xf0, 0x0,
    0x0, 0xbf, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x6f, 0xe0, 0x0,

    /* U+002B "+" */
    0x0, 0x2, 0xff, 0x40, 0x0, 0x0, 0x2, 0xff,
    0x40, 0x0, 0x0, 0x2, 0xff, 0x40, 0x0, 0x0,
    0x2, 0xff, 0x40, 0x0, 0x0, 0x2, 0xff, 0x40,
    0x0, 0x0, 0x2, 0xff, 0x40, 0x0, 0x0, 0x2,
    0xff, 0x40, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xfd,
    0xbf, 0xff, 0xff, 0xff, 0xfd, 0xbf, 0xff, 0xff,
    0xff, 0xfd, 0xbf, 0xff, 0xff, 0xff, 0xfd, 0xbf,
    0xff, 0xff, 0xff, 0xfd, 0x0, 0x2, 0xff, 0x40,
    0x0, 0x0, 0x2, 0xff, 0x40, 0x0, 0x0, 0x2,
    0xff, 0x40, 0x0, 0x0, 0x2, 0xff, 0x40, 0x0,
    0x0, 0x2, 0xff, 0x40, 0x0, 0x0, 0x2, 0xff,
    0x40, 0x0, 0x0, 0x2, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+002D "-" */
    0x2a, 0xaa, 0xaa, 0x87, 0xff, 0xff, 0xfc, 0x7f,
    0xff, 0xff, 0xc7, 0xff, 0xff, 0xfc, 0x7f, 0xff,
    0xff, 0xc0,

    /* U+002E "." */
    0x1, 0x40, 0xbf, 0xc7, 0xff, 0xaf, 0xff, 0x7f,
    0xf8, 0xff, 0xd0, 0xbd, 0x0,

    /* U+0030 "0" */
    0x0, 0x0, 0x6f, 0xfa, 0x0, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xe0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x2, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x7, 0xff,
    0xe0, 0xb, 0xff, 0xd0, 0xb, 0xff, 0x80, 0x2,
    0xff, 0xf0, 0xf, 0xff, 0x0, 0x0, 0xff, 0xf4,
    0x1f, 0xfe, 0x0, 0x0, 0xbf, 0xf8, 0x2f, 0xfd,
    0x0, 0x0, 0x3f, 0xfc, 0x3f, 0xfc, 0x0, 0x0,
    0x3f, 0xfc, 0x3f, 0xfc, 0x0, 0x0, 0x3f, 0xfc,
    0x3f, 0xfc, 0x0, 0x0, 0x3f, 0xfc, 0x3f, 0xfc,
    0x0, 0x0, 0x3f, 0xfc, 0x3f, 0xfc, 0x0, 0x0,
    0x3f, 0xfc, 0x3f, 0xfc, 0x0, 0x0, 0x3f, 0xfc,
    0x3f, 0xfc, 0x0, 0x0, 0x3f, 0xfc, 0x3f, 0xfc,
    0x0, 0x0, 0x3f, 0xfc, 0x2f, 0xfd, 0x0, 0x0,
    0x3f, 0xf8, 0x1f, 0xfe, 0x0, 0x0, 0xbf, 0xf8,
    0xf, 0xff, 0x0, 0x0, 0xff, 0xf0, 0xb, 0xff,
    0xc0, 0x2, 0xff, 0xf0, 0x7, 0xff, 0xf0, 0xb,
    0xff, 0xd0, 0x2, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0x0, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x3f,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x6f, 0xf9, 0x0, 0x0,

    /* U+0031 "1" */
    0x0, 0x3, 0xff, 0xd0, 0x2, 0xff, 0xfd, 0x1,
    0xff, 0xff, 0xd0, 0xbf, 0xff, 0xfd, 0x3f, 0xff,
    0xff, 0xd3, 0xff, 0xff, 0xfd, 0x3f, 0xe2, 0xff,
    0xd3, 0xf4, 0x2f, 0xfd, 0x38, 0x2, 0xff, 0xd1,
    0x0, 0x2f, 0xfd, 0x0, 0x2, 0xff, 0xd0, 0x0,
    0x2f, 0xfd, 0x0, 0x2, 0xff, 0xd0, 0x0, 0x2f,
    0xfd, 0x0, 0x2, 0xff, 0xd0, 0x0, 0x2f, 0xfd,
    0x0, 0x2, 0xff, 0xd0, 0x0, 0x2f, 0xfd, 0x0,
    0x2, 0xff, 0xd0, 0x0, 0x2f, 0xfd, 0x0, 0x2,
    0xff, 0xd0, 0x0, 0x2f, 0xfd, 0x0, 0x2, 0xff,
    0xd0, 0x0, 0x2f, 0xfd, 0x0, 0x2, 0xff, 0xd0,
    0x0, 0x2f, 0xfd, 0x0, 0x2, 0xff, 0xd0, 0x0,
    0x2f, 0xfd,

    /* U+0032 "2" */
    0x0, 0x6, 0xff, 0xe4, 0x0, 0x0, 0xf, 0xff,
    0xff, 0xe0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xfa,
    0xff, 0xfe, 0x7, 0xff, 0xc0, 0xb, 0xff, 0xc2,
    0xff, 0xc0, 0x0, 0xbf, 0xf4, 0xff, 0xe0, 0x0,
    0xf, 0xfe, 0x3f, 0xf4, 0x0, 0x3, 0xff, 0x80,
    0x0, 0x0, 0x0, 0xff, 0xd0, 0x0, 0x0, 0x0,
    0xbf, 0xf0, 0x0, 0x0, 0x0, 0x3f, 0xfc, 0x0,
    0x0, 0x0, 0x3f, 0xfd, 0x0, 0x0, 0x0, 0x2f,
    0xfe, 0x0, 0x0, 0x0, 0x2f, 0xff, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0x0, 0x0, 0x0, 0x7f, 0xff, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0xf3, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff,
    0xff, 0xff, 0xff,

    /* U+0033 "3" */
    0x0, 0x1, 0xbf, 0xf9, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0x40, 0x0, 0xf, 0xff, 0xff, 0xff,
    0x80, 0x0, 0xbf, 0xff, 0xff, 0xff, 0x80, 0xb,
    0xff, 0xfe, 0xff, 0xff, 0x40, 0x3f, 0xfe, 0x0,
    0x2f, 0xfe, 0x1, 0xff, 0xe0, 0x0, 0x3f, 0xfc,
    0x7, 0xff, 0x0, 0x0, 0xbf, 0xf0, 0x0, 0x0,
    0x0, 0x2, 0xff, 0xc0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf4, 0x0,
    0x0, 0x5, 0x6f, 0xff, 0x80, 0x0, 0x0, 0xbf,
    0xff, 0xf8, 0x0, 0x0, 0x2, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0xb, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x2f, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0xf, 0xff, 0x80,
    0x0, 0x0, 0x0, 0xf, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xfc, 0x3f, 0xfc, 0x0, 0x0, 0xff,
    0xf0, 0xff, 0xf4, 0x0, 0xb, 0xff, 0xc2, 0xff,
    0xf8, 0x0, 0xbf, 0xfe, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x7, 0xff, 0xff, 0xff, 0xff, 0x40,
    0x7, 0xff, 0xff, 0xff, 0xf4, 0x0, 0x2, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x6f, 0xfe, 0x40,
    0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xfe, 0x0, 0x0, 0x0, 0xbf, 0xff,
    0xfe, 0x0, 0x0, 0x1, 0xff, 0xdf, 0xfe, 0x0,
    0x0, 0x3, 0xff, 0x8f, 0xfe, 0x0, 0x0, 0xb,
    0xff, 0xf, 0xfe, 0x0, 0x0, 0xf, 0xfd, 0xf,
    0xfe, 0x0, 0x0, 0x3f, 0xfc, 0xf, 0xfe, 0x0,
    0x0, 0x7f, 0xf4, 0xf, 0xfe, 0x0, 0x0, 0xff,
    0xe0, 0xf, 0xfe, 0x0, 0x2, 0xff, 0xc0, 0xf,
    0xfe, 0x0, 0x7, 0xff, 0x40, 0xf, 0xfe, 0x0,
    0xf, 0xff, 0x0, 0xf, 0xfe, 0x0, 0x2f, 0xfc,
    0x0, 0xf, 0xfe, 0x0, 0x3f, 0xfe, 0xaa, 0xaf,
    0xff, 0xa8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0xf, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfe, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0xf, 0xfe, 0x0,

    /* U+0035 "5" */
    0xf, 0xff, 0xff, 0xff, 0xfc, 0x3, 0xff, 0xff,
    0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0x3f, 0xff, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff,
    0xff, 0xfc, 0x7, 0xff, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x7f, 0xf0, 0x0,
    0x0, 0x0, 0x2f, 0xf8, 0x0, 0x0, 0x0, 0xb,
    0xfe, 0xb, 0xfe, 0x40, 0x2, 0xff, 0x6f, 0xff,
    0xf8, 0x0, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f,
    0xff, 0xff, 0xff, 0xfc, 0xf, 0xff, 0xe5, 0x7f,
    0xff, 0x81, 0xbf, 0xc0, 0x2, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x3f, 0xfd, 0x0, 0x0, 0x0, 0x7,
    0xff, 0x80, 0x0, 0x0, 0x0, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x3f, 0xf8, 0x55, 0x40, 0x0, 0xf,
    0xfe, 0xbf, 0xf0, 0x0, 0x7, 0xff, 0x5f, 0xfe,
    0x0, 0x3, 0xff, 0xc3, 0xff, 0xe0, 0x3, 0xff,
    0xf0, 0xbf, 0xff, 0xab, 0xff, 0xf0, 0xf, 0xff,
    0xff, 0xff, 0xf4, 0x0, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0x7, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x1b,
    0xff, 0x90, 0x0,

    /* U+0036 "6" */
    0x0, 0x0, 0x6f, 0xf9, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xff, 0x80, 0x0, 0x2, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xc0, 0x2,
    0xff, 0xff, 0xff, 0xff, 0x80, 0xf, 0xff, 0x90,
    0x6f, 0xff, 0x0, 0xbf, 0xf8, 0x0, 0x2f, 0xfe,
    0x3, 0xff, 0xc0, 0x0, 0x3f, 0xfc, 0x1f, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xf0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xc0, 0xbf, 0xfd, 0x0, 0xf,
    0xfe, 0x1f, 0xff, 0xfe, 0x0, 0x3f, 0xf9, 0xff,
    0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x3, 0xff, 0xfe, 0x1, 0xff, 0xfd, 0xf, 0xff,
    0xd0, 0x0, 0xbf, 0xf8, 0x3f, 0xfe, 0x0, 0x0,
    0xff, 0xf0, 0xff, 0xf4, 0x0, 0x2, 0xff, 0xc3,
    0xff, 0xc0, 0x0, 0xb, 0xff, 0xb, 0xff, 0x0,
    0x0, 0x2f, 0xfc, 0x1f, 0xfd, 0x0, 0x0, 0xff,
    0xf0, 0x3f, 0xfc, 0x0, 0x7, 0xff, 0x80, 0xbf,
    0xfc, 0x0, 0x7f, 0xfd, 0x0, 0xff, 0xff, 0xaf,
    0xff, 0xf0, 0x1, 0xff, 0xff, 0xff, 0xff, 0x0,
    0x1, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0, 0xbf,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x2f, 0xfe, 0x40,
    0x0,

    /* U+0037 "7" */
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff,
    0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xbf,
    0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x2f, 0xfe, 0x0, 0x0,
    0x0, 0x3f, 0xfc, 0x0, 0x0, 0x0, 0xbf, 0xf8,
    0x0, 0x0, 0x0, 0xff, 0xf0, 0x0, 0x0, 0x1,
    0xff, 0xe0, 0x0, 0x0, 0x3, 0xff, 0xc0, 0x0,
    0x0, 0x7, 0xff, 0x80, 0x0, 0x0, 0xf, 0xff,
    0x0, 0x0, 0x0, 0x1f, 0xfe, 0x0, 0x0, 0x0,
    0x3f, 0xfc, 0x0, 0x0, 0x0, 0x7f, 0xf8, 0x0,
    0x0, 0x0, 0xff, 0xf0, 0x0, 0x0, 0x1, 0xff,
    0xe0, 0x0, 0x0, 0x3, 0xff, 0xc0, 0x0, 0x0,
    0x7, 0xff, 0x80, 0x0, 0x0, 0xf, 0xff, 0x0,
    0x0, 0x0, 0x1f, 0xfe, 0x0, 0x0, 0x0, 0x3f,
    0xfc, 0x0, 0x0, 0x0, 0x7f, 0xf8, 0x0, 0x0,
    0x0, 0xff, 0xf0, 0x0, 0x0, 0x1, 0xff, 0xe0,
    0x0, 0x0, 0x3, 0xff, 0xc0, 0x0, 0x0, 0x7,
    0xff, 0x80, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x1, 0xbf, 0xf9, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xff, 0x80, 0x0, 0xf, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xb,
    0xff, 0xf9, 0xbf, 0xff, 0x80, 0x3f, 0xfe, 0x0,
    0x1f, 0xff, 0x0, 0xff, 0xf0, 0x0, 0x2f, 0xfc,
    0x3, 0xff, 0x80, 0x0, 0x7f, 0xf0, 0xf, 0xfe,
    0x0, 0x2, 0xff, 0xc0, 0x2f, 0xfc, 0x0, 0xf,
    0xfe, 0x0, 0x3f, 0xfd, 0x1, 0xff, 0xf0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0x0, 0x0, 0x1f, 0xff,
    0xff, 0xd0, 0x0, 0x0, 0xbf, 0xff, 0xff, 0x80,
    0x0, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x2, 0xff,
    0xf9, 0x5b, 0xff, 0xe0, 0xf, 0xff, 0x40, 0x3,
    0xff, 0xd0, 0xbf, 0xf4, 0x0, 0x7, 0xff, 0xc3,
    0xff, 0xc0, 0x0, 0xf, 0xff, 0xf, 0xff, 0x0,
    0x0, 0x3f, 0xfc, 0x3f, 0xfc, 0x0, 0x0, 0xff,
    0xf0, 0xff, 0xf4, 0x0, 0x7, 0xff, 0xc2, 0xff,
    0xf0, 0x0, 0x3f, 0xff, 0x3, 0xff, 0xf9, 0x5b,
    0xff, 0xf4, 0x7, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x7, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x2, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x6f, 0xfe, 0x80,
    0x0,

    /* U+0039 "9" */
    0x0, 0x1, 0xbf, 0xf8, 0x0, 0x0, 0x0, 0xbf,
    0xff, 0xfe, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0x40, 0x0, 0xff, 0xff, 0xff, 0xff, 0x40, 0xf,
    0xff, 0xfa, 0xff, 0xff, 0x0, 0x7f, 0xfd, 0x0,
    0x3f, 0xfe, 0x2, 0xff, 0xd0, 0x0, 0x3f, 0xfc,
    0xf, 0xff, 0x0, 0x0, 0x7f, 0xf4, 0x3f, 0xf8,
    0x0, 0x0, 0xff, 0xf0, 0xff, 0xe0, 0x0, 0x3,
    0xff, 0xc3, 0xff, 0xc0, 0x0, 0x1f, 0xff, 0xf,
    0xff, 0x0, 0x0, 0xbf, 0xfc, 0x2f, 0xff, 0x0,
    0xb, 0xff, 0xf4, 0x3f, 0xff, 0x95, 0xff, 0xff,
    0xd0, 0x7f, 0xff, 0xff, 0xfb, 0xff, 0x0, 0xbf,
    0xff, 0xff, 0x6f, 0xfc, 0x0, 0x7f, 0xff, 0xf4,
    0xbf, 0xf0, 0x0, 0x2f, 0xf9, 0x3, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0xf, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xf4, 0x2f, 0xfc, 0x0, 0x3, 0xff,
    0xc0, 0x7f, 0xfc, 0x0, 0x2f, 0xff, 0x0, 0xff,
    0xfd, 0x2, 0xff, 0xf4, 0x2, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x3, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x3, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x1, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x6f, 0xf9, 0x0,
    0x0,

    /* U+003A ":" */
    0xb, 0xd0, 0xff, 0xd7, 0xff, 0xaf, 0xff, 0x7f,
    0xf8, 0xbf, 0xc0, 0x14, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x14, 0xb, 0xfc, 0x7f, 0xfa, 0xff, 0xf7,
    0xff, 0x8f, 0xfd, 0xb, 0xd0,

    /* U+003C "<" */
    0x0, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0,
    0x0, 0xbd, 0x0, 0x0, 0x0, 0xb, 0xfd, 0x0,
    0x0, 0x1, 0xff, 0xfd, 0x0, 0x0, 0x1f, 0xff,
    0xfd, 0x0, 0x2, 0xff, 0xff, 0xfd, 0x0, 0x2f,
    0xff, 0xff, 0xd0, 0x7, 0xff, 0xff, 0xf8, 0x0,
    0x7f, 0xff, 0xff, 0x40, 0x0, 0xbf, 0xff, 0xe4,
    0x0, 0x0, 0xbf, 0xfd, 0x0, 0x0, 0x0, 0xbf,
    0xfe, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xf4, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0x80, 0x0, 0x6, 0xff,
    0xff, 0xfd, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xe0,
    0x0, 0x1, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x1f,
    0xff, 0xfd, 0x0, 0x0, 0x0, 0xbf, 0xfd, 0x0,
    0x0, 0x0, 0xb, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0x7d, 0x0, 0x0, 0x0, 0x0, 0x4,

    /* U+003D "=" */
    0x7f, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff,
    0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0x7f,
    0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0x7f,
    0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff,
    0xfc, 0x7f, 0xff, 0xff, 0xff, 0xfc,

    /* U+003E ">" */
    0x50, 0x0, 0x0, 0x0, 0x0, 0xbd, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xe0, 0x0, 0x0, 0x0, 0xbf,
    0xfe, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xf4, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0x40, 0x0, 0xb, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0x6f, 0xff, 0xff, 0x90,
    0x0, 0x2, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x1b,
    0xff, 0xfd, 0x0, 0x0, 0x0, 0xbf, 0xfd, 0x0,
    0x0, 0x0, 0xbf, 0xfd, 0x0, 0x0, 0x1f, 0xff,
    0xfd, 0x0, 0x2, 0xff, 0xff, 0xf8, 0x0, 0x7f,
    0xff, 0xff, 0x80, 0xb, 0xff, 0xff, 0xf4, 0x0,
    0xbf, 0xff, 0xff, 0x40, 0x0, 0xbf, 0xff, 0xe0,
    0x0, 0x0, 0xbf, 0xfe, 0x0, 0x0, 0x0, 0xbf,
    0xd0, 0x0, 0x0, 0x0, 0xbd, 0x0, 0x0, 0x0,
    0x0, 0x40, 0x0, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x0, 0x1b, 0xff, 0x90, 0x0, 0x7, 0xff, 0xff,
    0xf4, 0x0, 0x7f, 0xff, 0xff, 0xf8, 0x7, 0xff,
    0xff, 0xff, 0xf4, 0x3f, 0xff, 0xef, 0xff, 0xf0,
    0xff, 0xf0, 0x7, 0xff, 0xd7, 0xff, 0x40, 0xb,
    0xff, 0x9f, 0xfc, 0x0, 0x1f, 0xfe, 0x0, 0x0,
    0x0, 0x7f, 0xf8, 0x0, 0x0, 0x3, 0xff, 0xd0,
    0x0, 0x0, 0x3f, 0xff, 0x0, 0x0, 0x7, 0xff,
    0xf4, 0x0, 0x0, 0xbf, 0xff, 0x40, 0x0, 0x7,
    0xff, 0xf0, 0x0, 0x0, 0x3f, 0xfe, 0x0, 0x0,
    0x1, 0xff, 0xe0, 0x0, 0x0, 0xb, 0xff, 0x0,
    0x0, 0x0, 0x2f, 0xf8, 0x0, 0x0, 0x0, 0xbf,
    0xd0, 0x0, 0x0, 0x1, 0x55, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x40, 0x0,
    0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0, 0x3, 0xff,
    0xc0, 0x0, 0x0, 0x1f, 0xff, 0x0, 0x0, 0x0,
    0x3f, 0xfc, 0x0, 0x0, 0x0, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0xbd, 0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0x0, 0xb, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xfd, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xe7, 0xff, 0x80, 0x0,
    0x0, 0x1, 0xff, 0xd3, 0xff, 0xc0, 0x0, 0x0,
    0x3, 0xff, 0xc2, 0xff, 0xc0, 0x0, 0x0, 0x3,
    0xff, 0xc1, 0xff, 0xe0, 0x0, 0x0, 0x7, 0xff,
    0x40, 0xff, 0xf0, 0x0, 0x0, 0xf, 0xff, 0x0,
    0xbf, 0xf0, 0x0, 0x0, 0xf, 0xff, 0x0, 0x7f,
    0xf8, 0x0, 0x0, 0x2f, 0xfe, 0x0, 0x3f, 0xfc,
    0x0, 0x0, 0x3f, 0xfc, 0x0, 0x3f, 0xfc, 0x0,
    0x0, 0x3f, 0xfc, 0x0, 0x1f, 0xfe, 0x0, 0x0,
    0xbf, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x40, 0x0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x2, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x3, 0xff, 0xea, 0xaa, 0xab,
    0xff, 0xd0, 0x3, 0xff, 0xc0, 0x0, 0x2, 0xff,
    0xe0, 0xb, 0xff, 0x80, 0x0, 0x0, 0xff, 0xf0,
    0xf, 0xff, 0x40, 0x0, 0x0, 0xff, 0xf4, 0xf,
    0xff, 0x0, 0x0, 0x0, 0xbf, 0xf8, 0x2f, 0xfe,
    0x0, 0x0, 0x0, 0x3f, 0xfc, 0x3f, 0xfd, 0x0,
    0x0, 0x0, 0x3f, 0xfd,

    /* U+0050 "P" */
    0xbf, 0xff, 0xff, 0xf9, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xf4,
    0xb, 0xff, 0xff, 0xff, 0xff, 0xd0, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xb, 0xff, 0x40, 0x2, 0xff,
    0xf4, 0xbf, 0xf4, 0x0, 0xb, 0xff, 0xcb, 0xff,
    0x40, 0x0, 0x3f, 0xfc, 0xbf, 0xf4, 0x0, 0x3,
    0xff, 0xcb, 0xff, 0x40, 0x0, 0x3f, 0xfc, 0xbf,
    0xf4, 0x0, 0x3, 0xff, 0xcb, 0xff, 0x40, 0x0,
    0x3f, 0xfc, 0xbf, 0xf4, 0x0, 0xb, 0xff, 0xcb,
    0xff, 0x40, 0x2, 0xff, 0xf4, 0xbf, 0xfe, 0xab,
    0xff, 0xff, 0xb, 0xff, 0xff, 0xff, 0xff, 0xd0,
    0xbf, 0xff, 0xff, 0xff, 0xf4, 0xb, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0xbf, 0xff, 0xff, 0xf9, 0x0,
    0xb, 0xff, 0x40, 0x0, 0x0, 0x0, 0xbf, 0xf4,
    0x0, 0x0, 0x0, 0xb, 0xff, 0x40, 0x0, 0x0,
    0x0, 0xbf, 0xf4, 0x0, 0x0, 0x0, 0xb, 0xff,
    0x40, 0x0, 0x0, 0x0, 0xbf, 0xf4, 0x0, 0x0,
    0x0, 0xb, 0xff, 0x40, 0x0, 0x0, 0x0, 0xbf,
    0xf4, 0x0, 0x0, 0x0, 0xb, 0xff, 0x40, 0x0,
    0x0, 0x0,

    /* U+0052 "R" */
    0xbf, 0xff, 0xff, 0xf9, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xff, 0x40, 0xb, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x2f, 0xff, 0xff, 0xff, 0xff, 0x40, 0xbf,
    0xff, 0xff, 0xff, 0xff, 0x2, 0xff, 0xd0, 0x0,
    0xbf, 0xfe, 0xb, 0xff, 0x40, 0x0, 0xbf, 0xfc,
    0x2f, 0xfd, 0x0, 0x0, 0xff, 0xf0, 0xbf, 0xf4,
    0x0, 0x3, 0xff, 0xc2, 0xff, 0xd0, 0x0, 0xf,
    0xff, 0xb, 0xff, 0x40, 0x0, 0x3f, 0xfc, 0x2f,
    0xfd, 0x0, 0x1, 0xff, 0xf0, 0xbf, 0xf4, 0x0,
    0x1f, 0xff, 0x82, 0xff, 0xfa, 0xaf, 0xff, 0xfc,
    0xb, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x2f, 0xff,
    0xff, 0xff, 0xfe, 0x0, 0xbf, 0xff, 0xff, 0xff,
    0xd0, 0x2, 0xff, 0xff, 0xff, 0xfe, 0x0, 0xb,
    0xff, 0x40, 0x3f, 0xfc, 0x0, 0x2f, 0xfd, 0x0,
    0xbf, 0xf8, 0x0, 0xbf, 0xf4, 0x0, 0xff, 0xf0,
    0x2, 0xff, 0xd0, 0x2, 0xff, 0xe0, 0xb, 0xff,
    0x40, 0x3, 0xff, 0xc0, 0x2f, 0xfd, 0x0, 0xb,
    0xff, 0xc0, 0xbf, 0xf4, 0x0, 0xf, 0xff, 0x42,
    0xff, 0xd0, 0x0, 0x2f, 0xff, 0xb, 0xff, 0x40,
    0x0, 0x3f, 0xfd, 0x2f, 0xfd, 0x0, 0x0, 0xbf,
    0xfc,

    /* U+0058 "X" */
    0x7f, 0xfc, 0x0, 0x0, 0xf, 0xff, 0x83, 0xff,
    0xe0, 0x0, 0x2, 0xff, 0xf0, 0xf, 0xff, 0x40,
    0x0, 0x3f, 0xfd, 0x0, 0xbf, 0xfc, 0x0, 0xf,
    0xff, 0xc0, 0x3, 0xff, 0xe0, 0x1, 0xff, 0xf0,
    0x0, 0x1f, 0xff, 0x0, 0x3f, 0xfe, 0x0, 0x0,
    0xff, 0xf8, 0xb, 0xff, 0xc0, 0x0, 0x3, 0xff,
    0xd0, 0xff, 0xf4, 0x0, 0x0, 0x2f, 0xff, 0x2f,
    0xfe, 0x0, 0x0, 0x0, 0xff, 0xfb, 0xff, 0xc0,
    0x0, 0x0, 0x7, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0x80,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xfd, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xff, 0x80, 0x0, 0x0, 0xf, 0xff,
    0xbf, 0xfc, 0x0, 0x0, 0x2, 0xff, 0xf2, 0xff,
    0xf0, 0x0, 0x0, 0x7f, 0xfc, 0xf, 0xff, 0x40,
    0x0, 0xf, 0xff, 0x80, 0xbf, 0xfc, 0x0, 0x2,
    0xff, 0xf0, 0x3, 0xff, 0xe0, 0x0, 0x3f, 0xfd,
    0x0, 0x1f, 0xff, 0x40, 0xb, 0xff, 0xc0, 0x0,
    0xbf, 0xfc, 0x1, 0xff, 0xf4, 0x0, 0x3, 0xff,
    0xe0, 0x3f, 0xfe, 0x0, 0x0, 0x2f, 0xff, 0xb,
    0xff, 0xc0, 0x0, 0x0, 0xff, 0xf8,

    /* U+005E "^" */
    0x0, 0x1f, 0xfc, 0x0, 0x0, 0xf, 0xff, 0x40,
    0x0, 0x3, 0xff, 0xf0, 0x0, 0x2, 0xff, 0xfc,
    0x0, 0x0, 0xff, 0x7f, 0x80, 0x0, 0xbf, 0x4f,
    0xf0, 0x0, 0x3f, 0xc1, 0xfe, 0x0, 0x2f, 0xe0,
    0x3f, 0xc0, 0xf, 0xf0, 0xb, 0xf8, 0xb, 0xf8,
    0x0, 0xff, 0x3, 0xfd, 0x0, 0x2f, 0xe2, 0xff,
    0x0, 0x7, 0xfc
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 141, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 197, .box_w = 8, .box_h = 28, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 239, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 17},
    {.bitmap_index = 89, .adv_w = 522, .box_w = 27, .box_h = 30, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 292, .adv_w = 413, .box_w = 20, .box_h = 20, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 392, .adv_w = 285, .box_w = 14, .box_h = 5, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 410, .adv_w = 181, .box_w = 7, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 418, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 298, .box_w = 14, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 383, .box_w = 21, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 836, .adv_w = 401, .box_w = 23, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 997, .adv_w = 412, .box_w = 24, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1165, .adv_w = 392, .box_w = 21, .box_h = 28, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1312, .adv_w = 401, .box_w = 23, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1473, .adv_w = 362, .box_w = 20, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1613, .adv_w = 402, .box_w = 23, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1774, .adv_w = 401, .box_w = 23, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1935, .adv_w = 181, .box_w = 7, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1972, .adv_w = 413, .box_w = 20, .box_h = 22, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2082, .adv_w = 413, .box_w = 20, .box_h = 14, .ofs_x = 3, .ofs_y = 4},
    {.bitmap_index = 2152, .adv_w = 413, .box_w = 20, .box_h = 22, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2262, .adv_w = 342, .box_w = 19, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2395, .adv_w = 455, .box_w = 28, .box_h = 28, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2591, .adv_w = 394, .box_w = 22, .box_h = 28, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2745, .adv_w = 399, .box_w = 23, .box_h = 28, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2906, .adv_w = 434, .box_w = 26, .box_h = 28, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3088, .adv_w = 296, .box_w = 17, .box_h = 12, .ofs_x = 1, .ofs_y = 15}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x1, 0x2, 0x5, 0xb, 0xd, 0xe, 0x10,
    0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18,
    0x19, 0x1a, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 0x30,
    0x32, 0x38, 0x3e
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 63, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 27, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 7,
    3, 12,
    3, 23,
    5, 10,
    5, 11,
    5, 15,
    5, 26,
    6, 10,
    6, 11,
    6, 15,
    6, 26,
    7, 1,
    7, 2,
    7, 3,
    7, 8,
    7, 9,
    7, 11,
    7, 13,
    7, 14,
    7, 15,
    7, 16,
    7, 17,
    7, 22,
    8, 7,
    8, 15,
    9, 7,
    10, 12,
    11, 7,
    12, 7,
    12, 9,
    13, 7,
    14, 7,
    15, 7,
    15, 8,
    15, 11,
    15, 12,
    15, 13,
    15, 14,
    15, 15,
    15, 16,
    15, 17,
    15, 18,
    15, 19,
    15, 23,
    16, 7,
    17, 7,
    17, 15,
    20, 23,
    20, 26,
    21, 15,
    21, 23,
    21, 26,
    22, 23,
    23, 3,
    23, 9,
    23, 19,
    23, 20,
    23, 22,
    23, 27,
    24, 5,
    24, 6,
    24, 7,
    24, 23,
    26, 5,
    26, 6,
    26, 19,
    26, 20,
    27, 7,
    27, 12,
    27, 23
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -55, -38, -48, -13, -3, -18, -32, -13,
    -3, -18, -32, -21, -8, -62, -18, -55,
    -14, -3, -18, -16, -18, -8, -64, -18,
    -12, -23, -9, -13, -8, -6, -14, -18,
    -76, -9, -10, -35, -6, -9, 12, -9,
    -6, -21, -55, -66, -13, -18, -12, -31,
    -31, -45, -26, -35, -38, -48, -21, -26,
    -31, -38, -59, -11, -11, -21, -51, -33,
    -33, -35, -31, -83, -28, -59
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 70,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t lv_font_inter_bold_38 = {
#else
lv_font_t lv_font_inter_bold_38 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 30,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -6,
    .underline_thickness = 4,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_INTER_BOLD_38*/

