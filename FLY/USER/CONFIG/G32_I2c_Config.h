#ifndef _G32_I2c_CONFIG_H_
#define _G32_I2c_CONFIG_H_
///****************************************/
#include "stm32_config.h"
#if VERSIONS ==2
/***I2C1 CONGIG ***/
#define RCC_Soft_I2c1_SCL RCC_APB2Periph_GPIOB
#define     Soft_I2c1_SCL_GPIO           GPIOB
#define     Soft_I2c1_SCL_PIN      GPIO_Pin_6
#define RCC_Soft_I2c1_SDA RCC_APB2Periph_GPIOB
#define     Soft_I2c1_SDA_GPIO           GPIOB
#define     Soft_I2c1_SDA_PIN      GPIO_Pin_7
//#error
/***I2C1 CONGIG ***/
#endif
/****************************************/
#if VERSIONS ==1
/***I2C1 CONGIG ***/
#define RCC_Soft_I2c1_SCL RCC_APB2Periph_GPIOB
#define     Soft_I2c1_SCL_GPIO           GPIOB
#define     Soft_I2c1_SCL_PIN      GPIO_Pin_14
#define RCC_Soft_I2c1_SDA RCC_APB2Periph_GPIOB
#define     Soft_I2c1_SDA_GPIO           GPIOB
#define     Soft_I2c1_SDA_PIN      GPIO_Pin_13
#endif
/***I2C1 CONGIG ***/
/***I2C2 CONGIG ***/
#define RCC_Soft_I2c2_SCL RCC_APB2Periph_GPIOB
#define     Soft_I2c2_SCL_GPIO           GPIOB
#define     Soft_I2c2_SCL_PIN      GPIO_Pin_11
#define RCC_Soft_I2c2_SDA RCC_APB2Periph_GPIOB
#define     Soft_I2c2_SDA_GPIO           GPIOB
#define     Soft_I2c2_SDA_PIN      GPIO_Pin_10
/***I2C2 CONGIG ***/
/****************************************/
#endif
