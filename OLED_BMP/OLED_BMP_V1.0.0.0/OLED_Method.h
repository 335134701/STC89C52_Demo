#ifndef __OLED_Method_H__
#define __OLED_Method_H__

// ------------------------------------------------------------
// IO��ģ��I2Cͨ��
// SCL��P1^3
// SDA��P1^2
// ------------------------------------------------------------
sbit SCL=P1^3; //����ʱ��
sbit SDA=P1^2; //��������

#define Hight_Voltage 1
#define Low_Voltage 0
#define	Brightness	0xCF 
#define X_WIDTH 	128
#define Y_WIDTH 	64



extern void delay(unsigned int z);
extern void OLED_Fill(unsigned char bmp_dat);
extern void OLED_CLS(void);
extern void OLED_Init(void);
extern void Draw_BMP(unsigned char x0, y0,x_size, y_size,unsigned char BMP[]);
#endif