
#include "pwm.h"

//These adjustments were made cause i was using cheap joystick sorry guys 
void Led_Pwm1(uint8_t Data)
{
		if(Data >= 120)
		{
			__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_3,(Data-100));
			__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_4,0);
		}
		else if(Data <= 100)
		{
			__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_3,0);
			__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_4,((-Data)+98));
		}

}

void Led_Pwm2(uint8_t Data)
{
		if(Data >= 120)
		{
			__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_1,(Data-100));
			__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_2,0);
		}
		else if(Data <= 100)
		{
			__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_1,0);
			__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_2,((-Data)+95));
		}

}



