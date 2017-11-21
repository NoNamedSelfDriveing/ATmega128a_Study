/*
 * GccApplication1.c
 *
 * Created: 2017-11-08 오후 4:51:59
 * Author : maxlee
 */ 

#include <avr/io.h>

int main(void)
{	
	DDRD = 0xfe;   
	
	while(1)	
	{  		
		if(PIND & 0x01)
			PORTD = 0x00;
			
		else
			PORTD = 0x02;
	}
	
}
