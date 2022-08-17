/*
 * SMG.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Administrator
 */

#include "SMG.h"


uint8_t Tab[]={0xc0,0xf9,0xa4,0xb0,    					//0~3
                0x99,0x92,0x82,0xf8,    					//4~7
                0x80,0x90,0x88,0x83,    					//8~9  A b
                0xc6,0xa1,0x86,0x8e,0xff,0x7f};   // C d E F 灭 .


void SPI_595(uint8_t value)
{
	uint8_t i;
	for(i=0;i<8;i++)
	{
		SMG_CLK_0;		//CLK拉低
		if(0x80&value)												//判断当前发送位数据
			SMG_SDA_1;		//当前数据位为1，则拉高SDA
		else
			SMG_SDA_0;	//当前数据位为0，则拉低SDA
		SMG_CLK_1;			//拉高CLK，产生上升沿，保存移位数据
		value = value <<1 ;										//将数据左移一位
	}
	SMG_SDA_0;			//数据输入完毕后复位SDA/CLK
	SMG_CLK_0;
}


void load(void)
{
	SMG_LOAD_1;			//拉高LOAD,产生上升沿，锁存移位数据并输出
	SMG_LOAD_0;			//完毕后复位LOAD
}


void SMG_Display_Data(uint8_t *Data)
{
	uint8_t j=0;

	for(j=0;j<5;j++){		//串行输入数据，本例程输入10位长度
		SPI_595( (j==2?0x7F&Tab[ Data[4-j] ]:Tab[ Data[4-j] ] ) );
	}
	load();							//并行输出
}

