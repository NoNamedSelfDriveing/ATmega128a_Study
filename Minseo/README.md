#Index
------

1. 마이크로프로세서의 종류
2. AVR 특징
3. [ATmega 128a 레지스터](s)

---

#마이크로프로세서의 종류 
1. Complex Instruction Set Computer(CISC) 
- 복잡한 명령어를 지원하는 프로세서 
- 복잡한 많은 수의 명령어를 해독하는데 많은 실리콘을 사용 
- 1980년대 이후 마이크로프로세서 마이크로 프로세서 시장에 처음 선을 보임 
	> 인텔 X86 아키텍터 • 8051 마이크로컨트롤러

1. Reduced Instruction Set Computer(RISC)
- 단순한 명령어 세트를 지원하는 프로세서 
	> PowerPC, MIPS, ARM • AVR, PIC 마이크로컨트롤러

---

#AVR 특징
* Advanced Virtual RISC의 약자이며 RISC 구조의 마이크로컨트롤러
* 저전력 8비트 또는 32비트 마이크로컨트롤러
* 명령어가 간단하고 동작 속도가 빠름
* 가격이 저렴하고 응용하기 쉬워 산업시장에서도 산업 시장에서도 많이 사용되어 짐
* 32개의 범용 레지스터와 RISC 구조의 디자인은 C 언어를 이용한 개발에 적합
* ISP(In System Programming)기능이 있어 AVR칩을 기판에 부착한 상태에서 내부 FLASH롬과 EEPROM을 여러 번 프로그래밍 할 수 있음
* 풍부한 내부 자원 SRAM, 통신 포트, A/D변환기, Watchdog, 타이머, PWM, I/O포트 등)을 구비하고 있어 외부에 별도로 주변장치를 부착하지 않아도 됨
