/*
 * display_led.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ASUS
 */


#include "display_led.h"
#include "main.h"

void display7SEG(int num)
{

//	if(num == 0){
//		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEGA0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, SET);
//	}
//	if(num == 1){
//		HAL_GPIO_WritePin(SEGA0_GPIO_Port, SEGA0_Pin, SET);
//		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, SET);
//		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, SET);
//		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, SET);
//		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, SET);
//	}
//	if(num == 2){
//		HAL_GPIO_WritePin(SEGA0_GPIO_Port, SEGA0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, SET);
//		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, SET);
//		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
//	}
//	if(num == 3){
//		HAL_GPIO_WritePin(SEGA0_GPIO_Port, SEGA0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, SET);
//		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, SET);
//		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
//	}
//	if(num == 4){
//		HAL_GPIO_WritePin(SEGA0_GPIO_Port, SEGA0_Pin, SET);
//		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, SET);
//		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, SET);
//		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
//	}
//	if(num == 5){
//		HAL_GPIO_WritePin(SEGA0_GPIO_Port, SEGA0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, SET);
//		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, SET);
//		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
//	}
//	if(num == 6){
//		HAL_GPIO_WritePin(SEGA0_GPIO_Port, SEGA0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, SET);
//		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
//	}
//	if(num == 7){
//		HAL_GPIO_WritePin(SEGA0_GPIO_Port, SEGA0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, SET);
//		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, SET);
//		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, SET);
//		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, SET);
//	}
//	if(num == 8){
//		HAL_GPIO_WritePin(SEGA0_GPIO_Port, SEGA0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
//	}
//	if(num == 9){
//		HAL_GPIO_WritePin(SEGA0_GPIO_Port, SEGA0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA1_GPIO_Port, SEGA1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA2_GPIO_Port, SEGA2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA3_GPIO_Port, SEGA3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA4_GPIO_Port, SEGA4_Pin, SET);
//		HAL_GPIO_WritePin(SEGA5_GPIO_Port, SEGA5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGA6_GPIO_Port, SEGA6_Pin, RESET);
//	}
}
void display7SEG_2(int num)
{

//	if(num == 0){
//		HAL_GPIO_WritePin(SEGB0_GPIO_Port, SEGB0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, SET);
//	}
//	if(num == 1){
//		HAL_GPIO_WritePin(SEGB0_GPIO_Port, SEGB0_Pin, SET);
//		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, SET);
//		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, SET);
//		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, SET);
//		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, SET);
//	}
//	if(num == 2){
//		HAL_GPIO_WritePin(SEGB0_GPIO_Port, SEGB0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, SET);
//		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, SET);
//		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
//	}
//	if(num == 3){
//		HAL_GPIO_WritePin(SEGB0_GPIO_Port, SEGB0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, SET);
//		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, SET);
//		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
//	}
//	if(num == 4){
//		HAL_GPIO_WritePin(SEGB0_GPIO_Port, SEGB0_Pin, SET);
//		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, SET);
//		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, SET);
//		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
//	}
//	if(num == 5){
//		HAL_GPIO_WritePin(SEGB0_GPIO_Port, SEGB0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, SET);
//		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, SET);
//		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
//	}
//	if(num == 6){
//		HAL_GPIO_WritePin(SEGB0_GPIO_Port, SEGB0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, SET);
//		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
//	}
//	if(num == 7){
//		HAL_GPIO_WritePin(SEGB0_GPIO_Port, SEGB0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, SET);
//		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, SET);
//		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, SET);
//		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, SET);
//	}
//	if(num == 8){
//		HAL_GPIO_WritePin(SEGB0_GPIO_Port, SEGB0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
//	}
//	if(num == 9){
//		HAL_GPIO_WritePin(SEGB0_GPIO_Port, SEGB0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB1_GPIO_Port, SEGB1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB2_GPIO_Port, SEGB2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB3_GPIO_Port, SEGB3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB4_GPIO_Port, SEGB4_Pin, SET);
//		HAL_GPIO_WritePin(SEGB5_GPIO_Port, SEGB5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGB6_GPIO_Port, SEGB6_Pin, RESET);
//	}
}

void display7SEG_3(int num)
{

//	if(num == 0){
//		HAL_GPIO_WritePin(SEGC0_GPIO_Port, SEGC0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC1_GPIO_Port, SEGC1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC2_GPIO_Port, SEGC2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC3_GPIO_Port, SEGC3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC4_GPIO_Port, SEGC4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC5_GPIO_Port, SEGC5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC6_GPIO_Port, SEGC6_Pin, SET);
//	}
//	if(num == 1){
//		HAL_GPIO_WritePin(SEGC0_GPIO_Port, SEGC0_Pin, SET);
//		HAL_GPIO_WritePin(SEGC1_GPIO_Port, SEGC1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC2_GPIO_Port, SEGC2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC3_GPIO_Port, SEGC3_Pin, SET);
//		HAL_GPIO_WritePin(SEGC4_GPIO_Port, SEGC4_Pin, SET);
//		HAL_GPIO_WritePin(SEGC5_GPIO_Port, SEGC5_Pin, SET);
//		HAL_GPIO_WritePin(SEGC6_GPIO_Port, SEGC6_Pin, SET);
//	}
//	if(num == 2){
//		HAL_GPIO_WritePin(SEGC0_GPIO_Port, SEGC0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC1_GPIO_Port, SEGC1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC2_GPIO_Port, SEGC2_Pin, SET);
//		HAL_GPIO_WritePin(SEGC3_GPIO_Port, SEGC3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC4_GPIO_Port, SEGC4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC5_GPIO_Port, SEGC5_Pin, SET);
//		HAL_GPIO_WritePin(SEGC6_GPIO_Port, SEGC6_Pin, RESET);
//	}
//	if(num == 3){
//		HAL_GPIO_WritePin(SEGC0_GPIO_Port, SEGC0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC1_GPIO_Port, SEGC1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC2_GPIO_Port, SEGC2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC3_GPIO_Port, SEGC3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC4_GPIO_Port, SEGC4_Pin, SET);
//		HAL_GPIO_WritePin(SEGC5_GPIO_Port, SEGC5_Pin, SET);
//		HAL_GPIO_WritePin(SEGC6_GPIO_Port, SEGC6_Pin, RESET);
//	}
//	if(num == 4){
//		HAL_GPIO_WritePin(SEGC0_GPIO_Port, SEGC0_Pin, SET);
//		HAL_GPIO_WritePin(SEGC1_GPIO_Port, SEGC1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC2_GPIO_Port, SEGC2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC3_GPIO_Port, SEGC3_Pin, SET);
//		HAL_GPIO_WritePin(SEGC4_GPIO_Port, SEGC4_Pin, SET);
//		HAL_GPIO_WritePin(SEGC5_GPIO_Port, SEGC5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC6_GPIO_Port, SEGC6_Pin, RESET);
//	}
//	if(num == 5){
//		HAL_GPIO_WritePin(SEGC0_GPIO_Port, SEGC0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC1_GPIO_Port, SEGC1_Pin, SET);
//		HAL_GPIO_WritePin(SEGC2_GPIO_Port, SEGC2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC3_GPIO_Port, SEGC3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC4_GPIO_Port, SEGC4_Pin, SET);
//		HAL_GPIO_WritePin(SEGC5_GPIO_Port, SEGC5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC6_GPIO_Port, SEGC6_Pin, RESET);
//	}
//	if(num == 6){
//		HAL_GPIO_WritePin(SEGC0_GPIO_Port, SEGC0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC1_GPIO_Port, SEGC1_Pin, SET);
//		HAL_GPIO_WritePin(SEGC2_GPIO_Port, SEGC2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC3_GPIO_Port, SEGC3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC4_GPIO_Port, SEGC4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC5_GPIO_Port, SEGC5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC6_GPIO_Port, SEGC6_Pin, RESET);
//	}
//	if(num == 7){
//		HAL_GPIO_WritePin(SEGC0_GPIO_Port, SEGC0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC1_GPIO_Port, SEGC1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC2_GPIO_Port, SEGC2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC3_GPIO_Port, SEGC3_Pin, SET);
//		HAL_GPIO_WritePin(SEGC4_GPIO_Port, SEGC4_Pin, SET);
//		HAL_GPIO_WritePin(SEGC5_GPIO_Port, SEGC5_Pin, SET);
//		HAL_GPIO_WritePin(SEGC6_GPIO_Port, SEGC6_Pin, SET);
//	}
//	if(num == 8){
//		HAL_GPIO_WritePin(SEGC0_GPIO_Port, SEGC0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC1_GPIO_Port, SEGC1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC2_GPIO_Port, SEGC2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC3_GPIO_Port, SEGC3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC4_GPIO_Port, SEGC4_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC5_GPIO_Port, SEGC5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC6_GPIO_Port, SEGC6_Pin, RESET);
//	}
//	if(num == 9){
//		HAL_GPIO_WritePin(SEGC0_GPIO_Port, SEGC0_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC1_GPIO_Port, SEGC1_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC2_GPIO_Port, SEGC2_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC3_GPIO_Port, SEGC3_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC4_GPIO_Port, SEGC4_Pin, SET);
//		HAL_GPIO_WritePin(SEGC5_GPIO_Port, SEGC5_Pin, RESET);
//		HAL_GPIO_WritePin(SEGC6_GPIO_Port, SEGC6_Pin, RESET);
//	}
}
