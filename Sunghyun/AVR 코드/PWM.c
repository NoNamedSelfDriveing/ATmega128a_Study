/*
 * PWM.c
 *
 * Created: 2017-12-04 오후 1:44:39
 * Author: dsm2017
 */

#include <io.h>
#include <delay.h>

int fnd[10] = {0x01, 0x8f, 0x12, 0x06, 0x8c, 0x44, 0x40, 0x0d, 0x00, 0x0c};

void init () { // 기본설정을 한다

    TCCR0 |= ((1<<WGM01)|(WGM00)); // fast pwm으로 설정
    TCCR0 |= ((1<<CS02)|(1<<CS01)|(1<<CS00)); // 분주비를 1024로 잡음 
    TCCR0 |= ((1<COM01)|(1<<COM00)); // 비교매치에서 set 탑에서 클리어 
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
    int countPWM = 1;   // 항상 사용자 변수는 맨 위에 정의
    int controlPWM = 1;
      
   // DDRC = 0xff;
   // DDRD = 0xff;
   // DDRE = 0xff;
    DDRB |= 0xff; // 포트 B를 출력 핀으로 사용한다
    init();   
    
    while (1)
    {                   
        if(countPWM == 255) controlPWM = -5; // 255가 최대이기 때문에  
        if(countPWM == 0) controlPWM = 5; 
                       
        OCR0 = countPWM;
//        excuteFND(countPWM);    
        delay_ms(30);
        countPWM += controlPWM; // 증감 가감을 한다.
    }
}
