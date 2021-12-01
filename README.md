README

Welcome to ChordBoard. A musical application aimed at providing harmonious chord suggestions and 
interface to experiment with various instruments for novice musicians. This application is made 
for the Raspberry Pi Debian Linux distribution. View the instructions for running this application
below.

SETUP

To set this program up, make sure to have the following:
	- A Raspberry Pi or a Raspberry Pi Virtual Machine
	- g++ (should come default with any Linux distro)
	- Qt and qmake (if you want to compile the program yourself)

You can either run the application that is found directly in this application folder, or, if you wish,
build the application yourself using the Makefile. To do this, run the 'make' command into your command 
line.

USING THE APPLICATION:

To start, on the startup dialog, choose an instrument that you would like to begin with, and press Go! 
Then, you are met with the instrument interface, alongwith the main window that the entire program runs on.
Play around with the tools as much as you want, but to get suggestions and feedback on your chord input from
the system, please record it first by hitting the record button, playing the notes through the instrument, then
either hitting stop (Piano, Trumpet) or by pressing the record button again (Flute, Drums). Then, the output 
should appear for the user, detailing various chords from the instrument. To play this chord, left click it
on the output list, and turn any arrangements you wish to use on. There is also a sample song maker for
a few of the instruments.

AUTHORS:
	- Kohei Yasui (kyasui)
	- Terrence Ju (tju5)
	- Kevin Yang (kyang267)
	- John Dick (jdick32)
	- dylan ouilette (doueli8)
