/*
 * GccApplication2.c
 *
 * Created: 2017-11-19 오후 4:00:28
 * Author : dsm2017
 */ 
#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	int cntDwn[10];
	int i = 9;
	//                  A B C D E F G dp
	cntDwn[0] = 0x03; //0 0 0 0 0 0 1 1
	cntDwn[1] = 0x9f; //1 0 0 1 1 1 1 1
	cntDwn[2] = 0x25; //0 0 1 0 0 1 0 1
	cntDwn[3] = 0x0d; //0 0 0 0 1 1 0 1
	cntDwn[4] = 0x99; //1 0 0 1 1 0 0 1
	cntDwn[5] = 0x49; //0 1 0 0 1 0 0 1
	cntDwn[6] = 0x41; //0 1 0 0 0 0 0 1
	cntDwn[7] = 0x1b; //0 0 0 1 1 0 1 1
	cntDwn[8] = 0x01; //0 0 0 0 0 0 0 1
	cntDwn[9] = 0x19; //0 0 0 1 1 0 0 1

	DDRA = 0xff;
	DDRB = 0x00;
 	
	PORTA = cntDwn[i]; 
	
    while (1) 
    {
		while ((PINB & 0x03) == 0x03);
		
		if((PINB & 0x03) == 2) //10
		{
			i = (i + 1) % 10;
		}
		else if((PINB & 0x03) == 1)
		{
			i = (i-1 >= 0)? i-1 : 9;
		}
		
		PORTA = cntDwn[i];
		
		while((PINB & 0x03) != 3);
		
    }
}