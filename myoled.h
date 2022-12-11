#ifndef __MYOLED_H
#define __MYOLED_H
#include "system.h"



#define SCLSET1 GPIOB -> BSRR |= 0x01<<8
#define SCLSET0 GPIOB -> BRR |= 0x01<<8
#define SDASET1 GPIOB -> BSRR |= 0x01<<9
#define SDASET0 GPIOB -> BRR |= 0x01<<9

void OledShowChar(uint8_t line, uint8_t col, char dischar);
void OledShowNumb(uint8_t line, uint8_t col, unsigned int numb);
void OledInit(void);

#endif
