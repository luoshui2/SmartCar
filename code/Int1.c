#include <REGX52.H>
void Int1_Init()
{
	IT1=1;
	IE1=0;
	EX1=1;
	EA=1;
	PX1=1;
}
/*void Int1_Routine(void) interrupt 2
{
	P0=0x00;
}*/