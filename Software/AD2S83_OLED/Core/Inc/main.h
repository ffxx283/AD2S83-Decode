/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32g0xx_hal.h"

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
#define USB_5V_Pin GPIO_PIN_0
#define USB_5V_GPIO_Port GPIOA
#define VCC__12V_Pin GPIO_PIN_1
#define VCC__12V_GPIO_Port GPIOA
#define VCC_5V_Pin GPIO_PIN_2
#define VCC_5V_GPIO_Port GPIOA
#define OLED_CSn_Pin GPIO_PIN_3
#define OLED_CSn_GPIO_Port GPIOA
#define OLED_D_C_Pin GPIO_PIN_4
#define OLED_D_C_GPIO_Port GPIOA
#define OLED_SPI_CLK_Pin GPIO_PIN_5
#define OLED_SPI_CLK_GPIO_Port GPIOA
#define OLED_RST_Pin GPIO_PIN_6
#define OLED_RST_GPIO_Port GPIOA
#define OLED_SPI_MOSI_Pin GPIO_PIN_7
#define OLED_SPI_MOSI_GPIO_Port GPIOA
#define AD2S83_DATA1_Pin GPIO_PIN_0
#define AD2S83_DATA1_GPIO_Port GPIOB
#define AD2S83_DATA2_Pin GPIO_PIN_1
#define AD2S83_DATA2_GPIO_Port GPIOB
#define AD2S83_DATA3_Pin GPIO_PIN_2
#define AD2S83_DATA3_GPIO_Port GPIOB
#define AD2S83_DATA11_Pin GPIO_PIN_10
#define AD2S83_DATA11_GPIO_Port GPIOB
#define AD2S83_DATA12_Pin GPIO_PIN_11
#define AD2S83_DATA12_GPIO_Port GPIOB
#define AD2S83_DATA13_Pin GPIO_PIN_12
#define AD2S83_DATA13_GPIO_Port GPIOB
#define AD2S83_DATA14_Pin GPIO_PIN_13
#define AD2S83_DATA14_GPIO_Port GPIOB
#define AD2S83_DATA15_Pin GPIO_PIN_14
#define AD2S83_DATA15_GPIO_Port GPIOB
#define AD2S83_DATA16_Pin GPIO_PIN_15
#define AD2S83_DATA16_GPIO_Port GPIOB
#define LED_Pin GPIO_PIN_8
#define LED_GPIO_Port GPIOA
#define KEY2_Pin GPIO_PIN_6
#define KEY2_GPIO_Port GPIOC
#define KEY1_Pin GPIO_PIN_7
#define KEY1_GPIO_Port GPIOC
#define POWER__12V_EN_Pin GPIO_PIN_11
#define POWER__12V_EN_GPIO_Port GPIOA
#define POWER_5V_EN_Pin GPIO_PIN_12
#define POWER_5V_EN_GPIO_Port GPIOA
#define AD2S83_ENABLE_n_Pin GPIO_PIN_0
#define AD2S83_ENABLE_n_GPIO_Port GPIOD
#define AD2S83_INHIBIT_n_Pin GPIO_PIN_1
#define AD2S83_INHIBIT_n_GPIO_Port GPIOD
#define AD2S83_BUSY_Pin GPIO_PIN_2
#define AD2S83_BUSY_GPIO_Port GPIOD
#define AD2S83_DIR_Pin GPIO_PIN_3
#define AD2S83_DIR_GPIO_Port GPIOD
#define AD2S83_DATA4_Pin GPIO_PIN_3
#define AD2S83_DATA4_GPIO_Port GPIOB
#define AD2S83_DATA5_Pin GPIO_PIN_4
#define AD2S83_DATA5_GPIO_Port GPIOB
#define AD2S83_DATA6_Pin GPIO_PIN_5
#define AD2S83_DATA6_GPIO_Port GPIOB
#define AD2S83_DATA7_Pin GPIO_PIN_6
#define AD2S83_DATA7_GPIO_Port GPIOB
#define AD2S83_DATA8_Pin GPIO_PIN_7
#define AD2S83_DATA8_GPIO_Port GPIOB
#define AD2S83_DATA9_Pin GPIO_PIN_8
#define AD2S83_DATA9_GPIO_Port GPIOB
#define AD2S83_DATA10_Pin GPIO_PIN_9
#define AD2S83_DATA10_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
