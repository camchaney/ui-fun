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

static int AnalogDial_analog_clock_1_hour_value = 3;
static int AnalogDial_analog_clock_1_min_value = 20;
static int AnalogDial_analog_clock_1_sec_value = 50;
void AnalogDial_analog_clock_1_timer(lv_timer_t *timer)
{	clock_count(&AnalogDial_analog_clock_1_hour_value, &AnalogDial_analog_clock_1_min_value, &AnalogDial_analog_clock_1_sec_value);
	if (lv_obj_is_valid(guider_ui.AnalogDial_analog_clock_1))
	{
		lv_analogclock_set_time(guider_ui.AnalogDial_analog_clock_1, AnalogDial_analog_clock_1_hour_value, AnalogDial_analog_clock_1_min_value, AnalogDial_analog_clock_1_sec_value);
	}
}

void setup_scr_AnalogDial(lv_ui *ui){

	//Write codes AnalogDial
	ui->AnalogDial = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->AnalogDial, LV_SCROLLBAR_MODE_OFF);

	//Set style for AnalogDial. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_bg_color(ui->AnalogDial, lv_color_make(0x59, 0x9c, 0xc7), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->AnalogDial, lv_color_make(0x8d, 0xcd, 0xeb), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->AnalogDial, LV_GRAD_DIR_VER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->AnalogDial, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	static bool AnalogDial_analog_clock_1_timer_enabled = false;

	//Write codes AnalogDial_analog_clock_1
	ui->AnalogDial_analog_clock_1 = lv_analogclock_create(ui->AnalogDial);
	lv_obj_set_pos(ui->AnalogDial_analog_clock_1, 0, 0);
	lv_obj_set_size(ui->AnalogDial_analog_clock_1, 240, 240);
	lv_analogclock_hide_digits(ui->AnalogDial_analog_clock_1, false);
	lv_analogclock_set_major_ticks(ui->AnalogDial_analog_clock_1, 2, 10, lv_color_make(0x55, 0x55, 0x55), 10);
	lv_analogclock_set_ticks(ui->AnalogDial_analog_clock_1, 2, 5, lv_color_make(0x33, 0x33, 0x33));
	lv_analogclock_set_hour_needle_line(ui->AnalogDial_analog_clock_1, 2, lv_color_make(0x00, 0xff, 0x00), -40);
	lv_analogclock_set_min_needle_line(ui->AnalogDial_analog_clock_1, 2, lv_color_make(0xE1, 0xFF, 0x00), -30);
	lv_analogclock_set_sec_needle_line(ui->AnalogDial_analog_clock_1, 2, lv_color_make(0x66, 0x00, 0xFF), -10);
	lv_analogclock_set_time(ui->AnalogDial_analog_clock_1, AnalogDial_analog_clock_1_hour_value, AnalogDial_analog_clock_1_min_value, AnalogDial_analog_clock_1_sec_value);

	//create timer
	if (!AnalogDial_analog_clock_1_timer_enabled) {
		lv_timer_create(AnalogDial_analog_clock_1_timer, 1000, NULL);
		AnalogDial_analog_clock_1_timer_enabled = true;
	}
	//Set style for AnalogDial_analog_clock_1. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_bg_color(ui->AnalogDial_analog_clock_1, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->AnalogDial_analog_clock_1, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->AnalogDial_analog_clock_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->AnalogDial_analog_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->AnalogDial_analog_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->AnalogDial_analog_clock_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->AnalogDial_analog_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->AnalogDial_analog_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->AnalogDial_analog_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->AnalogDial_analog_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->AnalogDial_analog_clock_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->AnalogDial_analog_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->AnalogDial_analog_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for AnalogDial_analog_clock_1. Part: LV_PART_TICKS, State: LV_STATE_DEFAULT
	lv_obj_set_style_text_color(ui->AnalogDial_analog_clock_1, lv_color_make(0xff, 0x00, 0x00), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->AnalogDial_analog_clock_1, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Write codes AnalogDial_btn_1
	ui->AnalogDial_btn_1 = lv_btn_create(ui->AnalogDial);
	lv_obj_set_pos(ui->AnalogDial_btn_1, 80, 140);
	lv_obj_set_size(ui->AnalogDial_btn_1, 80, 40);
	lv_obj_set_scrollbar_mode(ui->AnalogDial_btn_1, LV_SCROLLBAR_MODE_OFF);

	//Set style for AnalogDial_btn_1. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->AnalogDial_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->AnalogDial_btn_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->AnalogDial_btn_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->AnalogDial_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->AnalogDial_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->AnalogDial_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->AnalogDial_btn_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->AnalogDial_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->AnalogDial_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->AnalogDial_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->AnalogDial_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->AnalogDial_btn_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->AnalogDial_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->AnalogDial_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->AnalogDial_btn_1, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->AnalogDial_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->AnalogDial_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->AnalogDial_btn_1_label = lv_label_create(ui->AnalogDial_btn_1);
	lv_label_set_text(ui->AnalogDial_btn_1_label, "2");
	lv_obj_set_style_pad_all(ui->AnalogDial_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->AnalogDial_btn_1_label, LV_ALIGN_CENTER, 0, 0);

	//Init events for screen
	events_init_AnalogDial(ui);
}