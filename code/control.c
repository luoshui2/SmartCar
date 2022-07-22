#include "IR.h"
#include "move.h"
unsigned char control()
{
	unsigned char num=1;
	unsigned char command;
	static unsigned char key=5;
	if(IR_GetDataFlag())
	{
		command=IR_GetCommand();
		switch(command)
		{
			case up:
			{
				key=1;
				break;
			}
			case back:
			{
				key=2;
				break;
			}
			case left:
			{
				key=3;
				break;
			}
			case right:
			{
				key=4;
				break;
			}
			case stop:
			{
				key=5;
				break;
			}
			case EQ:
			{
				num=0;
				//move(5,0);
				key=5;//退出模式清0;
				break;
			}
			default:
				break;
		}
	}
	if(key==1)  {move(1,70);}
	if(key==2)  {move(2,70);}
	if(key==3)  {move(3,50);}
	if(key==4)  {move(4,50);}
	if(key==5)  {move(5,0);}
	return num;
}