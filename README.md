# ATMega32A simple board
An ATMega32A breakout board with exposed GPIO pins, LEDs, tactile switches and a buzzer

## The project
This is a simple ATMega32A board that I used to test some ideas for a bigger project. 
It's a small factor pcb - 84x44mm - with the following features:
- ATMega32A clocked at 16MHz
- USB-C conneector for power and firmware update
- ISP 6-pin connector to flash bootloader or firmware (in case you don't want to use a booloader like urboot or optiboot)
- Power OR-ing - can have both ISP and USB connected
- All the unused GPIO pins are exposed via connectors on the side of the board
- Includes a buzzer, two LEDs, two tactile buttons
- Footprints are optimized for JLCPCB and "Basic" or "Preferred Extended" parts, to lower assembly costs

<img src="images/ATMega Dev Board.png">

