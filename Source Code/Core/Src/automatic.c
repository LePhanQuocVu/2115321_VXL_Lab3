/*
 * automatic.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Lenovo
 */


#include "automatic.h"
#include "button.h"
void fsm_automatic_run() {
	switch (status) {
	case INIT:
		//todo
		HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, GPIO_PIN_SET);

		status = AUTO_RED;
		setTimer1(500);
		break;
	case AUTO_RED:
		//todo
		HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, GPIO_PIN_SET);
		if(timer1_flag == 1) {
			status = AUTO_YELLOW;
			setTimer1(200);
		}
		if(isPressButton1()==1) {
			status = MAN_RED;
			setTimer1(1000);
		}
		break;
	case AUTO_YELLOW:
		//todo
		HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, GPIO_PIN_SET);
		if(timer1_flag == 1) {
			status = AUTO_GREEN;
			setTimer1(300);
		}
		break;
	case AUTO_GREEN:
		//todo
		HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, GPIO_PIN_RESET);
		if(timer1_flag == 1) {
			status = AUTO_RED;
			setTimer1(500);
		}
		break;
	default:
		break;
	}
}
