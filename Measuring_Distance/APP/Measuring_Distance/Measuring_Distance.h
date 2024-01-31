/*
 * Measuring_Distance.h
 *
 * Created: 1/31/2024 4:53:41 AM
 *  Author: Ali Mamdoh
 */ 


#ifndef MEASURING_DISTANCE_H_
#define MEASURING_DISTANCE_H_

#include "PORT_Core.h"
#include "LCD_Core.h"
#include "IRQH_Core.h"
#include "GPT_Core.h"
#include "ULTRASONIC_Core.h"

void Project_Init (void);
void Welcome_Message (void);
uint32 Measure_Distance (void);
void Display_Distance (uint32 Distance);


#endif /* MEASURING_DISTANCE_H_ */