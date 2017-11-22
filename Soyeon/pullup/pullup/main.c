/*
 * pullup.c
 *
 * Created: 2017-11-21 오후 6:52:22
 * Author : dsm2017
 */ 

#include <avr/io.h>


int main(void)
{
	DDRB=0xfe;
    DDRA=0x01;
	/* Replace with your application code */
    while (1) 
    {
		if(PINB & 0x01)
			PORTA=0x00;
		else
			PORTA=0x01;
    }
}

