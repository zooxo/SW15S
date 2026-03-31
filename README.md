# SW15S - The Swiss Army Knife Calculator In Your Pocket

# ++++ COMING SOON ++++

<img width="884" height="537" alt="Image" src="https://github.com/user-attachments/assets/d33ba76f-114b-4f04-be9b-960ea7c9fd96" />




```
This software is protected by the BSD 3 Clause Licence
and copyright (c) 2026 by deetee. All rights reserved.


SW15S - The Swiss Army Knife Calculator In Your Pocket

____________________

PREAMBLE
____________________

The HP-15c was probably the most simple but versatile scientific calculator.
SW15S (simply pronounced as 'SWISS') offers an alternative firmware for the
DM15/DM15L replica of Swissmicros with a suite of useful applications.

Have fun!
deetee


____________________

INSTALLATION
____________________

To install a new firmware to a DM-15 (Voyager) calculator have a look at
chapter Firmware Update of the Swissmicros Voyager Series User Manual at:
  https://technical.swissmicros.com/voyager/firmware/

On linux computers for example install the package lpc21isp and flash the
desired firmware (hex file) to the calculator with:
  sudo lpc21isp <firmware.hex> /dev/ttyUSB0 115200 12000

After starting this command press the reset button on the backside of the
calculator with a paperclip. After the flashing procedure ends you might need to
reset the calculator again. Every Swissmicros-Calculator has a reset button on
the PCB (even if there is no hole to reach it).


____________________

MENU - App Launcher
____________________

Start the desired application with keys 7, 8, 9 and 4, 5, 6 (due to f/g-key):
  Key  7    8    9    4    5    6
       CALC CMD  RACK TTOP CPU  MED
  f    NOTE CAL  TIME MARK E6B
  g    ASC  PT   D&I  RULE FIT  SET

Possible applications are:
  MENU ... Menu or application launcher
  SET  ... Calculator settings (like time, date, display, offtime, sound)
  MED  ... Memory editor for managing FORTH-like intrinsic and user programs
  DICT ... Alphabetically sorted dictionary of programs
  PLOT ... Plot math functions - used by CALC
  CALC ... Scientific calculator (similar to HP15/DM15, programs managed in MED)
  CMD  ... Symbolic calculator with editable command line
  RACK ... Small (8x4) but powerful spreadsheet
  TTOP ... Tabletop calculator for large numbers (up to 3 fixed decimal places)
  CPU  ... Simulates a simple 8-bit-CPU with 64 byte memory
  NOTE ... Simple text editor for notes
  CAL  ... Calendar
  TIME ... World time clock
  MARK ... Mark up to 4 scores
  E6B  ... Flight planner
  ASC  ... ASCII table
  PT   ... Periodic Table of the Elements
  D&I  ... Rules and formulae for derivatives and integrals
  RULE ... Slide Rule Simulator
  FIT  ... Addictive 2048 game

On the right side of the screen you see some extra information like the battery
level, date (day) and time (24 hour format).

Please note that the battery level is a momentarily value that varies due to the
momentarily activity of the calculator. But if you see the empty battery symbol
quite often you might consider changing the battery.


```
