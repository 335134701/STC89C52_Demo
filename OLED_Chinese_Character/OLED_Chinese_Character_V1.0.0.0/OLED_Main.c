#include "Headers.h"


void main()
{
	//unsigned char i;
	OLED_Init(); //OLED��ʼ��
	while(1)
	{
//		OLED_Fill(0xff); //��ȫ��
//		delay(2000);
//		OLED_Fill(0x00); //��ȫ��
//		delay(200);
		OLED_P16x16Ch(24,0,1);//(x, y, N)��ʾ16*16����  ��ʾ�����꣨x,y����NΪҳ��Χ0��7
		OLED_P16x16Ch(40,0,2);//(x, y, N)��ʾ16*16����  ��ʾ�����꣨x,y����NΪҳ��Χ0��7
		OLED_P16x16Ch(56,0,3);//(x, y, N)��ʾ16*16����  ��ʾ�����꣨x,y����NΪҳ��Χ0��7
		OLED_P16x16Ch(72,0,4);//(x, y, N)��ʾ16*16����  ��ʾ�����꣨x,y����NΪҳ��Χ0��7
		OLED_P16x16Ch(88,0,5);//(x, y, N)��ʾ16*16����  ��ʾ�����꣨x,y����NΪҳ��Χ0��7
		/*for(i=0; i<8; i++)//ͨ��������ʾ���� -- i��ʾ�ֱ������λ��
		{
//			OLED_P16x16Ch(i*16,0,i);
		 	OLED_P16x16Ch(i*16,2,i+8);
		 	OLED_P16x16Ch(i*16,4,i+16);
		 	OLED_P16x16Ch(i*16,6,i+24);
		}*/
		delay(4000);
		OLED_CLS();//����
	}
}