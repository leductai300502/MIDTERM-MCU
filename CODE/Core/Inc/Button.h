/*
 * Button.h
 *
 *  Created on: Nov 4, 2022
 *      Author: ASUS
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET
int is_Button1_Pressed();
int is_Button2_Pressed();
int is_Button3_Pressed();
int is_Button1_Pressed_1s();
int is_Button2_Pressed_3s();
int is_Button3_Pressed_3s();

extern int button1_1s_flag;
extern int button2_3s_flag;
extern int button3_3s_flag;

void getKeyInput1();
void getKeyInput2();
void getKeyInput3();

#endif /* INC_BUTTON_H_ */
