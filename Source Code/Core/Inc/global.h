/*
 * global.h
 *
 *  Created on: Nov 14, 2023
 *      Author: Lenovo
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "button.h"
#include "software_timer.h"
#include "automatic.h"
#include "manual.h"

#define INIT  			1
#define AUTO_RED 		2
#define AUTO_YELLOW 	3
#define AUTO_GREEN 		4


#define MAN_RED 		12
#define MAN_YELLOW		13
#define MAN_GREEN 		14
extern int status;

#endif /* INC_GLOBAL_H_ */
