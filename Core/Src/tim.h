/**
  ******************************************************************************
  * @file    tim.h
  * @brief   Header pour la configuration du Timer
  ******************************************************************************
  */
#ifndef __TIM_H__
#define __TIM_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f4xx_hal.h"
/* Exported types ------------------------------------------------------------*/
extern TIM_HandleTypeDef htim2;

/* Exported functions prototypes ---------------------------------------------*/
void MX_TIM2_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* __TIM_H__ */
