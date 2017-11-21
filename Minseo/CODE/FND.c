/*
 * FND.c
 *
 * Created: 2017-11-19 오후 3:06:12
 * Author : MAXLEE
 */ 

#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{	
	int fnd[10] = {0x80, 0xf1, 0x48, 0x60, 0x31, 0x22, 0x02, 0xb0, 0x00, 0x20};  
	int i = 0, j = 0;
	
	DDRE = 0xff;	
	DDRB = 0xff;

    while (1) 
    {
		for(i = 0; i < 10; i++)
		{	
			PORTE = fnd[i];
			
			for(j = 0; j < 10; j++)
			{
				PORTB = fnd[j];
				_delay_ms(1000);	
			}
		}
	}
	
	return 0;
}


