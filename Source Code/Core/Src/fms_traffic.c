/*
 * fms_traffic.c
 *
 *  Created on: Nov 15, 2023
 *      Author: Lenovo
 */


#include "fms_traffic.h"
#include "global.h"

void fsm_traffic_light_run(){
	switch (led_status){
		case INIT:
			offLed();

			led_status = MODE1;
			setTimer1(greenTime*100);
			setTimer2(100);

			timerRoad1 = redTime;
			timerRoad2 = greenTime;
			break;

		case MODE1:
			onRed1();
			onGreen2();

			if (timer2_flag == 1){
				setTimer2(100);
				timerRoad1--;
				timerRoad2--;
				if (timerRoad2 <= 0) timerRoad2 = yellowTime;
			}

			if (timer1_flag == 1){
				setTimer1(yellowTime*100);
				led_status = MODE2;
			}

			if (isButtonPressed(0) == 1) {
				offLed();

				led_status = MODE2_RED;
				redMode2 = redTime;
				yellowMode3 = yellowTime;
				greenMode4 = greenTime;


				setTimer5(1);
				timerRoad1 = redTime;
				timerRoad2 = 2;
			}

			break;

		case MODE2:
			onRed1();
			onYellow2();

			if (timer2_flag == 1){
				setTimer2(100);
				timerRoad1--;
				timerRoad2--;
				if (timerRoad1 <= 0) timerRoad1 = greenTime;
				if (timerRoad2 <= 0) timerRoad2 = redTime;
			}

			if(timer1_flag == 1){
				setTimer1(greenTime*100);
				led_status = MODE3;
			}

			if (isButtonPressed(0) == 1) {
				offLed();

				led_status = MODE3_YELLOW;
				redMode2 = redTime;
				yellowMode3 = yellowTime;
				greenMode4 = greenTime;


				setTimer5(1);
				timerRoad1 = redTime;
				timerRoad2 = 2;
			}

			break;

		case MODE3:
			onGreen1();
			onRed2();

			if (timer2_flag == 1){
				setTimer2(100);
				timerRoad1--;
				if (timerRoad1 <= 0) timerRoad1 = yellowTime;
				timerRoad2--;
			}


			if(timer1_flag == 1){
				setTimer1(yellowTime*100);
				led_status = MODE4;
			}

			if (isButtonPressed(0) == 1) {
				offLed();

				led_status = MODE4_GREEN;

				redMode2 = redTime;
				yellowMode3 = yellowTime;
				greenMode4 = greenTime;

				setTimer5(1);
				timerRoad1 = redTime;
				timerRoad2 = 2;
			}

			break;

		case MODE4:
			onYellow1();
			onRed2();

			if (timer2_flag == 1){
				setTimer2(100);
				timerRoad1--;
				if (timerRoad1 <= 0) timerRoad1 = redTime;
				timerRoad2--;
				if (timerRoad2 <= 0) timerRoad2 = greenTime;
			}

			if (timer1_flag == 1){
				setTimer1(greenTime*100);
				led_status = MODE1;
			}

			if (isButtonPressed(0) == 1) {
				offLed();

				led_status = MODE1;
				redMode2 = redTime;
				greenMode4 = greenTime;
				yellowMode3 = yellowTime;

				setTimer5(1);
				timerRoad1 = redTime;
				timerRoad2 = 2;
			}
			break;

		default:
			break;
		}

}
