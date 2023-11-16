/*
 * convertMode.c
 *
 *  Created on: Nov 16, 2023
 *      Author: Lenovo
 */


#include "global.h"
#include "convertMode.h"
#include "software_timer.h"
#include "display7Seg.h"
void fsm_convert_mode(){
	switch (led_status){
	case MODE2_RED:
		if (timer5_flag == 1){
			setTimer5(25);
			if (toggle == 0){
				toggle = 1;
				onRed1();
				onRed2();
			}
			else {
				toggle = 0;
				offLed();
			}
		}

		if (isButtonPressed(0) == 1){ // convert Mode
			setTimer4(1);
			led_status = MODE3_YELLOW;

			timerRoad1 = yellowTime;
			timerRoad2 = 3;
		}

		if (isButtonPressed(1) == 1){ // click button2 -> increase timRed
			redMode2++;
			timerRoad1++;
			if (redMode2 >= 100) redMode2 = 2;
		}

		if (isButtonPressed(2) == 1){ // lick button3 -> setValue
			redTime = redMode2;
		}
		break;

	case MODE3_YELLOW:
		if (timer5_flag == 1){
			setTimer5(25);
			if (toggle == 0){
				toggle = 1;
				onYellow1();
				onYellow2();
			}
			else {
				toggle = 0;
				offLed();
			}
		}

		if (isButtonPressed(0) == 1){ //click button1 -> convert Mode 4
			setTimer5(1);
			led_status = MODE4_GREEN;

			timerRoad1 = greenTime;
			timerRoad2 = 4;
		}
		if (isButtonPressed(1) == 1){ // click button2 -> increase timeYellow
			yellowMode3++;
			timerRoad1++;
			if (yellowMode3 >= redTime) yellowMode3 = 1;
		}

		if (isButtonPressed(2) == 1){ // click button3 -> setValue
			yellowTime=yellowMode3;
		}
		break;

	case MODE4_GREEN:
		if (timer5_flag == 1){
			setTimer5(25);
			if (toggle == 0){
				toggle = 1;
				onGreen1();
				onGreen2();
			}
			else {
				toggle = 0;
				offLed();
			}
		}

		if (isButtonPressed(0) == 1){	//click button1 -> convert to MODE2
			led_status = MODE2_RED;
			greenTime = redTime - yellowTime;
			timerRoad1 = redTime;
			timerRoad2 = greenTime;
			updateLedBuffer();
			setTimer1(greenTime*100);
			setTimer2(100);

			//to display new value of 7SEG
			setTimer4(1);
			index_led=0;
			 clearAllEN();
		}

		if (isButtonPressed(1) == 1){		//click button2 -> increase timeGreen
			greenMode4++;
			timerRoad1++;
			if (greenMode4 >= redTime) greenMode4 = 1;
		}

		if (isButtonPressed(2) == 1){	//click button3 -> setValue
			greenTime = greenMode4;
			yellowTime = redTime - greenTime;
		}
		break;
	default:
		break;
	}
}
