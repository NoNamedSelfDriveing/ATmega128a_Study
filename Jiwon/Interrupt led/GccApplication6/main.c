/*
 * GccApplication6.c
 *
 * Created: 2017-11-22 오후 8:00:56
 * Author : dsm2017
 */ 
#define F_CPU 16000000L
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/common.h>
#include <util/delay.h>

ISR(INT0_vect){
	PORTD=0x80;
	_delay_ms(1000);
	PORTD=0x00;
}

int main(void)
{  
	EIMSK |= 0x01;
	EICRA |= 0x02;	
	SREG |= 0x80;
	DDRD=0x80;
    while (1);
}

