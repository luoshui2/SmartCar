#include "oled.h"
void screen(unsigned char keynum)
{
	switch(keynum)
	{
		case 0:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//��
			OLED_ShowCHinese(18,0,1);//��
			OLED_ShowChar(36,0,':',16);//��
			OLED_ShowCHinese(54,0,2);//��
			OLED_ShowCHinese(72,0,3);//��
			OLED_ShowCHinese(90,0,4);//ʧ
			OLED_ShowCHinese(108,0,5);//��
			
			OLED_ShowCHinese(0,3,6);//ģ
			OLED_ShowCHinese(18,3,7);//ʽ
			OLED_ShowChar(36,3,':',16);//��
			OLED_ShowCHinese(54,3,19);//δ
			OLED_ShowCHinese(72,3,20);//ѡ
			OLED_ShowCHinese(90,3,21);//��
			break;
		}
		case 1:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//��
			OLED_ShowCHinese(18,0,1);//��
			OLED_ShowChar(36,0,':',16);//��
			OLED_ShowCHinese(54,0,2);//��
			OLED_ShowCHinese(72,0,3);//��
			OLED_ShowCHinese(90,0,4);//ʧ
			OLED_ShowCHinese(108,0,5);//��
			
			OLED_ShowCHinese(0,3,6);//ģ
			OLED_ShowCHinese(18,3,7);//ʽ
			OLED_ShowChar(36,3,':',16);//��
			OLED_ShowCHinese(54,3,11);//��
			OLED_ShowCHinese(72,3,12);//��
			break;
		}
			
		case 2:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//��
			OLED_ShowCHinese(18,0,1);//��
			OLED_ShowChar(36,0,':',16);//��
			OLED_ShowCHinese(54,0,2);//��
			OLED_ShowCHinese(72,0,3);//��
			OLED_ShowCHinese(90,0,4);//ʧ
			OLED_ShowCHinese(108,0,5);//��
			
			OLED_ShowCHinese(0,3,6);//ģ
			OLED_ShowCHinese(18,3,7);//ʽ
			OLED_ShowChar(36,3,':',16);//��
			OLED_ShowCHinese(54,3,15);//��
			OLED_ShowCHinese(72,3,16);//��
			OLED_ShowCHinese(90,3,13);//��
			OLED_ShowCHinese(108,3,14);//��
			break;
		}
		case 3:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//��
			OLED_ShowCHinese(18,0,1);//��
			OLED_ShowChar(36,0,':',16);//��
			OLED_ShowCHinese(54,0,2);//��
			OLED_ShowCHinese(72,0,3);//��
			OLED_ShowCHinese(90,0,4);//ʧ
			OLED_ShowCHinese(108,0,5);//��
			
			OLED_ShowCHinese(0,3,6);//ģ
			OLED_ShowCHinese(18,3,7);//ʽ
			OLED_ShowChar(36,3,':',16);//��
			OLED_ShowCHinese(54,3,15);//��
			OLED_ShowCHinese(72,3,16);//��
			OLED_ShowCHinese(90,3,17);//Ѳ
			OLED_ShowCHinese(108,3,18);//��
			break;
		}
			
		case 4:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//��
			OLED_ShowCHinese(18,0,1);//��
			OLED_ShowChar(36,0,':',16);//��
			OLED_ShowCHinese(54,0,2);//��
			OLED_ShowCHinese(72,0,3);//��
			OLED_ShowCHinese(90,0,4);//ʧ
			OLED_ShowCHinese(108,0,5);//��
			
			OLED_ShowCHinese(0,3,6);//ģ
			OLED_ShowCHinese(18,3,7);//ʽ
			OLED_ShowChar(36,3,':',16);//��
			OLED_ShowCHinese(54,3,22);//��
			OLED_ShowCHinese(72,3,23);//��
			
			
			break;
		}
		
		case 5:
		{
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//��
			OLED_ShowCHinese(18,0,1);//��
			OLED_ShowChar(36,0,':',16);//��
			OLED_ShowCHinese(54,0,2);//��
			OLED_ShowCHinese(72,0,3);//��
			OLED_ShowCHinese(90,0,4);//ʧ
			OLED_ShowCHinese(108,0,5);//��
			
			OLED_ShowCHinese(0,3,6);//ģ
			OLED_ShowCHinese(18,3,7);//ʽ
			OLED_ShowChar(36,3,':',16);//��
			OLED_ShowCHinese(54,3,8);//��
			OLED_ShowCHinese(72,3,9);//��
			
			OLED_ShowCHinese(0,6,9);//��
			OLED_ShowCHinese(18,6,10);//��
			OLED_ShowChar(36,6,':',16);//��
	//OLED_ShowNum(54,6,666,3,16);//����
			
			break;
		}
		default:
			break;
	}
}