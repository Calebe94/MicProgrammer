#include<avr/io.h>
#include<util/delay.h>
int main(void){
	DDRB |= 0b0000001;
	while(1){
		//PORTB |= (1<<0);
		PORTB = 0b00000001;
		_delay_ms(500);
		PORTB = 0b00000000;
		_delay_ms(500);
	}
}

