/*
 * ADC_Prac.c
 *
 * Created: 2017-11-27 오후 4:50:02
 * Author: dsm2017
 */

/*
 * ADC.c
 *
 * Created: 2017-11-26 오후 4:34:33
 * Author: dsm2017
 */

#include <io.h>

uint16_t readData(uint8_t channel); 
void initADC();

void main(void)
{
    DDRA = 0x01;
    initADC();  // ADC 초기화
    
    while (1)
    {
        PORTA = (readData(0) < 255) ? 0x00 : 0x01; // 들어온 데이터가 255보다 작다면 끄기
    }
}



void initADC() 
{

    ADCSRA |= ((1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0));
    ADMUX |= (1<<REFS0);
    ADCSRA |= (1<<ADEN); 
    ADMUX |= (1<<ADLAR);
}

uint16_t readData(uint8_t channel) 
{
    ADMUX |= channel     // 포트 설정 
    ADCSRA |= (1<<ADSC); // 변환 시작
    
    while(ADCSRA & (1<<ADSC)) // 변환 완료 기다리기   
    
    return ADC; // 데이터 반환
}
