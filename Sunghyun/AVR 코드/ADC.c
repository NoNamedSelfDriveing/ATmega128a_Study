/*
 * ADC_Prac.c
 *
 * Created: 2017-11-27 ���� 4:50:02
 * Author: dsm2017
 */

/*
 * ADC.c
 *
 * Created: 2017-11-26 ���� 4:34:33
 * Author: dsm2017
 */

#include <io.h>

uint16_t readData(uint8_t channel); 
void initADC();

void main(void)
{
    DDRA = 0x01;
    initADC();  // ADC �ʱ�ȭ
    
    while (1)
    {
        PORTA = (readData(0) < 255) ? 0x00 : 0x01; // ���� �����Ͱ� 255���� �۴ٸ� ����
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
    ADMUX |= channel     // ��Ʈ ���� 
    ADCSRA |= (1<<ADSC); // ��ȯ ����
    
    while(ADCSRA & (1<<ADSC)) // ��ȯ �Ϸ� ��ٸ���   
    
    return ADC; // ������ ��ȯ
}
