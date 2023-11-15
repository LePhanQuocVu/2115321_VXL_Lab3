/*
 * button.h
 *
 *  Created on: Nov 14, 2023
 *      Author: Lenovo
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include"main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESS_STATE GPIO_PIN_RESET

extern int button1_flag;
extern int button2_flag;
extern int button3_flag;

//button1

int isPressButton1();
void getButton1Input();

//button2

int isPressButton2();
void getButton2Input();

//button 3
int isPressButton3();
void getButton3Input();


#endif /* INC_BUTTON_H_ */
