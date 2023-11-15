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

int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;
int KeyReg12 = NORMAL_STATE;
int KeyReg13 = NORMAL_STATE;


int KeyReg20 = NORMAL_STATE;
int KeyReg21 = NORMAL_STATE;
int KeyReg22 = NORMAL_STATE;
int KeyReg23 = NORMAL_STATE;

int TimeForKeyPress = 200;


//press state
int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;


int isPressButton1() {
	if(button1_flag == 1) {
		button1_flag = 0;
		return 1;
	}
	return 0;
}

//press button2
int isPressButton2() {
	if(button2_flag == 1) {
		button2_flag = 0;
		return 1;
	}
	return 0;
}

//press button3
int isPressButton3() {
	if(button3_flag == 1) {
		button3_flag = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess() {
	button1_flag = 1;
	 button2_flag = 1;
	 button2_flag = 1;
}
void getButton1Input() {
	KeyReg0 = KeyReg1;
	 KeyReg1 = KeyReg2;
	 KeyReg2 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
	 if(KeyReg0 == KeyReg1 && KeyReg1 == KeyReg2) {
		 if(KeyReg3 != KeyReg2) { // khong nhan -> nhan xuong
			 KeyReg3 = KeyReg2;
			 if(KeyReg2 == PRESS_STATE) {
				 subKeyProcess();
				 TimeForKeyPress = 200;
				 //todo
			 }

		 } else {
			 TimeForKeyPress--;
			 if(TimeForKeyPress == 0) {
				 KeyReg3 = NORMAL_STATE;
				 //todo
			 }
		 }
	 }
}

void getButton2Input() {
	KeyReg10 = KeyReg11;
	 KeyReg11 = KeyReg12;
	 KeyReg12 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	 if(KeyReg10 == KeyReg11 && KeyReg11 == KeyReg12) {
		 if(KeyReg13 != KeyReg12) { // khong nhan -> nhan xuong
			 KeyReg13 = KeyReg12;
			 if(KeyReg12 == PRESS_STATE) {
				 subKeyProcess();
				 TimeForKeyPress = 200;
				 //todo
			 }

		 } else {
			 TimeForKeyPress--;
			 if(TimeForKeyPress == 0) {
				 KeyReg13 = NORMAL_STATE;
				 //todo
			 }
		 }
	 }
}

// button 3


void getButton3Input() {
 KeyReg20 = KeyReg21;
 KeyReg21 = KeyReg22;
 KeyReg22 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
 if(KeyReg20 == KeyReg21 && KeyReg21 == KeyReg22) {
	 if(KeyReg23 != KeyReg22) { // khong nhan -> nhan xuong
		 KeyReg23 = KeyReg22;
		 if(KeyReg22 == PRESS_STATE) {
			 subKeyProcess();
			 TimeForKeyPress = 200;
			 //todo
		 }

	 } else {
		 TimeForKeyPress--;
		 if(TimeForKeyPress == 0) {
			 KeyReg23 = NORMAL_STATE;
			 //todo
		 }
	 }
 }
}

