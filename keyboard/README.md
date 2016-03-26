# Keyboard

A USB HID keyboard example, heavily based on http://codeandlife.com/2012/06/18/usb-hid-keyboard-with-v-usb/

## Usage

Build the program and flash it as usual to the digispark.

```bash
$ make clean && make
$ micronucleus keyboard.hex
```

After the program loads, you should see a new USB device:

```bash
$ lsusb
Bus 111 Device 222: ID 4242:e131 USB Design by Example
```

dmesg will also show the new keyboard:

```bash
$ dmesg | tail
[1111] usb 1-2: new low-speed USB device number 36 using xhci_hcd
[2222] usb 1-2: ep 0x81 - rounding interval to 64 microframes, ep desc says 80 microframes
[3333] input: y3xz.com keyboard as /devices/pci0000:00/0000:00:14.0/usb1/1-2/1-2:1.0/0003:4242:E131.0009/input/input16
[4444] hid-generic 0003:4242:E131.0009: input,hidraw5: USB HID v1.01 Keyboard [y3xz.com keyboard] on usb-0000:00:14.0-2/input0
```
