/*
 * Copyright (c) 2022 Ryan Wenger.
 * This file is provided AS-IS with no warranty.
 */

#ifndef NUCLEOPONG_BSP_H
#define NUCLEOPONG_BSP_H

#include "stm32l4xx.h"
#include <stdio.h>
#include "usart.h"
#include "gpio.h"
#include "i2c.h"
#include "sysclock.h"
#include "usbd_hid.h"
#include "usb_device.h"
#include "systick.h"
#include "spi.h"
#include "lcd_driver.h"
#include "nunchuk.h"
#include "cup_pong.h"
#include "display.h"


#ifdef __cplusplus
extern "C" {
#endif


//void show_menu(struct config *current_cfg);
void menu_set_config(struct config *cfg);
//void hide_menu();

// "Use the joystick to move the cursor to the center of the cup. When ready, press the 'c' button to throw."
void show_cup_select_instructions();
void hide_cup_select_instructions();

void reset_cursor();
void track_cursor();

void show_game_animation();
void hide_game_animation();
void show_finished_screen();
void hide_finished_screen();

void behave_as_mouse();

void prompt_turn();
void hide_prompt_turn();

// temporary options configuration since no time to get GUI menu working
void temp_options(struct config *cfg);

#ifdef __cplusplus
}
#endif

#endif //NUCLEOPONG_BSP_H
