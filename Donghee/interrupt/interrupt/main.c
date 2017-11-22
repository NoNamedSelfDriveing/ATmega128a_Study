/*
 * interrupt.c
 *
 * Created: 2017-11-22 오후 7:07:04
 * Author : dsm2017
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/common.h>

ISR(INT0_vect)
{
	PORTA = ~PORTA;
}
int main(void)
{
	DDRA = 0x01;
	PORTA = 0x00;
    EIMSK |= 0x01;
	EICRA |= 0X03;
	SREG |= 0X80;
	
    while (1) 
    {
    }
}