#ifndef __OLED_H
#define __OLED_H

#include "stm32f4xx.h"
 
void OELD_Init(void);                             //��ʼ������
void OLED_Clear(void);                            //ȫ������
void OLED_DrawPoint(u8 x,u8 y,u8  mode);           //���㺯��
void OLED_F7x8Str(u8 x,u8 y,u8 ch[],u8 mode);      //���7x8�ַ��� ������ʾ���߷���
void OLED_P8x16Str(u8 x,u8 y,u8 ch[],u8 mode);     //���8x16�ַ��� ������ʾ���߷���
void OLED_P14x16CheStr(u8 x,u8 y,u8 ch[],u8 mode); //���14x16���ִ�  ������ʾ���߷���
#endif /* __OLED_H */

