#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	//���� ��� ���� PB5 ��(OC1A ��), PB6 ��(OC1B ��)�� ������� ����
	DDRB |= (1 << PB5) | (1 << PB6);
	//Ÿ�̸�/ī���� 1���� 8��Ʈ ���� ���� PWM ���� ����
	TCCR1A |= (1 << COM1A1);
	TCCR1A |= (1 << COM1B1) | (1 << COM1B0);
	//���ֺ� 256���� ����
	TCCR0 |= (1 << CS12);

	int dim = 0;
	int direction = 1;
	
	while(1){
		OCR1A = dim;
		OCR1B = dim;
		
		_delay_ms(10);

		dim += direction;

		if(dim == 0) direction = 1;
		if (dim == 255) direction = -1;
	}
	
	return 0;
}