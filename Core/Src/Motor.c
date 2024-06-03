//
// Created by 30709 on 2024/5/31.
//
#include "Motor.h"
void Motor1_SetSpeed(int16_t Speed)
{
    if (Speed >= 0)
    {
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET);
        __HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_1, Speed);
    }
    else
    {
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET);
                __HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_1, Speed);
    } //正反转改变
}

void Motor2_SetSpeed(int16_t Speed)
{
    if (Speed >= 0)
    {
        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_RESET);
                __HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_2, Speed);
    }
    else
    {
        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET);
                __HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_2, Speed);
    } //正反转改变
}