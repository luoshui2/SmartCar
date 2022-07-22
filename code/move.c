#include <REGX52.H>
#include <INTRINS.H>
#include "Delay.h"
#include "Delay10us.h"
sbit IN1=P1^2;
sbit IN2=P1^3;
sbit IN3=P1^4;
sbit IN4=P1^5;
void move(unsigned char keynum,unsigned char dutycycle)
{
	switch(keynum)
	{
		case 1:
		{
			IN1=1;//前进
			IN2=0;
			IN3=1;
			IN4=0;
			Delay10us(dutycycle);
			break;
		}
			
		case 2:
		{
			IN1=0;//后退
			IN2=1;
			IN3=0;
			IN4=1;
			Delay10us(dutycycle);
			break;
		}
		case 3:
		{
			IN1=0;//左转
			IN2=1;
			IN3=1;
			IN4=0;
			Delay10us(dutycycle);
			break;
		}
			
		case 4:
		{
			IN1=1;//右转
			IN2=0;
			IN3=0;
			IN4=1;
			Delay10us(dutycycle);
			break;
		}
		case 5:
		{
			IN1=0;//停止
			IN2=0;
			IN3=0;
			IN4=0;
			break;
		}	
		default:
			break;
	}
	IN1=0;//停止
	IN2=0;
	IN3=0;
	IN4=0;
	Delay10us(100-dutycycle);
}