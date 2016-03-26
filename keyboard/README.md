# Keyboard

A USB HID keyboard example, heavily based on http://codeandlife.com/2012/06/18/usb-hid-keyboard-with-v-usb/

## Usage

Build the program and flash it as usual to the digispark.

```bash
$ make clean && make
$ micronucleus usb.hex
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
