/*
 * Button.c
 *
 * Created: 2017-11-08 ���� 7:05:28
 * Author: dsm2017
 */

#include <io.h>

void main(void)
{

    DDRA = 0xFF;
    DDRB = 0x00;
    
while (1)
    {
        
        if(PINB & 0x01) PORTA = 0x01;
        else PORTA = 0x00; 
        if(PINB & 0x02) PORTA = 0x02;
        else PORTA = 0x00;
    }
}
