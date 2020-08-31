# ATtiny85 Arduino CLI workspace

Demo workspace including a script to program an ATtiny85 via Arduino as ISP.

Requires correct hardware setup, ATtiny board installed and bootloader flashed.

## Usage
>./upload demo

## Compile only
>arduino-cli compile --fqbn attiny:avr:ATtinyX5:cpu=attiny85,clock=internal8 demo

## Upload only
Substituting /dev/ttyUSB0 for your peripheral:
>arduino-cli upload -p /dev/ttyUSB0 -b attiny:avr:ATtinyX5:cpu=attiny85,clock=internal8 --programmer arduinoasisp demo
