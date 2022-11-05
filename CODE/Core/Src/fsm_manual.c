/*
 * fsm_manual.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ASUS
 */


#include "fsm_manual.h"
#include "display_led.h"
#include "global.h"
#include "main.h"

void fsm_manual_run(){
	switch(status){
	 	case MODE_WAIT:
	 		setTimer1(1000);
	 		counter =0;
	 		status = INC;
	 		break;
	 	case MODE_WAIT2:
	 		setTimer1(1000);
	 		counter =0;
	 		status = DEC;
	 		break;
		case RESET:
			display7SEG(0);
			if(counter == 10)
			{
				counter_led = 9;
				status = AUTO;
				setTimer1(1000);
			}
			if(timer1_flag == 1)
			{
				counter++;
				setTimer1(1000);
			}
			if(is_Button1_Pressed() == 1)
			{
				counter =0;
				counter_led = 0;
				setTimer1(1000);
			}
			if(is_Button2_Pressed() == 1)
			{
				status = INC;
				counter = 0;
				counter_led = 0;
				setTimer1(1000);
			}
			if(is_Button3_Pressed() == 1)
			{
				status = DEC;
				counter_led =0;
				counter = 0;
				setTimer1(1000);
			}
			break;
		case INC:
			display7SEG(counter_led);
			if(counter == 10)
			{
				status = AUTO;
				setTimer1(1000);
			}
			if(timer1_flag == 1)
			{
				counter++;
				setTimer1(1000);
			}
			if(is_Button1_Pressed() == 1)
			{
				status = RESET;
				counter_led = 0;
				counter = 0;
				setTimer1(1000);
			}
			if(is_Button2_Pressed() == 1)
			{
				if(counter_led == 9)
				{
					counter_led =0;
				}
				else{
					counter_led++;
				}
				counter =0;
				setTimer1(1000);
			}
			if(is_Button2_Pressed_3s() == 1)
			{
				setTimer3(1000);
				counter =0;
				status = MODE_PRESS_INC;
			}
			if(is_Button3_Pressed() == 1)
			{
				status = DEC;
				if(counter_led == 0)
				{
					counter_led =9;
				}
				else{
					counter_led--;
				}
				counter= 0;
				setTimer1(1000);
			}
			break;
		case DEC:
			display7SEG(counter_led);
			if(counter == 10)
			{
				status = AUTO;
				setTimer1(1000);
			}
			if(timer1_flag == 1)
			{
				counter++;
				setTimer1(1000);
			}
			if(is_Button1_Pressed() == 1)
			{
				status = RESET;
				counter_led =0;
				counter =0;
				setTimer1(1000);
			}
			if(is_Button2_Pressed() == 1)
			{
				status = INC;
				if(counter_led == 9)
				{
					counter_led =0;
				}
				else{
					counter_led++;
				}
				counter =0;
				setTimer1(1000);
			}
			if(is_Button3_Pressed() == 1)
			{
				if(counter_led == 0)
				{
					counter_led =9;
				}
				else{
					counter_led--;
				}
				counter= 0;
				setTimer1(1000);
			}
			if(is_Button3_Pressed_3s() == 1)
			{
				counter =0;
				setTimer3(1000);
				status = MODE_PRESS_DEC;
			}
			break;
		case MODE_PRESS_INC:
			display7SEG(counter_led);
			if(timer3_flag == 1)
			{
				if(counter_led == 9)
				{
					counter_led =0;
				}
				else{
					counter_led++;
				}
				status = MODE_WAIT;
			}
			break;
		case MODE_PRESS_DEC:
			display7SEG(counter_led);
			if(timer3_flag == 1)
			{
				if(counter_led == 0)
				{
					counter_led =9;
				}
				else{
					counter_led--;
				}
				status = MODE_WAIT2;
			}
			break;
		default:
			break;
		}
}

