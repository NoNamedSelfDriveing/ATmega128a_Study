/*
 * GccApplication2.c
 *
 * Created: 2017-11-20 오후 5:27:46
 * Author : dsm2017
 */ 

#define F_CPU 16000000
#include <avr/io.h>


int main(void)
{
    DDRA=0X11;
	/* Replace with your application code */
    while (1) 
    {
		PORTA=0X01;
    }
}

