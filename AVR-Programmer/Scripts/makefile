compile:	led.c
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o led.o led.c 
exec: led.o
	avr-gcc -mmcu=atmega328p led.o -o led               
hex: led
	avr-objcopy -O ihex -R .eeprom led led.hex
upload:	led.hex
	avrdude -F -V -c usbasp -p ATMEGA328P -b 115200 -U flash:w:led.hex


