
default:
	# compile for attiny85 with warnings, optimizations, and 16.5MHz clock frequency
	avr-gcc -Wall -Os -mmcu=attiny85 -o blink.o blink.c
	avr-objcopy -j .text -j .data -O ihex blink.o blink.hex

clean: /dev/null
	rm -f blink.o blink.hex
