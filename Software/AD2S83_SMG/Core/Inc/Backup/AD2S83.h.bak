/*
 * AD2S83.h
 *
 *  Created on: Feb 3, 2022
 *      Author: Administrator
 */

#ifndef INC_AD2S83_H_
#define INC_AD2S83_H_

#include "main.h"

#define AD2S83_ENABLE_n_Clr() HAL_GPIO_WritePin(AD2S83_ENABLE_n_GPIO_Port, AD2S83_ENABLE_n_Pin, GPIO_PIN_RESET)
#define AD2S83_ENABLE_n_Set() HAL_GPIO_WritePin(AD2S83_ENABLE_n_GPIO_Port, AD2S83_ENABLE_n_Pin, GPIO_PIN_SET)

#define AD2S83_INHIBIT_n_Clr() HAL_GPIO_WritePin(AD2S83_INHIBIT_n_GPIO_Port, AD2S83_INHIBIT_n_Pin, GPIO_PIN_RESET)
#define AD2S83_INHIBIT_n_Set() HAL_GPIO_WritePin(AD2S83_INHIBIT_n_GPIO_Port, AD2S83_INHIBIT_n_Pin, GPIO_PIN_SET)

#define AD2S83_DIR  HAL_GPIO_ReadPin( AD2S83_DIR_GPIO_Port , AD2S83_DIR_Pin )

#define AD2S83_BUSY  HAL_GPIO_ReadPin( AD2S83_BUSY_GPIO_Port , AD2S83_BUSY_Pin )


void AD2S83_Init(void);
uint32_t AD2S83_Get_Data(void);
uint8_t AD2S83_Get_DIR_State(void);
uint8_t AD2S83_Get_BUSY_State(void);
float AD2S83_Decode_Data(void);
float AD2S83_Decode_Data_Average(uint16_t num);

#endif /* INC_AD2S83_H_ */
