/*
 * display7Seg.h
 *
 *  Created on: Nov 15, 2023
 *      Author: Lenovo
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_
#include "global.h"

void display7SEG(int num);
void clearAllEN();
void update7SEG(int index);
void offLed();

void onRed1();
void onYellow1();
void onGreen1();

void onRed2();
void onYellow2();
void onGreen2();


#endif /* INC_DISPLAY7SEG_H_ */
