//
// Created by 30709 on 2024/5/31.
//
#include "PID.h"

float Error_Last ;
float  Pwm_integral,Pwm;
float Kp =0.13, Ki =0.07, Kd = 0;

float SpeedInnerControl(int16_t Speed,int16_t Target)
{
    float Error = Target - Speed;
    /*积分项*/
    Pwm_integral += Error;
    /*积分限幅*/
    /*  if(Pwm_integral>100){
    Pwm_integral=100;
    } 	*/
//输出PWM计算
    Pwm =  Kp * Error +
           Ki * Pwm_integral +
           Kd *( Error-Error_Last);
    /*误差传递*/
    Error_Last = Error;



    if(Pwm>100){
        Pwm=100;
    }
    if(Pwm<0){
        Pwm=0;
    }
    /*返回当前实际值*/
    return Pwm;
}