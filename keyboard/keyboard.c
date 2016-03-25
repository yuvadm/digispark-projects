#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>

#include "usbdrv.h"

#define F_CPU 16500000L  // 16.5 MHZ
#include <util/delay.h>

USB_PUBLIC uchar usbFunctionSetup(uchar data[8]) {
	return 0; // do nothing for now
}

int main() {
	uchar i;
	wdt_enable(WDT0_1S);

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
