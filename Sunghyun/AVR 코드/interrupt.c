/*
 * interrupt.c
 *
 * Created: 2017-11-22 ¿ÀÈÄ 8:01:45
 * Author: dsm2017
 */

#include <io.h>
#include <interrupt.h>

#define F_CPU 16000000UL

interrupt[EXT_INT0] void LED(void)
{
    PORTA = ~PORTA;
}

void main(void)
{
    DDRA = 0xff;
    EIMSK |= 0x01;
    EICRA |= 0x02;
    SREG |= 0x80;
    PORTA = 0x00;         
    
while (1)
    {
    // Please write your application code here

    }
}
