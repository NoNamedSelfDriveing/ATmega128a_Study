/*    
 * Third_Practice.c
 *
 * Created: 2017-11-20 ¿ÀÈÄ 5:09:43
 * Author: dsm2017
 */
#include <io.h>
#include <delay.h>

void main(void)
{                       
    int arr[10] = {0x01, 0x8f, 0x12, 0x06, 0x8c, 0x44, 0x40, 0x0d, 0x00, 0x0c};
    int i = 0; 
    int j = 0;

    DDRB = 0xff;
    DDRC = 0xff;             
    DDRD = 0x00;
           
    PORTB = arr[i];
    PORTC = arr[j];
    
    while (1)
    {       
        if(PIND == 0x02) {
           
            ++j;           
            if(j == 10) {
                
                ++i;
                PORTB = arr[i];
                j = 0;         
                PORTC = arr[j];
            } else {
                
                delay_ms(500);
                PORTC = arr[j];
            }
        } else if(PIND == 0x01) {
        
           --j; 
           if(i != 0 && j == -1){
           
                --i;           
                PORTB = arr[i];
                j = 9;
                PORTC = arr[j];
           } else{
                
                delay_ms(500);
                PORTC = arr[j];    
           }
        }    
    }       
}

