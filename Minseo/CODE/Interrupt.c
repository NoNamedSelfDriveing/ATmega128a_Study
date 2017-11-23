/*
 * Interrupt.c
 *
 * Created: 2017-11-22 오후 6:51:12
 * Author : MAXLEE
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/common.h>

ISR(INT0_vect)
{	
	PORTD = 0x80;
	_delay_ms(1000);
}

int main(void)
{
    DDRD = 0x80;
	
	EIMSK |= 0x01;
	EICRA |= 0x02;
	SREG  |= 0x80;
	  
    while (1)
	{
		PORTD = 0x00;
	}
}

