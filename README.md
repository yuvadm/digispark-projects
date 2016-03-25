# Digispark Projects

Various code for the [Digispark](http://digistump.com/wiki/digispark)

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
