#include <REGX52.H>
#include "Int1.h"
#include "Timer1.h"
unsigned int IR_Time;
unsigned char IR_State;

unsigned char IR_Data[4];
unsigned char IR_pData;

unsigned char IR_DataFlag;
unsigned char IR_RepeatFlag;
unsigned char IR_Address;
unsigned char IR_Command;

void IR_Init()
{
	Timer1_Init();
	Int1_Init();
}

unsigned char IR_GetDataFlag()
{
	if(IR_DataFlag)
	{
		IR_DataFlag=0;
		return 1;
	}
	return 0;
}


unsigned char IR_GetRepeatFlag()
{
	if(IR_RepeatFlag)
	{
		IR_RepeatFlag=0;
		return 1;
	}
	return 0;
}


unsigned char IR_GetAddress()
{
	return IR_Address;
}


unsigned char IR_GetCommand()
{
	return IR_Command;
}


void Int1_Routine(void) interrupt 2
{
	switch (IR_State)
	{
		case 0:
		{
			Timer1_SetCounter(0);	
			Timer1_Run(1);			
			IR_State=1;
			//P0=0x00;
			break;
		}
		case 1:
		{
			IR_Time=Timer1_GetCounter();	
			Timer1_SetCounter(0);	
			if(IR_Time>12442-500 && IR_Time<12442+500)//12M--13500--11--12442
			{
				IR_State=2;	
				//P0=0x00;				
			}
			else 
			{
				if(IR_Time>10368-500 && IR_Time<10368+500)//12M--11250--11--10368
				{
					IR_RepeatFlag=1;	
					Timer1_Run(0);		
					IR_State=0;			
				}
				else					
				{
					IR_State=1;			
				}
			}
			break;
		}
		case 2:
		{
			IR_Time=Timer1_GetCounter();	//获取上一次中断到此次中断的时间
			Timer1_SetCounter(0);	//定时计数器清0
			if(IR_Time>1032-500 && IR_Time<1032+500)
			{
				IR_Data[IR_pData/8]&=~(0x01<<(IR_pData%8));	//数据对应位清0
				IR_pData++;			//数据位置指针自增
				//P0=0x00;
			}
			else 
			{
				if(IR_Time>2074-500 && IR_Time<2074+500)
				{
					IR_Data[IR_pData/8]|=(0x01<<(IR_pData%8));	//数据对应位置1
					IR_pData++;			//数据位置指针自增
					//P0=0x00;
				}
				else					//接收出错
				{
					IR_pData=0;			//数据位置指针清0
					IR_State=1;			//置状态为1
				}
			}
			if(IR_pData>=32)		//如果接收到了32位数据
			{
				IR_pData=0;			//数据位置指针清0
				if((IR_Data[0]==~IR_Data[1]) && (IR_Data[2]==~IR_Data[3]))	//数据验证
				{
					IR_Address=IR_Data[0];	//转存数据
					IR_Command=IR_Data[2];
					IR_DataFlag=1;	//置收到连发帧标志位为1
					//P0=0x00;
				}
				Timer1_Run(0);		//定时器停止
				IR_State=0;			//置状态为0
			}
			break;
		}
		
		default:
			break;
	}
}