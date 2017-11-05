# PWM
* 지연 함수를 이용한 PWM
* 고속 PWM
* 위상 교정 PWM

### 지연 함수를 이용한 PWM
> (http://www.atmel.com/Images/Atmel-8151-8-bit-AVR-ATmega128A_Datasheet.pdf)
* 한 주기 내에서 LED를 켜고 끄는 시간 비율을 조절하여 LED의 밝기를 조절하는 프로그램
* PWM 신호를 출력하기 위래 거의 대부분의 CPU 클록을 사용

### 고속 PWM
> (http://www.atmel.com/Images/Atmel-8151-8-bit-AVR-ATmega128A_Datasheet.pdf)
* 타이머/카운터를 사용해 PWM  신호를 생성
* 가장 간단하고 가장 많이 사용
* 상향 카운트만 존재

### 위상 교정 PWM
> (http://www.atmel.com/Images/Atmel-8151-8-bit-AVR-ATmega128A_Datasheet.pdf)
* 타이머/카운터를 사용해 PWM  신호를 생성
* 해상도가 높은 PWM 파형을 생성하기 위해 사용
* 상향, 하향 카운트 모두 존재
* PWM 주파수는 고속 PWM모드에 비해 절반이지만 해상도는 2배가 된다
