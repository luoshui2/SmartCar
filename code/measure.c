#include <REGX52.H>
#include "Delay10us.h"
#include "IR.h"
#include "Timer2.h"
#include "oled.h"
sbit Trig=P2^1;
sbit Echo=P2^0;
sbit liftavoid=P3^4;
sbit rightavoid=P3^5;
unsigned char measure()
{
	unsigned char num=1;
	static unsigned char command;
	unsigned int time;
	unsigned int S;
	Timer2_Init();
	if(IR_GetDataFlag())
	{
		command=IR_GetCommand();
		if(command==EQ)
		{
			num=0;
			//退出状态重置
		}
	}
	else
	{
			Trig=1;
			Delay10us(2);
			Trig=0;
			while(!Echo) ;
			TR2=1;//定时器2启动
			while(Echo) ;
			TR2=0;
			time=TH2*256+TL2;
			TH2=0;
			TL2=0;
			S=(time*1.7)/100;//单位为cm	
			OLED_ShowNum(54,6,S,2,16);
	}
	return num;	
}