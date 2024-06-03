//
// Created by 30709 on 2024/5/31.
//
#include "Encoder.h"
int16_t Encoder1_Get(void)
{
    int16_t Temp;
    Temp = __HAL_TIM_GET_COUNTER(&htim4);
    __HAL_TIM_SET_COUNTER(&htim4,0);
    return Temp;
}

int16_t Encoder2_Get(void)
{
    int16_t Temp;
    Temp = __HAL_TIM_GET_COUNTER(&htim1);
    __HAL_TIM_SET_COUNTER(&htim1,0);
    return Temp;
}