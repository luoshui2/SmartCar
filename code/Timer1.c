#include <REGX52.H>

void Timer1_Init(void)
{
	TMOD &= 0x0F;		
	TMOD |= 0x10;		
	TL1 = 0;		
	TH1 = 0;		
	TF1 = 0;		
	TR1 = 0;		
}
void Timer1_SetCounter(unsigned int Value)
{
	TH1=Value/256;
	TL1=Value%256;
}

unsigned int Timer1_GetCounter(void)
{
	return (TH1<<8)|TL1;//16进制,用int接收就化为int数字
}

void Timer1_Run(unsigned char Flag)
{
	TR1=Flag;
}