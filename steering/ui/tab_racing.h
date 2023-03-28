#ifndef TAB_RACING_H
#define TAB_RACING_H

#include "lvgl.h"
#include "utils.h"

/* RACING TAB */
#define SIDE_BAR_WIDTH 70
#define CENTRAL_PANEL_WIDTH 660
#define BOTTOM_BAR_HEIGHT 80
#define TOP_BAR_HEIGHT 80
#define DATA_PANEL_HEIGHT 320
#define DATA_LEFT_WIDTH 185
#define DATA_RIGHT_WIDTH 185
#define DATA_CENTER_WIDTH 290

void tab_racing(lv_obj_t *parent);

static void lv_custom_meter(lv_obj_t *custom_meter)
{

    /*Remove the circle from the middle*/
    lv_obj_remove_style(custom_meter, NULL, LV_PART_MAIN);
    lv_obj_remove_style(custom_meter, NULL, LV_PART_INDICATOR);

    // lv_obj_set_grid_cell(custom_meter, LV_GRID_ALIGN_STRETCH, 2, 1, LV_GRID_ALIGN_STRETCH, 2, 1);
    lv_obj_set_size(custom_meter, 280, 290);
    lv_obj_set_style_pad_top(custom_meter, 12, LV_PART_MAIN);

    /*Add a scale first*/
    lv_meter_scale_t *scale = lv_meter_add_scale(custom_meter);
    // lv_obj_align(custom_meter,  )
    // lv_meter_set_scale_ticks(custom_meter, scale, 11, 2, 10, lv_palette_main(LV_PALETTE_GREY));
    lv_meter_set_scale_ticks(custom_meter, scale, 0, 0, 0, lv_color_black()); /*to remove spedometer ticks*/
    // lv_meter_set_scale_major_ticks(custom_meter, scale, 1, 2, 30, lv_color_hex3(0xeee), 10);
    // lv_meter_set_scale_range(custom_meter, scale, 60, 100, 270, 90);

    lv_meter_set_scale_range(custom_meter, scale, 0, 100, 240, 150);

    /*Add a three arc indicator*/

    lv_meter_indicator_t *back = lv_meter_add_arc(custom_meter, scale, 22, lv_color_hex(COLOR_SECONDARY_HEX), -5);
    lv_meter_indicator_t *indic2 = lv_meter_add_arc(custom_meter, scale, 16, lv_color_hex(COLOR_TERTIARY_HEX), -8);
    lv_meter_indicator_t *indic1 = lv_meter_add_arc(custom_meter, scale, 18, lv_color_hex(COLOR_BLUE_STATUS_HEX), -7);

    lv_meter_set_indicator_start_value(custom_meter, back, 0);
    lv_meter_set_indicator_end_value(custom_meter, back, 100);

    lv_meter_set_indicator_start_value(custom_meter, indic2, 1);
    lv_meter_set_indicator_end_value(custom_meter, indic2, 80); /*range values 0-100*/

    lv_meter_set_indicator_start_value(custom_meter, indic1, 0);
    lv_meter_set_indicator_end_value(custom_meter, indic1, 40); /*range values 0-100*/

    // lv_meter_indicator_t * indic3 = lv_meter_add_arc(custom_meter, scale, 10, lv_palette_main(LV_PALETTE_BLUE), 0);

    // lv_coord_t indic_w = 0;

    // return custom_meter;
}

static void custom_side_bar(lv_obj_t *bar){
    lv_obj_remove_style_all(bar);
    lv_obj_add_style(bar, &bar_lv_style, LV_PART_INDICATOR);
    lv_obj_add_style(bar, &bar_back_style, LV_PART_MAIN);
    lv_obj_set_size(bar, 66, 360);
    lv_obj_center(bar);
    lv_bar_set_range(bar, 0, 100);
    lv_bar_set_value(bar, 80, LV_ANIM_OFF);

    /* adding levels for side bars */
    lv_obj_t* rect1 = lv_bar_create(bar);
    lv_obj_add_style(rect1, &grid_style, LV_PART_MAIN);
    lv_obj_set_size(rect1, 100, 5);
    lv_obj_align(rect1, LV_ALIGN_CENTER, 0, 36);

    lv_obj_t* rect2 = lv_bar_create(bar);
    lv_obj_add_style(rect2, &grid_style, LV_PART_MAIN);
    lv_obj_set_size(rect2, 100, 5);
    lv_obj_align(rect2, LV_ALIGN_CENTER, 0, -36);

    lv_obj_t* rect3 = lv_bar_create(bar);
    lv_obj_add_style(rect3, &grid_style, LV_PART_MAIN);
    lv_obj_set_size(rect3, 100, 5);
    lv_obj_align(rect3, LV_ALIGN_CENTER, 0, 108);

    lv_obj_t* rect4 = lv_bar_create(bar);
    lv_obj_add_style(rect4, &grid_style, LV_PART_MAIN);
    lv_obj_set_size(rect4, 100, 5);
    lv_obj_align(rect4, LV_ALIGN_CENTER, 0, -108);
}

#endif // TAB_RACING_H