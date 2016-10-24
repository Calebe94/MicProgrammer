compile: led.c
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o led.o led.c
convert: led.o
	avr-gcc -mmcu=atmega328p led.o -o led                            
hex:	led
	avr-objcopy -O ihex -R .eeprom led led.hex
