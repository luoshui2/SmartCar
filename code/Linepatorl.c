#include <REGX52.H>
#include "move.h"
#include "IR.h"
sbit liftir=P3^7;
sbit rightir=P3^6;
unsigned char Linepatorl()
{
	//static unsigned int count=0;
	static unsigned char command;
	unsigned char num=1;
	static unsigned char key=0;
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
			key=0;//退出状态重置
		}
	}
	if(key==1)
	{
		if(liftir==1&&rightir==1)//1（黑线）代表红外线没反射回来，0（白线）代表反射回来了
		{
				move(1,60);
		}
		else
		{
			if(liftir==1)//右偏10
			{
				move(3,50);
			}
			if(rightir==1)//左偏01
			{
				move(4,50);
			}
		}
		if(liftir==0&&rightir==0)
		{
			move(1,60);
		}
	}
	else
	{
		move(5,0);
	}
	return num;
}
