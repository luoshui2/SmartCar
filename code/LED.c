#include <REGX52.H>
void LED(unsigned int number)
{
	switch(number)
	{
		case 0://启动
		{
			P0=0xFF;
			
			P0_2=0;
			P0_3=0;
			P0_4=0;
			P0_5=0;
			P0_6=0;
			P0_7=0;
			
			break;
		}	
		case 1://模式1
		{
			P0=0xFF;
			
			P0_5=0;
			P0_6=0;
			
			break;
		}	
		case 2://模式2
		{
			P0=0xFF;
			
			P0_1=0;
			P0_3=0;
			P0_4=0;
			P0_6=0;
			P0_7=0;
			

			break;
		}	
		case 3://模式3
		{
			P0=0xFF;
			
			P0_1=0;
			P0_4=0;
			P0_5=0;
			P0_6=0;
			P0_7=0;
			break;
		}	
		case 4://模式3
		{
			P0=0xFF;
			
			P0_1=0;
			P0_2=0;
			P0_5=0;
			P0_6=0;
			break;
		}	
		case 5://模式4
		{
			P0=0xFF;
			
			P0_1=0;
			P0_2=0;
			P0_4=0;
			P0_5=0;
			P0_7=0;
			break;
		}	
		default:
			break;
	}
}
