#include "oled.h"
void screen(unsigned char keynum)
{
	switch(keynum)
	{
		case 0:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//队
			OLED_ShowCHinese(18,0,1);//伍
			OLED_ShowChar(36,0,':',16);//：
			OLED_ShowCHinese(54,0,2);//不
			OLED_ShowCHinese(72,0,3);//曾
			OLED_ShowCHinese(90,0,4);//失
			OLED_ShowCHinese(108,0,5);//语
			
			OLED_ShowCHinese(0,3,6);//模
			OLED_ShowCHinese(18,3,7);//式
			OLED_ShowChar(36,3,':',16);//：
			OLED_ShowCHinese(54,3,19);//未
			OLED_ShowCHinese(72,3,20);//选
			OLED_ShowCHinese(90,3,21);//择
			break;
		}
		case 1:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//队
			OLED_ShowCHinese(18,0,1);//伍
			OLED_ShowChar(36,0,':',16);//：
			OLED_ShowCHinese(54,0,2);//不
			OLED_ShowCHinese(72,0,3);//曾
			OLED_ShowCHinese(90,0,4);//失
			OLED_ShowCHinese(108,0,5);//语
			
			OLED_ShowCHinese(0,3,6);//模
			OLED_ShowCHinese(18,3,7);//式
			OLED_ShowChar(36,3,':',16);//：
			OLED_ShowCHinese(54,3,11);//手
			OLED_ShowCHinese(72,3,12);//动
			break;
		}
			
		case 2:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//队
			OLED_ShowCHinese(18,0,1);//伍
			OLED_ShowChar(36,0,':',16);//：
			OLED_ShowCHinese(54,0,2);//不
			OLED_ShowCHinese(72,0,3);//曾
			OLED_ShowCHinese(90,0,4);//失
			OLED_ShowCHinese(108,0,5);//语
			
			OLED_ShowCHinese(0,3,6);//模
			OLED_ShowCHinese(18,3,7);//式
			OLED_ShowChar(36,3,':',16);//：
			OLED_ShowCHinese(54,3,15);//红
			OLED_ShowCHinese(72,3,16);//外
			OLED_ShowCHinese(90,3,13);//避
			OLED_ShowCHinese(108,3,14);//障
			break;
		}
		case 3:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//队
			OLED_ShowCHinese(18,0,1);//伍
			OLED_ShowChar(36,0,':',16);//：
			OLED_ShowCHinese(54,0,2);//不
			OLED_ShowCHinese(72,0,3);//曾
			OLED_ShowCHinese(90,0,4);//失
			OLED_ShowCHinese(108,0,5);//语
			
			OLED_ShowCHinese(0,3,6);//模
			OLED_ShowCHinese(18,3,7);//式
			OLED_ShowChar(36,3,':',16);//：
			OLED_ShowCHinese(54,3,15);//红
			OLED_ShowCHinese(72,3,16);//外
			OLED_ShowCHinese(90,3,17);//巡
			OLED_ShowCHinese(108,3,18);//线
			break;
		}
			
		case 4:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//队
			OLED_ShowCHinese(18,0,1);//伍
			OLED_ShowChar(36,0,':',16);//：
			OLED_ShowCHinese(54,0,2);//不
			OLED_ShowCHinese(72,0,3);//曾
			OLED_ShowCHinese(90,0,4);//失
			OLED_ShowCHinese(108,0,5);//语
			
			OLED_ShowCHinese(0,3,6);//模
			OLED_ShowCHinese(18,3,7);//式
			OLED_ShowChar(36,3,':',16);//：
			OLED_ShowCHinese(54,3,22);//测
			OLED_ShowCHinese(72,3,23);//距
			
			
			break;
		}
		
		case 5:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//队
			OLED_ShowCHinese(18,0,1);//伍
			OLED_ShowChar(36,0,':',16);//：
			OLED_ShowCHinese(54,0,2);//不
			OLED_ShowCHinese(72,0,3);//曾
			OLED_ShowCHinese(90,0,4);//失
			OLED_ShowCHinese(108,0,5);//语
			
			OLED_ShowCHinese(0,3,6);//模
			OLED_ShowCHinese(18,3,7);//式
			OLED_ShowChar(36,3,':',16);//：
			OLED_ShowCHinese(54,3,8);//测
			OLED_ShowCHinese(72,3,9);//距
			
			OLED_ShowCHinese(0,6,9);//距
			OLED_ShowCHinese(18,6,10);//离
			OLED_ShowChar(36,6,':',16);//：
	//OLED_ShowNum(54,6,666,3,16);//数字
			
			break;
		}
		default:
			break;
	}
}