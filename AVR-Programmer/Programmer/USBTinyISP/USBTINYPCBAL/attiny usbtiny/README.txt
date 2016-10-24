avrdude -c usbtiny -p t45 -U flash:w:usbtiny.hex


avrdude -c usbtiny -p t45 -V -U lfuse:w:0xe1:m -U hfuse:w:0x5d:m -U efuse:w:0xff:m

Hi guys correct way to upload that using arduino: 
HEX: avrdude -P com3 -b 19200 -c avrisp -p attiny85 -v -e -U flash:w:usbtiny.hex
FUSE:

avrdude -P com3 -b 19200 -c avrisp -p attiny85 -v -e -U lfuse:w:0xff:m -U hfuse:w:0xdf:m
