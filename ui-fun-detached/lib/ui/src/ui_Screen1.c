// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Printer

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Container2 = lv_obj_create(ui_Screen1);
    lv_obj_remove_style_all(ui_Container2);
    lv_obj_set_width(ui_Container2, 271);
    lv_obj_set_height(ui_Container2, 245);
    lv_obj_set_x(ui_Container2, 8);
    lv_obj_set_y(ui_Container2, 0);
    lv_obj_set_align(ui_Container2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Container2, lv_color_hex(0x201F2D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Container2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Slider1 = lv_slider_create(ui_Screen1);
    lv_slider_set_value(ui_Slider1, 25, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider1) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Slider1, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider1, 200);
    lv_obj_set_height(ui_Slider1, 214);
    lv_obj_set_x(ui_Slider1, 3);
    lv_obj_set_y(ui_Slider1, 0);
    lv_obj_set_align(ui_Slider1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0x1F1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Slider1, lv_color_hex(0x1E1D1D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Slider1, &ui_img_print_bar1_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor(ui_Slider1, lv_color_hex(0x4040FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_Slider1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Slider1, lv_color_hex(0x222121), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Slider1, &ui_img_print_bar2_png, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor(ui_Slider1, lv_color_hex(0x4040FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_Slider1, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor(ui_Slider1, lv_color_hex(0x181819), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_Slider1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_printing_persent = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_printing_persent, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_printing_persent, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_printing_persent, -76);
    lv_obj_set_y(ui_printing_persent, -11);
    lv_obj_set_align(ui_printing_persent, LV_ALIGN_CENTER);
    lv_label_set_text(ui_printing_persent, "25");
    lv_obj_set_style_text_color(ui_printing_persent, lv_color_hex(0x2979E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_printing_persent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_text_font(ui_printing_persent, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_printing_persent, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Processing = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Processing, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Processing, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Processing, -78);
    lv_obj_set_y(ui_Processing, -41);
    lv_obj_set_align(ui_Processing, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Processing, "Processing");
    lv_obj_set_style_text_color(ui_Processing, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Processing, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_text_font(ui_Processing, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Processing, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -47);
    lv_obj_set_y(ui_Label1, 12);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "%");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFBF6F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
}
