/*
 * Button.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ASUS
 */

#include "button.h"
#include "main.h"
#include "global.h"

int button1_flag=0;
int button2_flag=0;
int button3_flag=0;

int button1_1s_flag=0;
int button2_3s_flag=0;
int button3_3s_flag=0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;

int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;
int downtime = 100;

int TimeOutForKeyPress =  10;

int is_Button1_Pressed(){
	if(button1_flag == 1)
	{
		button1_flag =0;
		return 1;
	}
	return 0;
}
int is_Button2_Pressed(){
	if(button2_flag == 1)
	{
		button2_flag =0;
		return 1;
	}
	return 0;
}
int is_Button3_Pressed(){
	if(button3_flag == 1)
	{
		button3_flag =0;
		return 1;
	}
	return 0;
}
//-------------3s------------
int is_Button1_Pressed_1s(){
	if(button1_1s_flag == 1)
	{
		button1_1s_flag =0;
		return 1;
	}
	return 0;
}
int is_Button2_Pressed_3s(){
	if(button2_3s_flag == 1)
	{
		button2_3s_flag =0;
		return 1;
	}
	return 0;
}
int is_Button3_Pressed_3s(){
	if(button3_3s_flag == 1)
	{
		button3_3s_flag = 0;
		return 1;
	}
	return 0;
}
//---------------------------
void subKeyProcess_1(){
	button1_flag=1;
}
void subKeyProcess_2(){
	button2_flag=1;
}
void subKeyProcess_3(){
	button3_flag=1;
}
void getKeyInput1(){
  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg2 == PRESSED_STATE){
        TimeOutForKeyPress = 100;
        subKeyProcess_1();
      }
    }else{
       TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
          //KeyReg3 = NORMAL_STATE;
        	if (KeyReg2 == PRESSED_STATE){
        		subKeyProcess_1();
        	}
        	TimeOutForKeyPress = 100;
        }
    }
  }
}
void getKeyInput2(){
  KeyReg6 = KeyReg5;
  KeyReg5 = KeyReg4;
  KeyReg4 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
  if ((KeyReg5 == KeyReg4) && (KeyReg5 == KeyReg6)){
    if (KeyReg6 != KeyReg7){
      KeyReg7 = KeyReg4;
      if (KeyReg7 == PRESSED_STATE){
         TimeOutForKeyPress = 100;
         button2_flag=1;
      }
    }else{
    	if(KeyReg7 == PRESSED_STATE)
    	{
    		if(counter_time < 300)
    		{
    			counter_time++;
    		}
    		else{
    			button2_flag = 0;
    			button2_3s_flag = 1;
    		}
    	}
    	else{
    		TimeOutForKeyPress --;
    		if (TimeOutForKeyPress == 0){
    			KeyReg7 = NORMAL_STATE;
    			counter_time =0;
    			button2_3s_flag=0;
    			button2_flag=0;
    		}
    	}
    }
  }
}
void getKeyInput3(){
  KeyReg10 = KeyReg9;
  KeyReg9 = KeyReg8;
  KeyReg8 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
  if ((KeyReg9 == KeyReg8) && (KeyReg9 == KeyReg10)){
    if (KeyReg10 != KeyReg11){
      KeyReg11 = KeyReg8;
      if (KeyReg11 == PRESSED_STATE){
        TimeOutForKeyPress = 100;
        button3_flag =1;
      }
    }else{
    	if(KeyReg11 == PRESSED_STATE)
    	{
    		if(counter_time < 300)
    		{
    			counter_time++;
    		}
    		else{
    			button3_flag = 0;
    			button3_3s_flag = 1;
    		}
    	}
    	else{
    		TimeOutForKeyPress --;
    		if (TimeOutForKeyPress == 0){
    			KeyReg11 = NORMAL_STATE;
    			counter_time =0;
    			button3_3s_flag=0;
    			button3_flag=0;
    		}
    	}
    }
  }
}
