/*
 * Study_1.c
 *
 * Created: 2017-10-26 오후 6:58:09
 * Author : maxlee
 */ 

#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRA = 0xff;	
	
    while (1) 
    {	
		PORTA = 0x01;
		_delay_ms(500);
		
		for(int i=1; i<8; i++) {
			PORTA = PORTA << 1;
			_delay_ms(500);
		}
		
		for(int i=1; i<7; i++) {
			PORTA = PORTA >> 1;
			_delay_ms(500);
		}
		
	}
	
}

