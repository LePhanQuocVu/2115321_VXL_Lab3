/*
 * button.h
 *
 *  Created on: Nov 14, 2023
 *      Author: Lenovo
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "software_timer.h"

#define NORMAL_STATE	GPIO_PIN_SET
#define PRESSED_STATE	GPIO_PIN_RESET

#define numberButtons	3

int isButtonPressed(int nameButton);
void getKeyInput();



#endif /* INC_BUTTON_H_ */
