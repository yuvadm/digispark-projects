CC = avr-gcc
OBJCOPY = avr-objcopy

CFLAGS = -Wall -Os -Iusbdrv -mmcu=attiny85 -DF_CPU=16500000
OBJFLAGS = -j .text -j .data -O ihex

OBJECTS = usbdrv/usbdrv.o usbdrv/oddebug.o usbdrv/usbdrvasm.o keyboard.o

all: keyboard.hex

clean:
	$(RM) *.o *.hex *.elf usbdrv/*.o

%.hex: %.elf
	$(OBJCOPY) $(OBJFLAGS) $< $@

keyboard.elf: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

$(OBJECTS): usbdrv/usbconfig.h

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.S
	$(CC) $(CFLAGS) -x assembler-with-cpp -c $< -o $@
