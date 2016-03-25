#include <avr/io.h>
#define F_CPU 16500000L  // 16.5 MHZ
#include <util/delay.h>

int main() {
	DDRB |= _BV(DDB1);
	while (1) {
		PORTB ^= _BV(PB1);
		_delay_ms(100);
		PORTB ^= _BV(PB1);
		_delay_ms(900);
	}
}
