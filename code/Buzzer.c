#include <REGX52.H>
#include "Delay.h"
void Buzzer(unsigned char time)//蜂鸣器
{
	P2_3=0;
	while(time)
	{
		Delay(1000);
		time--;
	}
	P2_3=1;
}
