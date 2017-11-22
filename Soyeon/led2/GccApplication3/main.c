/*
 * GccApplication3.c
 *
 * Created: 2017-11-20 오후 6:57:53
 * Author : dsm2017
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA=0X0f;
	int i;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTA=0X01;
		for(i=0; i<4; i++)
		{
			_delay_ms(500);
			PORTA=PORTA <<1;
		}
    }
}

