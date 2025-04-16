/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"

int DigitalDial_digital_clock_1_hour_value = 11;
int DigitalDial_digital_clock_1_min_value = 25;
int DigitalDial_digital_clock_1_sec_value = 50;
char DigitalDial_digital_clock_1_meridiem[] = "AM";
void DigitalDial_digital_clock_1_timer(lv_timer_t *timer)
{	clock_count_12(&DigitalDial_digital_clock_1_hour_value, &DigitalDial_digital_clock_1_min_value, &DigitalDial_digital_clock_1_sec_value, DigitalDial_digital_clock_1_meridiem);
	if (lv_obj_is_valid(guider_ui.DigitalDial_digital_clock_1))
	{
		lv_dclock_set_text_fmt(guider_ui.DigitalDial_digital_clock_1, "%02d:%02d:%02d %s", DigitalDial_digital_clock_1_hour_value, DigitalDial_digital_clock_1_min_value, DigitalDial_digital_clock_1_sec_value, DigitalDial_digital_clock_1_meridiem);
	}
}
static lv_obj_t * g_kb_DigitalDial;
static void kb_DigitalDial_event_cb(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	lv_obj_t *kb = lv_event_get_target(e);
	if(code == LV_EVENT_READY || code == LV_EVENT_CANCEL){
		lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
}
__attribute__((unused)) static void ta_DigitalDial_event_cb(lv_event_t *e)
{

	lv_event_code_t code = lv_event_get_code(e);
	lv_obj_t *ta = lv_event_get_target(e);
	lv_obj_t *kb = lv_event_get_user_data(e);
	if (code == LV_EVENT_FOCUSED || code == LV_EVENT_CLICKED)
	{
		lv_keyboard_set_textarea(kb, ta);
		lv_obj_move_foreground(kb);
		lv_obj_clear_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
	if (code == LV_EVENT_CANCEL || code == LV_EVENT_DEFOCUSED)
	{
		lv_keyboard_set_textarea(kb, NULL);
		lv_obj_move_background(kb);
		lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
}

void setup_scr_DigitalDial(lv_ui *ui){

	//Write codes DigitalDial
	ui->DigitalDial = lv_obj_create(NULL);

	//Create keyboard on DigitalDial
	g_kb_DigitalDial = lv_keyboard_create(ui->DigitalDial);
	lv_obj_add_event_cb(g_kb_DigitalDial, kb_DigitalDial_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(g_kb_DigitalDial, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(g_kb_DigitalDial, &lv_font_simsun_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_scrollbar_mode(ui->DigitalDial, LV_SCROLLBAR_MODE_OFF);

	//Set style for DigitalDial. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_bg_color(ui->DigitalDial, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->DigitalDial, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->DigitalDial, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->DigitalDial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	static bool DigitalDial_digital_clock_1_timer_enabled = false;

	//Write codes DigitalDial_digital_clock_1
	ui->DigitalDial_digital_clock_1 = lv_dclock_create(ui->DigitalDial,"11:25:50 AM");
	lv_obj_set_style_text_align(ui->DigitalDial_digital_clock_1, LV_TEXT_ALIGN_CENTER, 0);
	lv_obj_set_pos(ui->DigitalDial_digital_clock_1, 55, 33);
	lv_obj_set_size(ui->DigitalDial_digital_clock_1, 130, 36);

	//create timer
	if (!DigitalDial_digital_clock_1_timer_enabled) {
		lv_timer_create(DigitalDial_digital_clock_1_timer, 1000, NULL);
		DigitalDial_digital_clock_1_timer_enabled = true;
	}
	//Set style for DigitalDial_digital_clock_1. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->DigitalDial_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->DigitalDial_digital_clock_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->DigitalDial_digital_clock_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->DigitalDial_digital_clock_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->DigitalDial_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->DigitalDial_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->DigitalDial_digital_clock_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->DigitalDial_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->DigitalDial_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->DigitalDial_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->DigitalDial_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->DigitalDial_digital_clock_1, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->DigitalDial_digital_clock_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->DigitalDial_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->DigitalDial_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->DigitalDial_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->DigitalDial_digital_clock_1, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->DigitalDial_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes DigitalDial_sw_1
	ui->DigitalDial_sw_1 = lv_switch_create(ui->DigitalDial);
	lv_obj_set_pos(ui->DigitalDial_sw_1, 80, 80);
	lv_obj_set_size(ui->DigitalDial_sw_1, 80, 40);
	lv_obj_set_scrollbar_mode(ui->DigitalDial_sw_1, LV_SCROLLBAR_MODE_OFF);

	//Set style for DigitalDial_sw_1. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->DigitalDial_sw_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->DigitalDial_sw_1, lv_color_make(0xe6, 0xe2, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->DigitalDial_sw_1, lv_color_make(0xe6, 0xe2, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->DigitalDial_sw_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->DigitalDial_sw_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->DigitalDial_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->DigitalDial_sw_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->DigitalDial_sw_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->DigitalDial_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->DigitalDial_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->DigitalDial_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->DigitalDial_sw_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->DigitalDial_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->DigitalDial_sw_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for DigitalDial_sw_1. Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED
	lv_obj_set_style_bg_color(ui->DigitalDial_sw_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_color(ui->DigitalDial_sw_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->DigitalDial_sw_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->DigitalDial_sw_1, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_color(ui->DigitalDial_sw_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->DigitalDial_sw_1, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_opa(ui->DigitalDial_sw_1, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Set style for DigitalDial_sw_1. Part: LV_PART_KNOB, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->DigitalDial_sw_1, 100, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->DigitalDial_sw_1, lv_color_make(0xff, 0xff, 0xff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->DigitalDial_sw_1, lv_color_make(0xff, 0xff, 0xff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->DigitalDial_sw_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->DigitalDial_sw_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->DigitalDial_sw_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->DigitalDial_sw_1, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->DigitalDial_sw_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes DigitalDial_btn_2
	ui->DigitalDial_btn_2 = lv_btn_create(ui->DigitalDial);
	lv_obj_set_pos(ui->DigitalDial_btn_2, 80, 140);
	lv_obj_set_size(ui->DigitalDial_btn_2, 80, 40);
	lv_obj_set_scrollbar_mode(ui->DigitalDial_btn_2, LV_SCROLLBAR_MODE_OFF);

	//Set style for DigitalDial_btn_2. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->DigitalDial_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->DigitalDial_btn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->DigitalDial_btn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->DigitalDial_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->DigitalDial_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->DigitalDial_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->DigitalDial_btn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->DigitalDial_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->DigitalDial_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->DigitalDial_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->DigitalDial_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->DigitalDial_btn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->DigitalDial_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->DigitalDial_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->DigitalDial_btn_2, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->DigitalDial_btn_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->DigitalDial_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->DigitalDial_btn_2_label = lv_label_create(ui->DigitalDial_btn_2);
	lv_label_set_text(ui->DigitalDial_btn_2_label, "1");
	lv_obj_set_style_pad_all(ui->DigitalDial_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->DigitalDial_btn_2_label, LV_ALIGN_CENTER, 0, 0);

	//Init events for screen
	events_init_DigitalDial(ui);
}