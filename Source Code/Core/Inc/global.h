/*
 * global.h
 *
 *  Created on: Nov 14, 2023
 *      Author: Lenovo
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "button.h"
#include "software_timer.h"
#include "fms_traffic.h"
#include "convertMode.h"

#define INIT 		0

#define	MODE1  		1
#define MODE2 		2
#define MODE3 		3
#define MODE4		4

#define MODE2_RED				10
#define MODE3_YELLOW  			11
#define MODE4_GREEN				12

extern int led_status;


extern int redTime;
extern int greenTime;
extern int yellowTime;

extern int redMode2;
extern int yellowMode3;
extern int greenMode4;


extern int toggle;

extern int led_buffer[4];
extern int index_led;
extern int timerRoad1;
extern int timerRoad2;


void updateLedBuffer();

#endif /* INC_GLOBAL_H_ */
