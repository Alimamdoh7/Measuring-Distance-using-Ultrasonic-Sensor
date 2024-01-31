/*
 * Measuring_Distance.c
 *
 * Created: 1/31/2024 4:53:23 AM
 *  Author: Ali Mamdoh
 */ 


#include "Measuring_Distance.h"

void Project_Init (void)
{
	 PORT_Init();
	 IRQH_SetGlobalInterrupts(INTERRUPT_ENABLE);
	 GPT_Init();
	 ICU_Init();
	 LCD_Init();
	 Welcome_Message();
}

void Welcome_Message (void)
{
	LCD_GoTo(0,0);
	LCD_WriteString("Distance Measure");
	LCD_GoTo(1,0);
	LCD_WriteString("Project");
	_delay_ms(1500);
	LCD_Clear();
	LCD_GoTo(0,0);
	LCD_WriteString("Made By:");
	LCD_GoTo(1,0);
	LCD_WriteString("Ali Mamdoh");
	_delay_ms(1500);
	LCD_Clear();
}


uint32 Measure_Distance (void)
{
	uint32 Distance=0;
	Ultrasonic_Trigger();
	Distance = Ultrasonic_CalculateDistance();
    return Distance;
}

void Display_Distance (uint32 Distance)
{
	LCD_GoTo(0,0);
	LCD_WriteString("Distance =");
	LCD_GoTo(1,0);
	LCD_WriteInteger(Distance);
	LCD_WriteString("cm");
	_delay_ms(500);
	LCD_Clear();
}

