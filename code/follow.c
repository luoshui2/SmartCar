#include <REGX52.H>
#include "Delay10us.h"
#include "IR.h"
#include "move.h"
#include "LED.h"
#include "Timer2.h"
sbit Trig=P2^1;
sbit Echo=P2^0;
sbit IN1=P1^2;
sbit IN2=P1^3;
sbit IN3=P1^4;
sbit IN4=P1^5;
sbit liftavoid=P3^4;
sbit rightavoid=P3^5;
unsigned char follow()
{
	unsigned char num=1;
	static unsigned char key=1;
	static unsigned char command;
	unsigned int time;
	unsigned int S;
	Timer2_Init();
	if(IR_GetDataFlag())
	{
		command=IR_GetCommand();
		if(command==stop)
		{
			if(key==1)
			{
				key=0;
				move(5,0);
			}
			else key=1;
		}
		if(command==EQ)
		{
			num=0;
			key=1;//退出状态重置
		}
	}
	else
	{
		if(key==1)
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
			if(S>23&&S<400)
			{
				//LED(1);
				IN1=1;//前进用不了move函数
				IN2=0;
				IN3=1;
				IN4=0;
			}
			else
			{
				if(S>0&&S<13)
				{
					//LED(2);
					IN1=0;//后退
					IN2=1;
					IN3=0;
					IN4=1;
				}
				if(S>13&&S<23)
				{
					//LED(3);
					move(5,0);//停止
				}
			}
			if(liftavoid==0&&rightavoid==1)//左有杂物要右转
			{
				IN1=1;//右转
				IN2=0;
				IN3=0;
				IN4=1;
			}
			if(liftavoid==1&&rightavoid==0) //右有杂物要左转
			{
				IN1=0;//左转
				IN2=1;
				IN3=1;
				IN4=0;
			}
			
		}
		else
		{
			move(5,0);
		}
	}
	return num;	
}
