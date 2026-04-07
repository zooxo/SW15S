# SW15S - The Swiss Army Knife Calculator In Your Pocket

# ++++ COMING SOON ++++

<img width="884" height="537" alt="Image" src="https://github.com/user-attachments/assets/d33ba76f-114b-4f04-be9b-960ea7c9fd96" />
<img width="270" height="913" alt="Image" src="https://github.com/user-attachments/assets/78f20775-81ee-4506-99eb-f8d967f8ab2c" />



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
calculator with a paperclip. When the flashing procedure ends you might need to
reset the calculator again. Every Swissmicros-Calculator has a reset button on
the PCB (even if there is no hole to reach it).


____________________

MENU - App Launcher
____________________

Start the desired application with keys 7, 8, 9 and 4, 5, 6 (due to f/g-key):
  Key  7    8    9    4    5    6
       CALC CMD  RACK TTOP CPU  MED
  f    NOTE DATE TIME MARK E6B  SUGR
  g    ASC  PT   D&I  RULE FIT  SET

Possible applications are:
  MENU ... Menu or application launcher
  SET  ... Calculator settings (like time, date, display, offtime, sound)
  DICT ... Alphabetically sorted dictionary of programs
  MED  ... Memory editor for managing FORTH-like intrinsic and user programs
  PLOT ... Plot math functions - used by CALC
  CALC ... Scientific calculator (similar to HP15/DM15, programs managed in MED)
  CMD  ... Symbolic calculator with editable command line
  RACK ... Small (8x4) but powerful spreadsheet
  TTOP ... Tabletop calculator for large numbers (up to 3 fixed decimal places)
  CPU  ... Simulates a simple 8-bit-CPU with 64 byte memory
  NOTE ... Simple text editor for notes
  DATE ... Calendar
  TIME ... World time clock
  MARK ... Mark up to 4 scores
  E6B  ... Flight planner
  SUGR ... Insulin calculator
  ASC  ... ASCII table
  PT   ... Periodic Table of the Elements
  D&I  ... Rules and formulae for derivatives and integrals
  RULE ... Slide Rule Simulator
  FIT  ... Addictive 2048 game

On the right side of the screen you see some extra information like the battery
level, date (day) and time (24 hour format).


____________________

STATUS - ANNUNCIATOR
____________________

Depending o the running application, the display shows specific data on the
right side. For example the annunciator always displays the battery level icon.
Please note that the battery level is a momentarily value that varies due to the
momentarily activity of the calculator. But if you see the empty battery symbol
quite often you might consider changing the battery.

In addition the first status line shows pressed function keys (f, g), hyperbolic
function keys (h, H), the keyboard mode (numeric, keypad, qwert), the number of
decimals (tabletop calculator), a running symbol (sand clock) and a reference
link symbol (spreadsheet).

The second status line annunciates the dicionary entry number, a user memory
usage number, a text editor usage number, the hex mode (16-symbol), a following
complex number operation (C) or the cell address (ie A1).

Both applications the spreadsheet (RACK) and the periodic table of elements (PT)
show a graphic 'cursor' location black bar, where one white pixel represents the
location of the cell (respecively the element) on the spreadsheet (respectively
on the periodic table) - good vision needed.


____________________

SET - Settings
____________________

Setting menu:
  Toff  Set offtime (5-240 s)
  DATE  Set date (year, month day)
  LCD   Brightness=0-63, Voltage=1-7 - default=(0|5)
  BUZZ  Key click (on/off)
  TIME  Set time (hour, minute)
  RST   Factory Reset - please be careful - all data will be erased!

Please note that (mostly) key SQRT/EXP/POW10 increments and SST/GTO/SIN
decrements values.
Please be careful when setting the lcd brightness to remain visibility.


____________________

DICT
____________________

DICT offers to the applications CALC and LINE EDITOR (and so indirectly to CMD,
MED, RACK, NOTE D&I) an alphabetically sorted list of intrinsic and user
programs for selection.

Keys:
  g       Quit
  8|4|2|6 Previous|Next
  7|1     Home|End
  9|3     PgUp|PgDown
  5|ENTER Select
  SQRT    Jump to physical constants
  EXP-TAN Fast decade access: Jump in 10% steps

On the screen the "big sized" command is the selected, while on its left/right
side the prvious/next command is shown in small font. On the right side of the
screen the command number is displayed.


____________________

LINE EDITOR
____________________

Many applications (CMD, MED, RACK, NOTE, D&I) use this line editor to edit a
string. With a double click of the f key (f-f) the user can select one of 3
different keyboard input possibilities:

General keys:
  f|g   Regular shift functions
  f-f   Next keyboard mode (NUMPAD, CURPAD, KEYBOARD)
  f-g   Open DICT
  g-g   Quit
  f-STO Store text to clipboard
  f-RCL Recall clipboard and overwrite edit string

- NUMPAD: This is the kind of keyboard the HP15 uses. For instance pressing the
  number 8 insert the character 8 to the edited string and pressing the EXP-key
  inserts the characters E, X and P to the edited string. Function keys can be
  selected with the f or g key.
    g-g      Quit
    SST|GTO  Cursor right/left
    R/S|GSB  5 x Cursor left/right
    BSP      Backspace
    g-BSP    Clear edit string
    ENTER    Insert space

- CURSOR PAD: The number keys act like a cursor pad. For instance 8 selects UP,
  7 selects HOME and 5 (usually) selects. Hence the cursor points to a matrix of
  characters shown on the screen. This is the way to enter special characters
  like '%'.
    7 Home  8 Up     9 PgUp
    4 Left  5 Enter  6 Right
    1 End   2 Down   3 PgDown

    g-g|ENTER Quit
    SST|GTO   Cursor right/left
    R/S|GSB   5 x Cursor left/right
    BSP       Backspace
    g-BSP     Clear edit string

- QWERT KEYBOARD: Unbelievable but the keyboard of the HP15 is able to provide a
  typewriter keyboard (for those who use to write blindly). The 0 key simulates
  the space key, the multiply key the backspace, the subtract key latches the
  shift key and the dot, 3, SUM+ and + keys provide cursor keys.
    g-g         Quit
    f-g         Dictionary
    -           Toggle caps lock
    *|g-*|g-BSP Backspace | Clear edit string
    .|SUM|3|+   Cursor keys (left|up|down|right) - up|down = 5 x left|right

On the right side of the screen there is a symbol, which shows the selected
input method (1 for NUMPAD, a 4-cursor-symbol for the CURSOR PAD and a keyboard
symbol for the QWERT-KEYBOARD).


____________________

MED - Memory Editor
____________________

MED edits and manages the central memory, where intrinsic, builtin and user
programs are stored.
The second line of the display shows the name of the selected program/command,
its number and the total number of programs. The first line of the display shows
the commands used in this program.
The number in the lower right corner shows how much of the available program
memory is occupied (ie 7 means, that more than 70% is used).

For navigation MED uses the CURSOR PAD:
  7 Home  8 Previous  9 PgUp
  4 Left  5 Edit      6 Right
  1 End   2 Down      3 PgDn

Other keys:
  g       Quit
  /|5     Edit program (with LINE EDITOR)
  *       Edit program name (with LINE EDITOR)
  +       Insert new (user) program (named NEW with NOP command)
  -       Delete (user) program - (intrinsic programs cannot be deleted!)
  STO|RCL Copy|Paste program to selected program (overwites!)
  SQRT    Jump to physical constants
  EXP-TAN Fast decade access: Jump in 10% steps

There are "special sections" (reserved names) in the program memory:
  FNA-FNE Used for five math functions to examine/calculus/plot in CALC
  A1-D4   Cell names/programes used in RACK
  cXY     Physical constants (see below)

Conditions and loops in programs:
  g* g/   Conditions - provides 1 (TRUE) if X=0 respective X<=Y (else 0)
  IF      IF{TRUE branch}ELSE{FALSE branch}THEN
  LOOP    Execute a BEGIN-UNTIL loop until X is TRUE

Physical constants:
  0  cc   299792458         Speed of light
  1  cg   9.80665           Acceleration of gravity
  2  cG   6.67430e-11       Newton constant of gravity
  3  cVm  0.02271095464     Molar volume of ideal gas
  4  cNA  6.02214076e23     Avogadro constant
  5  cRyd 10973731.568160   Rydberg constant
  6  ch   6.62607015e-34    Planck constant
  7  cPH0 2.067833848e-15   Magnetic flux quantum
  8  ca0  5.29177210903e-11 Bohr radius
  9  ck   1.380649e-23      Boltzmann constant
  10 cR   8.314462618       Molar gas constant
  11 cF   96485.33212       Faraday constant
  12 ct   273.15            Celsius temperature
  13 catm 101325            Standard atmosphere
  14 ce   1.602176634e-19   Elementary charge
  15 cE0  8.8541878128e-12  Vacuum electric permittivity
  16 cm0  1.25663706212e-6  Vacuum magnetic permeability
  17 cZ0  376.730313668     Impedance of vacuum
  18 cmU  1.6605390666e-27  Atomic mass constant
  19 cre  2.8179403262e-15  Electron radius
  20 cme  9.1093837015e-31  Electron mass
  21 cmp  1.67262192369e-27 Proton mass
  22 cmn  1.67492749804e-27 Neutron mass
  23 cmmu 1.883531627e-28   Muon mass
  24 cmB  9.2740100783e-24  Bohr magneton
  25 cmN  5.0507837461e-27  Nuclear magneton
  26 cmme -9.2847647043e-24 Electron magnetic moment
  27 cmmp 1.41060679736e-26 Proton magnetic moment
  28 cmmn -9.6623651e-27    Neutron magnetic moment
  29 cmmm -4.4904483e-26    Muon magnetic moment
  30 cA   7.2973525693e-3   Fine structure constant
  31 cS   5.670374419e-8    Stefan-Boltzmann constant
  32 cG0  7.748091729       Conductance quantum
  33 cgam 2.6752218744e8    Proton gyromagnetic ratio
  34 cC1  3.741771852e-16   First radiation constant
  35 cC2  1.438776877e-2    Second radiation constant


____________________

PLOT - Plot a graph
____________________

PLOT is used by CALC to plot a graph of (the from CALC selected) function - any
key quits.
The four values on the screen show the plot ranges (ymin|ymax and xmin|xmax).


____________________

CALC - Calculator
____________________

CALC is the versatile RPN calculator of SW15S. Most keys are used the same way
as on the HP-15c/DM15 - except that programming is done "the FORTH way" via MED.

Special keys:
 g-g   Quit
 f-g   Execute command via dictionary (ie physical constant (start with 'c')
 f-TAN Demand next operation as complex number operation

CALC supports the following functions:
  Basic
    0-9.      Number input
    ENTER     Enter number (stack lift) or duplicate TOS (DUP)
    + - * /   Basic operation
    gRCL      Modulo
    CHS       Negate TOS (ends number input)
    EEX       Push Y*10^X to the stack
    BSP gBSP  Clear number entry or TOS, clear stack
    ROT up/dn Rotate 3 stack elements (ZYX->XZY/ZYX->YXZ)
    SWAP      Swap X and Y
    LASTx     Push last ENTERed number to stack
    STO RCL   Store Y to register number X (0-9) or push register X to stack
    fSIN      Toggle HEX mode (enter numbers >9 with a dot (ie .1=a, .6=f))
    g* g/     Conditions - provides 1 (TRUE) if X=0 respective X<=Y (else 0)
    fENTER    Generate random (16-bit) number
  Advanced mathematics
    SQRT, SQR, EXP, LN, 10^X, LOG, Y^X, %, 1/X, delta%,
    FRAC, INT, ABS, PI, Pxy, Cxy, lnGAMMA (f0),
    SIN, COS, TAN, aSIN, aCOS, aTAN, SINH, COSH, TANH, aSINH, aCOSH, aTANH
    gSWAP     OVER (YX->YXY)
    g-        NAND ~(X & Y) ... useful in HEX mode (fSIN)
    fCOS      DO loop - repeat last (with dict) selected command X times
    fSWAP     PV (present value) of interest rate (%) and duration (periods)
    fBSP      Calculate 2 roots of quadratic equation xx+px+q=0 (enter p q)
  Complex number operations: (Y=imaginary and X=real part)
    fTAN      Complex operation demanded (the next / * - + operation is complex)
  Statistics
    SUM+ SUM- Add/remove number to/from statistics register
    g0 g.     Mean value and standard deviation
    fSUM      Parameters a and b of linear regression (L.R., y=a*x+b, X=a, Y=b)
    f.        Calculate function value y of L.R.
    gGSB      Clears statistics registers (5=y, 6=xy, 7=n, 8=x, 9=xx)
  Function analysis
    fSQRT-INV Set/unset math function y=f(x) (FNA-FNE) - see notification icon
    R/S       Calculate y=f(x)
    fR/S      Plot function (see above)
    f/ f*     Solve (start at X), integrate (from Y to X)
    SST       Slope (at X)
  Conversions
    f7 8 9    in>cm, smi>km, nmi>km, (g...vice versa)
    f4 5 6    gal>l, °F>°C, lbs>kg, (g...vice versa)
    f1 2 3    polar>rect, h>h.ms, deg>rad, (g...vice versa)


____________________

CMD - Symbolic
____________________

The symbolic calculator CMD always calculates the result of commands entered in
the line editor (see above). Quit CMD with g.


____________________

RACK - Spreadsheet
____________________

RACK offers a small (4x8 cells) spreadsheet application where every cell refers
to the user programs named A1 to D8 (ie editable with MED). In addition to the
program every cell can hold a (7 character) text which is displayed (even if a
cell hosts a program).

Keys:
  g         Quit
  f         Toggle view (2x2 and 1x1 with big font)
  2 4 6 8   Navigation (Down/Left/Right/Up)
  / 5 ENTER Edit cell program (or select link for a cell reference)
  *         Edit cell text
  GSB ROT   Copy and paste the cell program (overwrites existing program!)
  BSP       Delete complete sheet (!)
  R/S       Run CALC (side calculation) (copy result to LINE EDITOR clipboard)
            Useful for inserting physical constants to RACK programs

When demanding a cell reference (while editing a user program) press RCL to go
back to the RACK navigation mode, navigate to the demanded cell and press /, 5
or ENTER to insert the reference link.


____________________

TTOP - Tabletop
____________________

TTOP is a tabletop calculator that enables (simple) calculations with big
numbers (even in HEX format) with up to 3 decimals (set with f-key). TTOP uses a
"dynamic fixed point arithmetic" which raises the numerical precision with the
number of decimals.

TTOP supports the following functions:
  g       Quit
  f       Set (up to 3) decimals
  + - * / Basic operation
  CHS     Negate TOS (ends number input)
  EEX     Push Y*10^X to the stack (Y*16^X in HEX mode)
  ENTER   Enter number (stack lift) or duplicate TOS
  BSP     Clear last number
  SWAP    Swap X and Y
  ROT     Rotate 3 stack elements
  SQRT    Calculate square root
  POW     % (calculate X percent of Y) - base Y remains for addition
  SIN     HEX mode
  SUM+    NAND ~(X & Y) ... useful in HEX mode
  STO RCL Store TOS or push stored number to stack (store 0 to delete)


____________________

CPU - CPU-Simulator
____________________

CPU simulates a simple 8-bit-CPU with a 64 byte memory and two registers
(accumulator A and register R). It can display an one byte output (in decimal,
hex and as character (if appropriate)).

Display:
  [Memory] [Accumulator] [Register]
  [ExePointer]  [Out(dec/hex/char)]

Keys:
  g        Quit
  BSP      Clear registers and output
  f        Clear entire app content (incudes memory!)
  SQRT SST De/increment memory view
  EXP GTO  De/increment memory view by 5 steps
  0.../    Shift nibble to memory
  R/S      Run code

CPU commands:
  0n  n2A
  1n  0:SWP 1:++ 2:-- 3:+ 4:- 5:* 6:/ 7:% 8:& 9:| a:~ b:^ c:OUT d:IN e:PSE f:END
  2n  n<8:<<n n>=8:>>n
  3a  JP to 4*a (jump to memory node address)
  na  40<=A2a<80<=a2A<c0<=JZa<=ff

Explanation:
  n2A       0000 nnnn                     Shift nibble n to A
  SWP       0001 0000                     Swap A and R
  ++ --     0001 0001/0010                In/decrement A
  + - * /   0001 0011/0100/0101/0110      Basic math (A=AxR)
  % & | ~ ^ 0001 0111/1000/1001/1010/1011 Modulo/And/Or/Not/Xor
  OUT       0001 1100                     Display A (output)
  IN        0001 1101                     Input keypress (0.../ = 0...f) to A
  PSE       0001 1110                     Pause till keypress
  END       0001 1111                     Stop execution
  << >>     0010 0nnn/1nnn                Shift A n positions left/right
  JPn       0011 nnnn                     Jump to memory node address (n nnn0)
  A2a a2A   01aa/10aa aaaa                Copy A to address a or vice versa
  JZa       11aa aaaa                     Jump to address a if A is 0


____________________

NOTE - Text Editor
____________________

NOTE is a (very) simple text editor that uses the LINE EDITOR. It can manage up
to 6 short (up to 128 characters) text files (ie formulae or todo lists).

Keys:
  g        Quit
  STO RCL  Save/load file to/from one of 6 slots
  8 2 9 3  Up/down/PgUp/PgDown
  BSP -    Delete line
  TAN      Delete/new file
  *        Join line(s)
  + SUM    Insert new line after/before recent line
  /        Split line (at last edit cursor position)
  R/S      Run CALC for side calculation (copy result to clipboard)
  Other    Edit recent line with LINE EDITOR




```
