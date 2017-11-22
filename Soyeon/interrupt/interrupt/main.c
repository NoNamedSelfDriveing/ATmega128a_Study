/*
 * interrupt.c
 *
 * Created: 2017-11-22 오후 7:07:24
 * Author : dsm2017
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/common.h>
#define F_CPU 16000000

ISR(INT0_vect){
	PORTA= ~PORTA;
}

int main(void)
{
	EIMSK |= 0x01;
	EICRA |= 0x02; //falling edge
	SREG |= 0x80;
	DDRA = 0xff;
	PORTA = 0x00;
	
    while (1) 
    {
    }
}

