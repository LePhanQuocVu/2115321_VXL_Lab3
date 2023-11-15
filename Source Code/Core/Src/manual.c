/*
 * manual.h
 *
 *  Created on: Nov 14, 2023
 *      Author: Lenovo
 */

#include "manual.h"

void fsm_manual_run() {
		switch(status) {
		case MAN_RED:
			HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin, GPIO_PIN_SET);
			if(timer1_flag == 1) {
				status = AUTO_RED;
				setTimer1(500);
			}
			if(isPressButton() == 1) {
				status = MAN_YELLOW;
				setTimer1(1000);
			}
			break;
		case MAN_YELLOW:
			break;
		case MAN_GREEN:
			break;
		default:
			break;
		}
}
