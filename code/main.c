#include <REGX52.H>
#include <INTRINS.H>
#include "move.h"
#include "avoid.h"
#include "Delay.h"
#include "LED.h"
#include "Linepatorl.h"
#include "IR.h"
#include "control.h"
#include "Int0.h"
#include "Buzzer.h"
unsigned int start;
unsigned char mode;
unsigned char command;
sbit stopkey=P3^2;
unsigned char key_main;
unsigned char num=1;//返回值
void main()
{
	Int0_Init();
	IR_Init();
	while(1)
	{		
		if(key_main==0)
		{
			switch(start)
			{
				case 0:
				{
					
					move(5,0);
					break;
				}
				case 1:
				{
					LED(0);//退出某种模式时清为0模式
					if(IR_GetDataFlag() || IR_GetRepeatFlag())
					{
						command=IR_GetCommand();
						switch(command)
						{
							case type1:
							{
								LED(1);
								Buzzer(3);
								key_main=1;
								break;
							}
							case type2:
							{
								LED(2);
								Buzzer(3);
								key_main=2;
								break;
							}
							case type3:
							{
								LED(3);
								Buzzer(3);
								key_main=3;
								break;
							}
							case type4:
							{
								LED(4);
								Buzzer(3);
								key_main=4;
								break;
							}
							default:
								break;
						}		
					}
					break;
				}
				default:
					break;
				}
		}
		else
		{
			if(key_main==1)
			{
				if(num==0)//必须先判断返回值是否为退出
				{
					key_main=0;
					move(5,0);
				}
				num=control();
			}
			if(key_main==2)
			{
				if(num==0)//必须先判断返回值是否为退出
				{
					key_main=0;
					move(5,0);
				}
				num=avoid();		
			}
			if(key_main==3)
			{
				if(num==0)//必须先判断返回值是否为退出
				{
					key_main=0;
					move(5,0);
				}
				num=Linepatorl();
			}
			if(key_main==4)
			{	
				num=follow();
				if(num==0)//必须后判断返回值是否为退出
				{
					key_main=0;
					move(5,0);
				}
			}
		}
		
	}
}
void Int0_Routine() interrupt 0
{
	if(stopkey==0)
	{
		Delay(20);
		while(!stopkey) ;
		Delay(20);
		if(start==0)
		{
			LED(0);
			Buzzer(3);
			start=1;
			key_main=0;
		}
		else
		{
			P0=0xFF;
			start=0;
			key_main=0;//停下来
		}
	}
}