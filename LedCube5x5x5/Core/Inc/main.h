/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Led_BL_Pin GPIO_PIN_13
#define Led_BL_GPIO_Port GPIOC
#define Clock_Pin GPIO_PIN_13
#define Clock_GPIO_Port GPIOB
#define Latch_Pin GPIO_PIN_14
#define Latch_GPIO_Port GPIOB
#define DS_Pin GPIO_PIN_15
#define DS_GPIO_Port GPIOB
#define BJT1_Pin GPIO_PIN_3
#define BJT1_GPIO_Port GPIOB
#define BJT2_Pin GPIO_PIN_4
#define BJT2_GPIO_Port GPIOB
#define BJT3_Pin GPIO_PIN_5
#define BJT3_GPIO_Port GPIOB
#define BJT4_Pin GPIO_PIN_6
#define BJT4_GPIO_Port GPIOB
#define BJT5_Pin GPIO_PIN_7
#define BJT5_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
