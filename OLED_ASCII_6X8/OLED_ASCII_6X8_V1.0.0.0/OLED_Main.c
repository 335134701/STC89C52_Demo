#include "Headers.h"


void main()
{
	OLED_Init(); //OLED初始化
	while(1)
	{
//		OLED_Fill(0xff); //屏全亮
//		delay(2000);
//		OLED_Fill(0x00); //屏全灭
//		delay(200);
		OLED_P6x8Str(0,7,"cn.heltec@gmail.com");
		OLED_P6x8Str(0,8,"heltec.taobao.com");
		delay(4000);
		OLED_CLS();      //清屏
		delay(4000);
	}


}