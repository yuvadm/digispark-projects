
default:
	# compile for attiny86 with warnings, optimizations, and 1 MHz clock frequency
	avr-gcc -Wall -Os -DF_CPU=16500000L -mmcu=attiny85 -o blink.o blink.c
	avr-objcopy -j .text -j .data -O ihex blink.o blink.hex

clean: /dev/null
	rm -f blink.o blink.hex
