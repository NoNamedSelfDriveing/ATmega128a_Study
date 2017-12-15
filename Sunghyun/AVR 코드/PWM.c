/*
 * PWM.c
 *
 * Created: 2017-12-04 ���� 1:44:39
 * Author: dsm2017
 */

#include <io.h>
#include <delay.h>

int fnd[10] = {0x01, 0x8f, 0x12, 0x06, 0x8c, 0x44, 0x40, 0x0d, 0x00, 0x0c};

void init () { // �⺻������ �Ѵ�

    TCCR0 |= ((1<<WGM01)|(WGM00)); // fast pwm���� ����
    TCCR0 |= ((1<<CS02)|(1<<CS01)|(1<<CS00)); // ���ֺ� 1024�� ���� 
    TCCR0 |= ((1<COM01)|(1<<COM00)); // �񱳸�ġ���� set ž���� Ŭ���� 
}

/*
void excuteFND (int a) {

    int first;
    int second; 
    int third;
    
    first = a%10;
    second = a/10%10;
    third = a/10/10%10;
    
    PORTC = fnd[first];
    PORTD = fnd[second];
    PORTE = fnd[third];
}
*/
  
void main(void)
{
    int countPWM = 1;   // �׻� ����� ������ �� ���� ����
    int controlPWM = 1;
      
   // DDRC = 0xff;
   // DDRD = 0xff;
   // DDRE = 0xff;
    DDRB |= 0xff; // ��Ʈ B�� ��� ������ ����Ѵ�
    init();   
    
    while (1)
    {                   
        if(countPWM == 255) controlPWM = -5; // 255�� �ִ��̱� ������  
        if(countPWM == 0) controlPWM = 5; 
                       
        OCR0 = countPWM;
//        excuteFND(countPWM);    
        delay_ms(30);
        countPWM += controlPWM; // ���� ������ �Ѵ�.
    }
}
