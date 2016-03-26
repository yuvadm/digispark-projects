# Digispark Projects

Various code for the [Digispark](http://digistump.com/wiki/digispark)

 - [Blink](blink) - a simple blinking LED example, start here
 - [USB](usb) - a basic USB device that flips the LED based on USB interrupts
 - [Keyboard](keyboard) - a USB HID keyboard example

## Prerequisites

 - avr-gcc
 - avr-libc
 - [micronucleus](https://github.com/micronucleus/micronucleus)

### Udev Rules

```bash
$ sudo cp 49-digispark.rules /etc/udev/rules.d/
$ sudo udevadm control --reload-rules
```

## Usage

```bash
$ cd blink
$ make clean && make
$ micronucleus blink.hex
```

## License

[GPLv3](LICENSE)
