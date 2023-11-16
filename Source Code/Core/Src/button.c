/*
 * button.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Lenovo
 */

#include "button.h"

int keyReg0[numberButtons] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int keyReg1[numberButtons] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int keyReg2[numberButtons] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int keyReg3[numberButtons] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};

int timeOutForKeyPress[numberButtons] =  {200, 200, 200};

/*
 Declare cycle counters to determine the two possible
 events of the button
 */

int button_flag[numberButtons] = {0, 0, 0};
//--------------//

int isButtonPressed(int nameButton){
	if(button_flag[nameButton] == 1){
		button_flag[nameButton] = 0;
		return 1;
	}
	return 0;
}

//--------------//


void subKeyProcess(int nameButton){
	//TODO
	button_flag[nameButton]=1;
}

//-------------//

void getKeyInput()
{
	for (int i = 0; i < numberButtons; i++)
	{

		keyReg0[i] = keyReg1[i];
		keyReg1[i] = keyReg2[i];

		// red from button
		if (i == 0)
		{
			keyReg2[i] = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
		}
		if (i == 1)
		{
			keyReg2[i] = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
		}
		if (i == 2)
		{
			keyReg2[i] = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
		}

		// handle pressed

		if ((keyReg1[i] == keyReg0[i]) && (keyReg1[i] == keyReg2[i]))
		{
			if(keyReg3[i] != keyReg2[i])
			{
				keyReg3[i] = keyReg2[i];
				if(keyReg2[i] == PRESSED_STATE)
				{
					subKeyProcess(i);
					timeOutForKeyPress[i] = 200;
				}
			}

			else
			{
				timeOutForKeyPress[i]--;
				if (timeOutForKeyPress[i] == 0){
					keyReg3[i] = NORMAL_STATE;
				}

			}
		}

	}
}
