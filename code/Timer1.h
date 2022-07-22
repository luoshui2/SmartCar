#ifndef _TIMER1_H_
#define _TIMER1_H_
void Timer1_Init(void);
void Timer1_SetCounter(unsigned int Value);
unsigned int Timer1_GetCounter(void);
void Timer1_Run(unsigned char Flag);

#endif