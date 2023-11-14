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

int isPressButton();
void getKeyInput();


#endif /* INC_BUTTON_H_ */
