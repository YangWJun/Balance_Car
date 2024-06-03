//
// Created by 30709 on 2024/6/2.
//

#ifndef TEST1_MPU6050_H
#define TEST1_MPU6050_H
#include "main.h"
#include "inv_mpu.h"
#include "inv_mpu_dmp_motion_driver.h"
#include <stdio.h>
#include "math.h"
unsigned char mpu_dmp_init(void);
unsigned char mpu_dmp_get_data(float *pitch,float *roll,float *yaw);
int DMP_test(void);
#endif //TEST1_MPU6050_H
