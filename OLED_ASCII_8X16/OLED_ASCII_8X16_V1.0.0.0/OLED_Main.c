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
		OLED_P8x16Str(24,3,"123456");//第一行 -- 8x16的显示单元显示ASCII码
		delay(4000);
		OLED_CLS();      //清屏
	}

}