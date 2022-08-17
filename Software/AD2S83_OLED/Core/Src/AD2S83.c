/*
 * AD2S83.c
 *
 *  Created on: Feb 3, 2022
 *      Author: Administrator
 */

#include "AD2S83.h"

void AD2S83_Init(void)
{
	AD2S83_ENABLE_n_Clr();
}

unsigned char shift_fun2(unsigned char data)
{
    data=(data<<4)|(data>>4);
    data=((data<<2)&0xcc)|((data>>2)&0x33);
    data=((data<<1)&0xaa)|((data>>1)&0x55);

    return data;
}

uint32_t AD2S83_Get_Data(void)
{
	uint32_t DATA = 0;
	uint32_t DATA_TEMP = 0;
//	uint32_t Time_Out = 0;

	AD2S83_INHIBIT_n_Clr();
//	AD2S83_ENABLE_n_Clr();

	//等待BUSY信号拉低，获取数据，进行MSB和LSB的反转
//	while(AD2S83_BUSY&&(Time_Out<5000)){
//		Time_Out++;
//	}
	HAL_Delay(1);

	DATA_TEMP = GPIOB->IDR;
	DATA = (shift_fun2(DATA_TEMP)<<8) + shift_fun2(DATA_TEMP>>8);
//	DATA = 0xFFFF & ( (DATA_TEMP<<8) | (DATA_TEMP>>8) );

//	HAL_Delay(50);
	AD2S83_INHIBIT_n_Set();
//	AD2S83_ENABLE_n_Set();

	return DATA;
}

uint8_t AD2S83_Get_DIR_State(void)
{
	return AD2S83_DIR;
}

uint8_t AD2S83_Get_BUSY_State(void)
{
	return AD2S83_BUSY;
}


float AD2S83_Decode_Data(void)
{
	float deg = 0;
	uint16_t DATA = 0;

	DATA = AD2S83_Get_Data();
	deg = DATA*0.0054932; //16bit data translate
//	deg = DATA*0.3515625; //10bit data translate

	return deg;
}

float AD2S83_Decode_Data_Average(uint16_t num)
{
	float deg = 0;
	uint16_t DATA = 0;
	uint16_t count = 0;

	for ( count = 0 ; count < num ; count++ )
	{
		DATA = AD2S83_Get_Data();
		deg = deg + DATA*0.0054932;
	}

	deg = deg / num;
	return deg;
}


///*
//        Q:过程噪声，Q增大，动态响应变快，收敛稳定性变坏
//        R:测量噪声，R增大，动态响应变慢，收敛稳定性变好
//*/
//
//double KalmanFilter(const double ResrcData,double ProcessNiose_Q,double MeasureNoise_R)
//{
//	double R = MeasureNoise_R;
//	double Q = ProcessNiose_Q;
//
//	static	double x_last;
//
//	double x_mid = x_last;
//	double x_now;
//
//	static	double p_last;
//
//	double p_mid ;
//	double p_now;
//	double kg;
//
//	x_mid=x_last; //x_last=x(k-1|k-1),x_mid=x(k|k-1)
//	p_mid=p_last+Q; //p_mid=p(k|k-1),p_last=p(k-1|k-1),Q=噪声
//	kg=p_mid/(p_mid+R); //kg为kalman filter，R为噪声
//	x_now=x_mid+kg*(ResrcData-x_mid);//估计出的最优值
//
//	p_now=(1-kg)*p_mid;//最优值对应的covariance
//
//	p_last = p_now; //更新covariance值
//	x_last = x_now; //更新系统状态值
//
//	return x_now;
//}









