/*
 * global.h
 *
 *  Created on: Nov 4, 2022
 *      Author: ASUS
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "Button.h"
#include "main.h"

#define INIT -1
#define AUTO 0

#define RESET 10
#define INC 11
#define DEC 12
#define MODE_PRESS_INC 13
#define MODE_PRESS_DEC 14
#define MODE_WAIT 15
#define MODE_WAIT2 16


extern int status;
extern int counter;
extern int counter_led;
extern int counter_time;

#endif /* INC_GLOBAL_H_ */
