#include "Headers.h"


void main()
{
	OLED_Init(); //OLED��ʼ��
	while(1)
	{
//		OLED_Fill(0xff); //��ȫ��
//		delay(2000);
//		OLED_Fill(0x00); //��ȫ��
//		delay(200);
		OLED_P6x8Str(0,7,"cn.heltec@gmail.com");
		OLED_P6x8Str(0,8,"heltec.taobao.com");
		delay(4000);
		OLED_CLS();      //����
		delay(4000);
	}


}