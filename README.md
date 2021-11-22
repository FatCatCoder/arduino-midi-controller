# Arduino Midi Controller
Dead simple arduino midi controller for three slide potentiometers

## Why?
When composing orchestral tracks the use of slide pots is crucial to emulating the real dynamics of instruments played by humans. I love the feel and full length of my playing keyboard. All I required was a few pots to control Dynamics, Volume, and Expression settings on my VSTs. This project is my successful attempt to create the perfect and dirt cheap alterative to  popular DJ gear and controllers with more features than I required.

## Required Equipment 
- 3 Logarithmic (Audio taper) Potentiometers @ 10kΩ *
- ATmega32U4 processor (Arduino Leonardo board or other) **
- Snap Connectors
- Breadboard
- USB 2.0 type B to type A (male to male) cable
### After prototype
- Solder (or other more secure wiring solution off the breadboard)
- Enclosing (I built a custom wooden case from hand with some hobby store craft wood and glue)

## Required Software 
- Arduino programing software
- Install [Arduino Midi Library](https://www.arduino.cc/en/Reference/MIDIUSB) 


## Wiring
<img src="./wiring.jpg" width="650" height="426"/>


### Notes
\* audio taper follows the traditional way the human ear perceives changes in volume and is standard use for audio equipment. You can use slider or rotary pots
\
\
\** you could use a the more popular atmega328P (Arduino UNO) but this would require more setup and excess software to properly setup the midi interface (see [hairless midi](https://projectgus.github.io/hairless-midiserial/)) on computers whereas the 32u4 is *plugin and go*