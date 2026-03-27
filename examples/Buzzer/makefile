# Project Settings
MCU = atmega32a
F_CPU = 16000000
TARGET = main
SRCS = main.c buzzer.c

# Toolchain
CC = avr-gcc
OBJCOPY = avr-objcopy
CFLAGS = -mmcu=$(MCU) -DF_CPU=$(F_CPU) -Os -Wall

# Programmer Settings (AVR-USB / SPI)
# Note: 'usbasp' is the most common for AVR-USB programmers. 
# Change to 'avrispmkII' or 'usbtiny' if your hardware varies.
PROGRAMMER = usbasp
PORT = usb

# Fuse Settings for 16MHz External Crystal
LFUSE = 0xFF
HFUSE = 0xD9

# New target to program fuses
fuses:
	avrdude -p $(MCU) -c $(PROGRAMMER) -P $(PORT) -B 32 -U lfuse:w:$(LFUSE):m -U hfuse:w:$(HFUSE):m

all: $(TARGET).hex

$(TARGET).elf: $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET).elf $(SRCS)

$(TARGET).hex: $(TARGET).elf
	$(OBJCOPY) -j .text -j .data -O ihex $(TARGET).elf $(TARGET).hex

flash: $(TARGET).hex
	avrdude -p $(MCU) -c $(PROGRAMMER) -P $(PORT) -U flash:w:$(TARGET).hex:i

clean:
	rm -f $(TARGET).elf $(TARGET).hex
