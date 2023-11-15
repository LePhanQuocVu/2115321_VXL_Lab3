/*
 * display7Seg.c
 *
 *  Created on: Nov 15, 2023
 *      Author: Lenovo
 */


#include "display7Seg.h"


void update7SEG(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(P0_GPIO_Port, P0_Pin, RESET);
		HAL_GPIO_WritePin(P1_GPIO_Port, P1_Pin, RESET);
		HAL_GPIO_WritePin(P2_GPIO_Port, P2_Pin, RESET);
		HAL_GPIO_WritePin(P3_GPIO_Port, P3_Pin, RESET);
		HAL_GPIO_WritePin(P4_GPIO_Port, P4_Pin, RESET);
		HAL_GPIO_WritePin(P5_GPIO_Port, P5_Pin, RESET);
		HAL_GPIO_WritePin(P6_GPIO_Port, P6_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(P0_GPIO_Port, P0_Pin, SET);
		HAL_GPIO_WritePin(P1_GPIO_Port, P1_Pin, RESET);
		HAL_GPIO_WritePin(P2_GPIO_Port, P2_Pin, RESET);
		HAL_GPIO_WritePin(P3_GPIO_Port, P3_Pin, SET);
		HAL_GPIO_WritePin(P4_GPIO_Port, P4_Pin, SET);
		HAL_GPIO_WritePin(P5_GPIO_Port, P5_Pin, SET);
		HAL_GPIO_WritePin(P6_GPIO_Port, P6_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(P0_GPIO_Port, P0_Pin, RESET);
		HAL_GPIO_WritePin(P1_GPIO_Port, P1_Pin, RESET);
		HAL_GPIO_WritePin(P2_GPIO_Port, P2_Pin, SET);
		HAL_GPIO_WritePin(P3_GPIO_Port, P3_Pin, RESET);
		HAL_GPIO_WritePin(P4_GPIO_Port, P4_Pin, RESET);
		HAL_GPIO_WritePin(P5_GPIO_Port, P5_Pin, SET);
		HAL_GPIO_WritePin(P6_GPIO_Port, P6_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(P0_GPIO_Port, P0_Pin, RESET);
		HAL_GPIO_WritePin(P1_GPIO_Port, P1_Pin, RESET);
		HAL_GPIO_WritePin(P2_GPIO_Port, P2_Pin, RESET);
		HAL_GPIO_WritePin(P3_GPIO_Port, P3_Pin, RESET);
		HAL_GPIO_WritePin(P4_GPIO_Port, P4_Pin, SET);
		HAL_GPIO_WritePin(P5_GPIO_Port, P5_Pin, SET);
		HAL_GPIO_WritePin(P6_GPIO_Port, P6_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(P0_GPIO_Port, P0_Pin, SET);
		HAL_GPIO_WritePin(P1_GPIO_Port, P1_Pin, RESET);
		HAL_GPIO_WritePin(P2_GPIO_Port, P2_Pin, RESET);
		HAL_GPIO_WritePin(P3_GPIO_Port, P3_Pin, SET);
		HAL_GPIO_WritePin(P4_GPIO_Port, P4_Pin, SET);
		HAL_GPIO_WritePin(P5_GPIO_Port, P5_Pin, RESET);
		HAL_GPIO_WritePin(P6_GPIO_Port, P6_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(P0_GPIO_Port, P0_Pin, RESET);
		HAL_GPIO_WritePin(P1_GPIO_Port, P1_Pin, SET);
		HAL_GPIO_WritePin(P2_GPIO_Port, P2_Pin, RESET);
		HAL_GPIO_WritePin(P3_GPIO_Port, P3_Pin, RESET);
		HAL_GPIO_WritePin(P4_GPIO_Port, P4_Pin, SET);
		HAL_GPIO_WritePin(P5_GPIO_Port, P5_Pin, RESET);
		HAL_GPIO_WritePin(P6_GPIO_Port, P6_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(P0_GPIO_Port, P0_Pin, RESET);
		HAL_GPIO_WritePin(P1_GPIO_Port, P1_Pin, SET);
		HAL_GPIO_WritePin(P2_GPIO_Port, P2_Pin, RESET);
		HAL_GPIO_WritePin(P3_GPIO_Port, P3_Pin, RESET);
		HAL_GPIO_WritePin(P4_GPIO_Port, P4_Pin, RESET);
		HAL_GPIO_WritePin(P5_GPIO_Port, P5_Pin, RESET);
		HAL_GPIO_WritePin(P6_GPIO_Port, P6_Pin, RESET);
		break;
	case 7:

		HAL_GPIO_WritePin(P0_GPIO_Port, P0_Pin, RESET);
		HAL_GPIO_WritePin(P1_GPIO_Port, P1_Pin, RESET);
		HAL_GPIO_WritePin(P2_GPIO_Port, P2_Pin, RESET);
		HAL_GPIO_WritePin(P3_GPIO_Port, P3_Pin, SET);
		HAL_GPIO_WritePin(P4_GPIO_Port, P4_Pin, SET);
		HAL_GPIO_WritePin(P5_GPIO_Port, P5_Pin, SET);
		HAL_GPIO_WritePin(P6_GPIO_Port, P6_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(P0_GPIO_Port, P0_Pin, RESET);
		HAL_GPIO_WritePin(P1_GPIO_Port, P1_Pin, RESET);
		HAL_GPIO_WritePin(P2_GPIO_Port, P2_Pin, RESET);
		HAL_GPIO_WritePin(P3_GPIO_Port, P3_Pin, RESET);
		HAL_GPIO_WritePin(P4_GPIO_Port, P4_Pin, RESET);
		HAL_GPIO_WritePin(P5_GPIO_Port, P5_Pin, RESET);
		HAL_GPIO_WritePin(P6_GPIO_Port, P6_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(P0_GPIO_Port, P0_Pin, RESET);
		HAL_GPIO_WritePin(P1_GPIO_Port, P1_Pin, RESET);
		HAL_GPIO_WritePin(P2_GPIO_Port, P2_Pin, RESET);
		HAL_GPIO_WritePin(P3_GPIO_Port, P3_Pin, RESET);
		HAL_GPIO_WritePin(P4_GPIO_Port, P4_Pin, SET);
		HAL_GPIO_WritePin(P5_GPIO_Port, P5_Pin, RESET);
		HAL_GPIO_WritePin(P6_GPIO_Port, P6_Pin, RESET);
		break;
	default:
		HAL_GPIO_WritePin(P0_GPIO_Port, P0_Pin, SET);
		HAL_GPIO_WritePin(P1_GPIO_Port, P1_Pin, SET);
		HAL_GPIO_WritePin(P2_GPIO_Port, P2_Pin, SET);
		HAL_GPIO_WritePin(P3_GPIO_Port, P3_Pin, SET);
		HAL_GPIO_WritePin(P4_GPIO_Port, P4_Pin, SET);
		HAL_GPIO_WritePin(P5_GPIO_Port, P5_Pin, SET);
		HAL_GPIO_WritePin(P6_GPIO_Port, P6_Pin, SET);
		break;
	}
}


void clearAllEN() {
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_GPIO_Port, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_GPIO_Port, SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_GPIO_Port, SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_GPIO_Port, SET);
}


void update7SEG(int index){
	clearSignal();
	display7SEG(led_buffer[index]);
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		break;
	default:
		break;
	}
}