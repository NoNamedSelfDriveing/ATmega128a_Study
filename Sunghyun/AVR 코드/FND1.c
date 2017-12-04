/*
 * Second_Practice.c
 *
 * Created: 2017-11-19 ¿ÀÈÄ 3:02:01
 * Author: dsm2017
 */

#include <io.h>
#include <delay.h>

void main(void)
{                       
    int arr[10] = {0x01, 0x8f, 0x12, 0x06, 0x8c, 0x44, 0x40, 0x0d, 0x00, 0x0c};
    int i, j;

    DDRB = 0xff;
    DDRC = 0xff;
                      
    PORTB = arr[0];
    PORTC = arr[0];
    
    while (1)
    {       
        for(i = 0; i < 10; i++) {
            
            for(j = 0; j < 10; j++) {
                
                PORTC = arr[j];
                delay_ms(1000); 
            }                  
            
            PORTB = arr[i];
        }  
    }       
}
