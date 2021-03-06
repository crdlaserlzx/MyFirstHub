#ifndef __scan_H
#define __scan_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK战舰STM32开发板
//SPI驱动 代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2012/9/9
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////

#define scan_cs PCout(9)// 
#define scan_sclk PCout(8)//
#define scan_sdix PCout(10)// 
#define scan_sdiy PCout(11)// 

void Scan_Init(void);
void Scan_GPIO_Init(void);
void Scan_Open(void);
void Scan_Close(void);
void Scan_AD_Write(u16 valx,u16 valy);
		 
#endif

