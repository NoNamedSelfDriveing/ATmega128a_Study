#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

#define LED_TIME 20

void PWM_LED(int dim){
	int i;
	PORTB = 0x01;	//LED �ѱ�
	
	for(i = 0; i < 256; i++){
		if(i > dim)	PORTB = 0x00;	//��Ƽ ����Ŭ�� �Ѿ�� LED ����
		_delay_us(LED_TIME);
	}
}

int main(void)
{
	DDRB = 0x01;
	
	int dim = 0;		//���� LED ���
	int direction = 1;	//��� ����(1) �Ǵ� ����(-1)
	
	while(1){
		PWM_LED(dim);
		dim +=direction;	//��� ��ȭ
		
		if(dim == 0) direction = 1;
		if(dim == 255) direction = -1;
	}
	
	return 0;
}
