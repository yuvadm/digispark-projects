# Keyboard

Neat and simple example of how the digispark can become a USB device and react to interrupts. Heavily based on http://codeandlife.com/2012/01/29/avr-attiny-usb-tutorial-part-3/

## Usage

Build the program and flash it as usual to the digispark.

```bash
$ make clean && make
$ micronucleus keyboard.hex
```

After the program loads, you should see a new USB device:

```bash
$ lsusb
Bus 111 Device 222: ID 16c0:05dc Van Ooijen Technische Informatica shared ID for use with libusb
```

You can now flip the LED by calling the test program, requires root privilege or proper udev rules:

```bash
$ ./usbtest on
$ ./usbtest off
```
