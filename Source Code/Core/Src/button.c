/*
 * button.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Lenovo
 */


#include"button.h"

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;


int TimeForKeyPress = 200;

int button1_flag = 0;

int isPressButton() {
	if(button1_flag == 1) {
		button1_flag = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess() {
	button1_flag = 1;
}
void getKeyInput() {
	KeyReg0 = KeyReg1;
	 KeyReg1 = KeyReg2;
	 KeyReg2 = HAL_GPIO_ReadPin(Button_GPIO_Port, Button_Pin);
	 if(KeyReg0 == KeyReg1 && KeyReg1 == KeyReg2) {
		 if(KeyReg3 != KeyReg2) { // khong nhan -> nhan xuong
			 KeyReg3 = KeyReg2;
			 if(KeyReg2 == PRESS_STATE) {
				 subKeyProcess();
				 TimeForKeyPress = 200;
			 }
			 //todo
		 } else {
			 TimeForKeyPress--;
			 if(TimeForKeyPress == 0) {
				 KeyReg3 = NORMAL_STATE;
				 //todo
			 }
		 }
	 }
}
