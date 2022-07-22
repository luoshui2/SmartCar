#include <REGX52.H>
#include "move.h"
#include "IR.h"
#include "Delay.h"
sbit liftavoid=P3^4;
sbit rightavoid=P3^5;
unsigned char avoid()
{
	//unsigned char flag1=0,flag2=0;
	unsigned char num=1;
	static unsigned char key=1;
	static unsigned char command;
	if(IR_GetDataFlag())
	{
		command=IR_GetCommand();
		if(command==stop)
		{
			
			if(key==1)
			{
				
				move(5,0);
				key=0;
			}
			else 
			{
				key=1;
			}
		}
		if(command==EQ)
		{
			num=0;
			key=1;//退出状态重置
		}
	}
	if(key==1)
	{
		if(liftavoid==0&&rightavoid==0)//两边有杂物
		{
			move(5,0);
		}
		else
		{
			if(liftavoid==0)//左有杂物要右转
			{
				move(4,50);
			}
			if(rightavoid==0) //右有杂物要左转
			{
				move(3,50);
			}
			if(liftavoid==1&&rightavoid==1)//两边无杂物
			{
				move(1,70);
			}
		}
	}
	else
	{
		move(5,0);
	}
	return num;
}
