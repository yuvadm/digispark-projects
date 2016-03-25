#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>

#include "usbdrv.h"

#include <util/delay.h>

#define USB_LED_OFF 0
#define USB_LED_ON  1

USB_PUBLIC uchar usbFunctionSetup(uchar data[8]) {
	usbRequest_t *rq = (void *)data;

	switch(rq->bRequest) {
		case USB_LED_ON:
			PORTB |= 1;
			return 0;
		case USB_LED_OFF:
			PORTB &= ~1;
			return 0;
	}

	return 0;
}

int main() {
	DDRB = 1;
	uchar i;
	wdt_enable(WDTO_1S);

	usbInit();

	usbDeviceDisconnect();
	for (i=0; i<250; i++) {
		wdt_reset();
		_delay_ms(2);
	}
	usbDeviceConnect();

	sei();

	while (1) {
		wdt_reset();
		usbPoll();
	}

	return 0;
}
