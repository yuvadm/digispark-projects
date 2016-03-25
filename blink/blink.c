#include <avr/eeprom.h>
#include <avr/io.h>
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
