# ATMega32A demo board
An ATMega32A demo board with exposed GPIO pins, LEDs, tactile switches and a buzzer

## The project
This is a simple ATMega32A board that I used to test some ideas for a bigger project. 
It's a small factor pcb - 88x43mm - with the following features:
- ATMega32A clocked at 16MHz
- 4 layer stackup
- USB-C conneector for power and, with a booloader like urboot, for firmware updates and serial communication. 
- ISP 6-pin connector to flash bootloader or firmware (in case you don't want to use a booloader like urboot or optiboot)
- Power OR-ing - can have both ISP and USB connected
- All the unused GPIO pins are exposed via connectors on the side of the board
- Can use AREF for the ADC pins. AVCC connected via a low pass filter to reduce ADC noise
- SCL/SDA pull-up resistors can be enabled through solder jumpers
- Includes a buzzer, two LEDs, two tactile buttons
- Footprints are optimized for JLCPCB and "Basic" or "Preferred Extended" parts, to lower assembly costs

<img src="images/ATMega Dev Board.png">

