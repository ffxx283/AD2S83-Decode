/*
 * SMG.h
 *
 *  Created on: Aug 15, 2022
 *      Author: Administrator
 */

#ifndef INC_SMG_H_
#define INC_SMG_H_

#include "main.h"

#define SMG_SDA_1 (SMG_SDA_GPIO_Port->BSRR = SMG_SDA_Pin)
#define SMG_SDA_0 (SMG_SDA_GPIO_Port->BSRR = (uint32_t)SMG_SDA_Pin << 16u )


#define SMG_CLK_1 (SMG_CLK_GPIO_Port->BSRR = SMG_CLK_Pin)
#define SMG_CLK_0 (SMG_CLK_GPIO_Port->BSRR = (uint32_t)SMG_CLK_Pin << 16u )

#define SMG_LOAD_1 (SMG_LOAD_GPIO_Port->BSRR = SMG_LOAD_Pin)
#define SMG_LOAD_0 (SMG_LOAD_GPIO_Port->BSRR = (uint32_t)SMG_LOAD_Pin << 16u )

void SMG_Display_Data(uint8_t *Data);






#endif /* INC_SMG_H_ */
