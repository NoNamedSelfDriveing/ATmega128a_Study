#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{	
	//파형 출력 핀인 PB4 핀(OC0 핀)을 출력으로 설정
	DDRB |= (1 << PB4);

	int dim = 0;
	int direction = 1;
	
	//타이머/카운터 0번을 고속 PWM 모드로 설정
	TCCR0 |= (1 << WGM01) | (WGM00);
	//비반전 모드
	TCCR0 |= (1 << COM01);
	//분주비를 1.024로 설정
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