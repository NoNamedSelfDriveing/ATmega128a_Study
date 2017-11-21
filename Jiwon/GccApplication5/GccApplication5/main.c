/*
 * GccApplication5.c
 *
 * Created: 2017-11-19 오후 3:27:23
 * Author : dsm2017
 */ 
#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	int g[10]={0b11000000,0b11111001,0b10100100,0b10110000,0b10011001,0b10010010,0b10000010,0b11011000,0b10000000,0b10010000};
	int i;
	DDRA=0xff;
    while (1) 
    {
		for(i=0; i<10; i++)
		{
			PORTA=g[i];
			_delay_ms(1000);
		}
		
		/*PORTA=0b11000000; //0 
		_delay_ms(1000);
		PORTA=0b11111001; //1  
		_delay_ms(1000);
		PORTA=0b10100100; //2  
		_delay_ms(1000);23
		
		PORTA=0b10110000; //3 
		_delay_ms(1000);
		PORTA=0b10011001; //4 
		_delay_ms(1000);
		PORTA=0b10010010; //5
		_delay_ms(1000);
		PORTA=0b10000010; //6 
		_delay_ms(1000);
		PORTA=0b11011000;   //7 
		_delay_ms(1000);
		PORTA=0b10000000; //8 
		_delay_ms(1000);
		PORTA=0b10010000; //9
		_delay_ms(1000);
		*/
		
		
		
    }
}

