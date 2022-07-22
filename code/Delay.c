#include <REGX52.H>
#include <INTRINS.H>
void Delay(unsigned int xms)//0.1ms
{
	unsigned char i, j;

	while(xms)
	{
		_nop_();
		i = 43;
		while (--i);
		xms--;
	}
	
}


