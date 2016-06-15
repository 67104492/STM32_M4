#ifndef __OLED_H
#define __OLED_H

#include "stm32f4xx.h"
 
void OELD_Init(void);                             //初始化函数
void OLED_Clear(void);                            //全屏清屏
void OLED_DrawPoint(u8 x,u8 y,u8  mode);           //画点函数
void OLED_F7x8Str(u8 x,u8 y,u8 ch[],u8 mode);      //输出7x8字符串 正常显示或者反显
void OLED_P8x16Str(u8 x,u8 y,u8 ch[],u8 mode);     //输出8x16字符串 正常显示或者反显
void OLED_P14x16CheStr(u8 x,u8 y,u8 ch[],u8 mode); //输出14x16汉字串  正常显示或者反显
#endif /* __OLED_H */

