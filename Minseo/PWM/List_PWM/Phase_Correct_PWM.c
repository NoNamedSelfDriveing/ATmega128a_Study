#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	//파형 출력 핀인 PB5 핀(OC1A 핀), PB6 핀(OC1B 핀)을 출력으로 설정
	DDRB |= (1 << PB5) | (1 << PB6);
	//타이머/카운터 1번을 8비트 위상 교정 PWM 모드로 설정
	TCCR1A |= (1 << COM1A1);
	TCCR1A |= (1 << COM1B1) | (1 << COM1B0);
	//분주비를 256으로 설정
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