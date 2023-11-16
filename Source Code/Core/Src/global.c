/*
 * global.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Lenovo
 */


#include "global.h"

int status = 0;
int redTime = 5;
int greenTime = 2;
int yellowTime = 3;


int redMode2 = 0;
int yellowMode3 = 0;
int greenMode4 = 0;

int toggle = 0;


int led_buffer[4]={0,0,0,0};
int index_led = 0;
int timerRoad1 = 0;
int timerRoad2 = 0;


void updateLedBuffer(){
	led_buffer[0] = timerRoad1 / 10;
	led_buffer[1] = timerRoad1 % 10;
	led_buffer[2] = timerRoad2 / 10;
	led_buffer[3] = timerRoad2 % 10;
}
int led_status = 0;
