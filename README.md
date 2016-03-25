# Digispark Projects

Various code for the [Digispark](http://digistump.com/wiki/digispark)

 - [Blink](blink) - a simple blinking LED example
 - [Keyboard](keyboard) - a basic USB device that flips the LED based on USB interrupts

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
$ micronucleus hello.hex
```

## License

[GPLv3](LICENSE)
