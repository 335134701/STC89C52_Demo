#ifndef __OLED_Method_H__
#define __OLED_Method_H__

// ------------------------------------------------------------
// IO口模拟I2C通信
// SCL接P1^3
// SDA接P1^2
// ------------------------------------------------------------
sbit SCL=P1^3; //串行时钟
sbit SDA=P1^2; //串行数据

#define Hight_Voltage 1
#define Low_Voltage 0
#define	Brightness	0xCF 
#define X_WIDTH 	128
#define Y_WIDTH 	64


extern void delay(unsigned int z);
extern void OLED_Fill(unsigned char bmp_dat);
extern void OLED_CLS(void);
extern void OLED_Init(void);
extern void OLED_P6x8Str(unsigned char x, y,unsigned char ch[]);
extern void OLED_P8x16Str(unsigned char x, y,unsigned char ch[]);
extern void OLED_P16x16Ch(unsigned char x, y, N);
extern void Draw_BMP(unsigned char x0, y0,x_size, y_size,unsigned char BMP[]);
#endif