/*
 * fsm_automatic.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ASUS
 */

#include "fsm_automatic.h"
#include "software_timer.h"
#include "main.h"
#include "display_led.h"


void fsm_automatic_run(){
	switch(status){
	case INIT:
		status = AUTO;
		setTimer1(1000);
		break;
	case AUTO:
		display7SEG(counter);
		if(timer1_flag == 1){
			counter--;
			status = AUTO;
			setTimer1(1000);
		}
		if(is_Button1_Pressed() == 1)
		{
			status = RESET;
			counter = 0;
			setTimer1(1000);
		}
		if(is_Button2_Pressed() == 1)
		{
			status = INC;
			setTimer1(1000);
		}
		if(is_Button3_Pressed() == 1)
		{
			status = DEC;
			setTimer1(1000);
		}
		break;

	default:
		break;
	}
}
