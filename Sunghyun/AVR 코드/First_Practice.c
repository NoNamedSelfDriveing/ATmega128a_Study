/*
 * First_Practice.c
 *
 * Created: 2017-10-26 ���� 7:28:44
 * Author: dsm2017
 */

#include <io.h>
#include <delay.h>

void main(void)
{
    DDRA = 0xff;
    PORTA = 0x0f;
    
    while (1)
    {             
        PORTA = ~PORTA;    
        delay_ms(500);
    }
}                         
