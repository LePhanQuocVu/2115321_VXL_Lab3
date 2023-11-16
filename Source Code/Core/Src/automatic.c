/*
 * automatic.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Lenovo
 */


#include "automatic.h"
#include "button.h"
void fsm_automatic_run() {
	switch (led_status) {
	case INIT:
		//todo
		HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, GPIO_PIN_SET);


		HAL_GPIO_WritePin(Led_red2_GPIO_Port, Led_red2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_yellow2_GPIO_Port, Led_yellow2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, GPIO_PIN_SET);
//		status = AUTO_RED;
//		setTimer1(500);
		break;
	case MODE1:
		//todo
		HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, GPIO_PIN_SET);
//		if(timer1_flag == 1) {
//			status = AUTO_YELLOW;
//			setTimer1(200);
//		}
//		if(isPressButton1()==1) {
//			status = MAN_RED;
//			setTimer1(1000);
//		}
		break;
	case MODE2:
		//todo
		HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, GPIO_PIN_SET);
//		if(timer1_flag == 1) {
//			status = AUTO_GREEN;
//			setTimer1(300);
//		}
//		break;
	case MODE3:
		//todo
		HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, GPIO_PIN_RESET);
//		if(timer1_flag == 1) {
//			status = AUTO_RED;
//			setTimer1(500);
//		}
		break;
	default:
		break;
	}
}
