CC = avr-gcc
OBJCOPY = avr-objcopy

CFLAGS = -Wall -Os -Iusbdrv -mmcu=attiny85 -DF_CPU=16500000
OBJFLAGS = -j .text -j .data -O ihex

OBJECTS = usbdrv/usbdrv.o usbdrv/oddebug.o usbdrv/usbdrvasm.o usb.o

all: usb.hex usbtest

clean:
	$(RM) *.o *.hex *.elf usbdrv/*.o usbtest

%.hex: %.elf
	$(OBJCOPY) $(OBJFLAGS) $< $@

usb.elf: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

$(OBJECTS): usbdrv/usbconfig.h

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.S
	$(CC) $(CFLAGS) -x assembler-with-cpp -c $< -o $@

usbtest:
	gcc $(pkg-config --libs libusb) -O -Wall usbtest.c -o usbtest -lusb
