#include <REGX52.H>
void Timer2_Init()//定时器二
{
	T2MOD = 0;	//初始化模式寄存器
	T2CON = 0;	//初始化控制寄存器
	TL2 = 0;	//设置定时初值
	TH2 = 0;	//设置定时初值
	ET2=1;
	EA=1;
	PT2=0;
  TR2=0;
}
