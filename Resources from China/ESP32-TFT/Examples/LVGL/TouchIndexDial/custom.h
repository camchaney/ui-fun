// SPDX-License-Identifier: MIT
// Copyright 2023 NXP

#ifndef __CUSTOM_H_
#define __CUSTOM_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

extern int DigitalDial_digital_clock_1_hour_value;
extern int DigitalDial_digital_clock_1_min_value;
extern int DigitalDial_digital_clock_1_sec_value;
extern char DigitalDial_digital_clock_1_meridiem[];

void custom_init(lv_ui *ui);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
