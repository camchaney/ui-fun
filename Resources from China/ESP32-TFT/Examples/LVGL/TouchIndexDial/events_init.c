/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

void events_init(lv_ui *ui)
{
}

static void AnalogDial_btn_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		lv_obj_t * act_scr = lv_scr_act();
		lv_disp_t * d = lv_obj_get_disp(act_scr);
		if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr))
		{
			if (guider_ui.DigitalDial_del == true)
				setup_scr_DigitalDial(&guider_ui);
			lv_scr_load_anim(guider_ui.DigitalDial, LV_SCR_LOAD_ANIM_NONE, 100, 10, false);
			guider_ui.AnalogDial_del = false;
		}
	}
		break;
	default:
		break;
	}
}

void events_init_AnalogDial(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->AnalogDial_btn_1, AnalogDial_btn_1_event_handler, LV_EVENT_ALL, ui);
}

static void DigitalDial_btn_2_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		lv_obj_t * act_scr = lv_scr_act();
		lv_disp_t * d = lv_obj_get_disp(act_scr);
		if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr))
		{
			if (guider_ui.AnalogDial_del == true)
				setup_scr_AnalogDial(&guider_ui);
			lv_scr_load_anim(guider_ui.AnalogDial, LV_SCR_LOAD_ANIM_NONE, 100, 10, false);
			guider_ui.DigitalDial_del = false;
		}
	}
		break;
	default:
		break;
	}
}

void events_init_DigitalDial(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->DigitalDial_btn_2, DigitalDial_btn_2_event_handler, LV_EVENT_ALL, ui);
}
