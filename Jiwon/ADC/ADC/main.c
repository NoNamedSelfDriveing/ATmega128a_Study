/*
 * ADC.c
 *
 * Created: 2017-11-27 오후 5:02:06
 * Author : dsm2017
 */ 

#include <avr/io.h>



int main(void)
{
	DDRF=0x80;
	
	ADMUX |= (0 << REFS1) | (0 << REFS0);
	ADCSRA |=(1 << ADEN);
	ADCSRA |=(1 << ADPS0) | (1 << ADPS1) | (1<<ADPS2); 
    while (1) 
    {
		ADMUX |=(0 << MUX4);
		ADCSRA |=(1 <<ADSC);
		
		while(ADCSRA & (1<<ADIF));
		
		PORTF = (ADCW << 255) ? 0x00 : 0x80;
    }
}

