/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *AnalogDial;
	bool AnalogDial_del;
	lv_obj_t *AnalogDial_analog_clock_1;
	lv_obj_t *AnalogDial_btn_1;
	lv_obj_t *AnalogDial_btn_1_label;
	lv_obj_t *DigitalDial;
	bool DigitalDial_del;
	lv_obj_t *DigitalDial_digital_clock_1;
	lv_obj_t *DigitalDial_sw_1;
	lv_obj_t *DigitalDial_btn_2;
	lv_obj_t *DigitalDial_btn_2_label;
}lv_ui;

void ui_init_style(lv_style_t * style);
void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_AnalogDial(lv_ui *ui);
void clock_count(int *hour, int *min, int *sec);
void setup_scr_DigitalDial(lv_ui *ui);

#ifdef __cplusplus
}
#endif
#endif