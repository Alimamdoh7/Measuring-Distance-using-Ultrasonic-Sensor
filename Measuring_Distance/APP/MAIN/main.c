/*
 * main.c
 *
 * Created: 9/12/2023 9:45:35 PM
 * Author : AliMamdoh
 */ 


#include "Measuring_Distance.h"

int main(void)
{
   uint32 Distance = 0;
   Project_Init();
   while (1)
   {
	 Distance = Measure_Distance();
	 Display_Distance(Distance);
   }
}

