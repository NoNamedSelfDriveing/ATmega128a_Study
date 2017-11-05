#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{	
	//���� ��� ���� PB4 ��(OC0 ��)�� ������� ����
	DDRB |= (1 << PB4);

	int dim = 0;
	int direction = 1;
	
	//Ÿ�̸�/ī���� 0���� ��� PWM ���� ����
	TCCR0 |= (1 << WGM01) | (WGM00);
	//����� ���
	TCCR0 |= (1 << COM01);
	//���ֺ� 1.024�� ����
	TCCR0 |= (1 << CS02) | (1 << CS02) | (1 << CS00);
	
		
	while(1){
		OCR0 = dim;	
		_delay_ms(10);

		dim += direction;

		if(dim == 0) direction = 1;
		if (dim == 255) direction = -1;
	}
	
	return 0;
}