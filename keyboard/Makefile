
default:
	# compile for attiny85 with warnings, optimizations, and 16.5MHz clock frequency
	avr-gcc -Wall -Os -mmcu=attiny85 -o keyboard.o keyboard.c
	avr-objcopy -j .text -j .data -O ihex keyboard.o keyboard.hex

clean: /dev/null
	rm -f keyboard.o keyboard.hex
