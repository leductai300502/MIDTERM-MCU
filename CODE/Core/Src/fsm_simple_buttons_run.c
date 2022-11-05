/*
 * fsm_manual.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ASUS
 */


#include "fsm_simple_buttons_run.h"
#include "display_led.h"
#include "global.h"
#include "main.h"

void fsm_simple_buttons_run(){
	switch(status){
		case RESET:
			display7SEG(0);
			if(counter_wait == 10)
			{
				counter = 9;
				status = AUTO;
				setTimer1(1000);
			}
			if(timer1_flag == 1)
			{
				counter_wait++;
				setTimer1(1000);
			}
			if(is_Button1_Pressed() == 1)
			{
				counter_wait =0;
				counter = 0;
				setTimer1(1000);
			}
			if(is_Button2_Pressed() == 1)
			{
				status = INC;
				counter_wait = 0;
				counter = 0;
				setTimer1(1000);
			}
			if(is_Button3_Pressed() == 1)
			{
				status = DEC;
				counter =0;
				counter_wait = 0;
				setTimer1(1000);
			}
			break;
		case INC:
			display7SEG(counter);
			if(counter_wait == 10)
			{
				status = AUTO;
				setTimer1(1000);
			}
			if(timer1_flag == 1)
			{
				counter_wait++;
				setTimer1(1000);
			}
			if(is_Button1_Pressed() == 1)
			{
				status = RESET;
				counter = 0;
				counter_wait = 0;
				setTimer1(1000);
			}
			if(is_Button2_Pressed() == 1)
			{
				if(counter == 9)
				{
					counter =0;
				}
				else{
					counter++;
				}
				counter_wait =0;
				setTimer1(1000);
			}
			if(is_Button3_Pressed() == 1)
			{
				status = DEC;
				if(counter == 0)
				{
					counter =9;
				}
				else{
					counter--;
				}
				counter_wait= 0;
				setTimer1(1000);
			}
			break;
		case DEC:
			display7SEG(counter);
			if(counter_wait == 10)
			{
				status = AUTO;
				setTimer1(1000);
			}
			if(timer1_flag == 1)
			{
				counter_wait++;
				setTimer1(1000);
			}
			if(is_Button1_Pressed() == 1)
			{
				status = RESET;
				counter =0;
				counter_wait =0;
				setTimer1(1000);
			}
			if(is_Button2_Pressed() == 1)
			{
				status = INC;
				if(counter == 9)
				{
					counter =0;
				}
				else{
					counter++;
				}
				counter_wait =0;
				setTimer1(1000);
			}
			if(is_Button3_Pressed() == 1)
			{
				if(counter == 0)
				{
					counter =9;
				}
				else{
					counter--;
				}
				counter_wait= 0;
				setTimer1(1000);
			}
			break;
		default:
			break;
		}
}

