#ifndef _IR_H_
#define _IR_H_
#define up 0x46
#define back 0x15
#define left 0x44
#define right 0x43
#define stop 0x40
#define type1 0x0c
#define type2 0x18
#define type3 0x5e
#define type4 0x08
#define type5 0x1c
#define EQ 0x09
void IR_Init();
unsigned char IR_GetDataFlag();
unsigned char IR_GetRepeatFlag();
unsigned char IR_GetAddress();
unsigned char IR_GetCommand();

#endif