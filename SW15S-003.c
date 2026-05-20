/*

  save rack spreadsheets
  serial features???
  DO funktioniert in RACK nicht
  bei jedem mp=xxx ein pts() einfügen, um is[] zu leeren
  keyscan routine zeilenweise
  +++++'s
  getkey cout/disp variables
  more conditions

+++++ nicht besetzte CALC tasten
static const byte key2mpos[]={ // Convert keycode to name[] position
 //SST >>GTO
 //RS >> GSB

 //SUM >> RE-IM, MATRIX
 //SST >> LBL
 //RS >> clearPRGRM

 //RS >>> P/R RTN
};





//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8

This software is protected by the BSD 3 Clause License
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
  CPU  ... Simulates a simple 8-bit-CPU with 64 bytes memory
  NOTE ... Simple text editor for notes
  DATE ... Calendar
  TIME ... World time clock
  MARK ... Mark up to 4 scores
  E6B  ... Flight planner
  SUGR ... Insulin calculator
  ASC  ... ASCII table
  PT   ... Periodic Table of the Elements
  D&I  ... Rules and formulas for derivatives and integrals
  RULE ... Slide Rule Simulator
  FIT  ... Addictive 2048 game

On the right side of the screen you see some extra information like the battery
level, date (day) and time (24 hour format).


____________________

STATUS - ANNUNCIATOR
____________________

Depending on the running application, the display shows specific data on the
right side. For example, the annunciator always displays the battery level icon.
Please note that the battery level is a momentarily value that varies due to the
momentarily activity of the calculator. But if you see the empty battery symbol
quite often you might consider changing the battery.

In addition, the first status line shows pressed function keys (f, g), hyperbolic
function keys (h, H), the keyboard mode (numeric, keypad, qwert), the number of
decimals (tabletop calculator), a running symbol (sand clock) and a reference
link symbol (spreadsheet).

The second status line annunciates the dictionary entry number, a user memory
usage number, a text editor usage number, the hex mode (16-symbol), a following
complex number operation (C) or the cell address (i.e. A1).

Both applications, the spreadsheet (RACK) and the periodic table of elements (PT)
show a graphic 'cursor' location black bar, where one white pixel represents the
location of the cell (respectively the element) on the spreadsheet (respectively
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
  8 4 2 6 Previous/next entry
  7 1     Home/end
  9 3     PgUp/PgDown
  5 ENTER Select
  SQRT    Jump to physical constants
  EXP-TAN Fast decade access: Jump in 10% steps

On the screen the "big sized" command is the selected, while on its left/right
side the previous/next command is shown with small font. On the right side of
the screen the command number is displayed.


____________________

LINE EDITOR
____________________

Many applications (CMD, MED, RACK, NOTE, D&I) use this line editor to edit a
string. With a double click of the f key (ff) the user can select one of 3
different keyboard input possibilities:

General keys:
  fg    Regular shift functions
  ff    Next keyboard mode (NUMPAD, CURPAD, KEYBOARD)
  fg    Open DICT
  gg    Quit
  fSTO  Store text to clipboard
  fRCL  Recall clipboard and overwrite edit string

- NUMPAD: This is the kind of keyboard the HP15 uses. For instance, pressing the
  number 8 insert the character 8 to the edited string and pressing the EXP-key
  inserts the characters E, X and P to the edited string. Function keys can be
  selected with the f or g key.
    gg       Quit
    SST GTO  Cursor right/left
    R/S GSB  5 x Cursor left/right
    BSP      Backspace
    gBSP     Clear edit string
    ENTER    Insert space (doesn't work with RACK)

- CURSOR PAD: The number keys act like a cursor pad. For instance, 8 selects UP,
  7 selects HOME and 5 (usually) selects. Hence the cursor points to a matrix of
  characters shown on the screen. This is the way to enter special characters
  like '%'.
    7 Home  8 Up     9 PgUp
    4 Left  5 Enter  6 Right
    1 End   2 Down   3 PgDown

    gg        Quit
    SST GTO   Cursor right/left
    R/S GSB   5 x Cursor left/right
    BSP       Backspace
    g-BSP     Clear edit string

- QWERT KEYBOARD: Unbelievable but the keyboard of the HP15 can provide a
  typewriter keyboard (for those who use to write blindly). The 0 key simulates
  the space key, the multiply key the backspace, the subtract key latches the
  shift key and the dot, 3, SUM+ and + keys provide cursor keys.
    gg          Quit
    fg          Dictionary
    -           Toggle caps lock
    * g* gBSP   Backspace, Clear edit string
    . SUM 3 +   Cursor keys (left/up/down/right) - up/down = 5 x left/right

On the right side of the screen there is a symbol, which shows the selected
input method (1 for NUMPAD, a 4-cursor-symbol for the CURSOR PAD and a keyboard
symbol for the QWERT-KEYBOARD).


____________________

MED - Memory Editor
____________________

MED edits and manages the central memory, where intrinsic, built-in and user
programs are stored.
The second line of the display shows the name of the selected program/command,
its number and the total number of programs. The first line of the display shows
the commands used in this program.
The number in the lower right corner shows how much of the available program
memory is occupied (i.e. 7 means that more than 70% is used).
Please note that empty programs/strings are replaced by "NOP" automatically.

For navigation MED uses the CURSOR PAD:
  7 Home  8 Previous  9 PgUp
  4 Left  5 Edit      6 Right
  1 End   2 Down      3 PgDn

Other keys:
  g       Quit
  / 5     Edit program (with LINE EDITOR)
  *       Edit program name (with LINE EDITOR)
  +       Insert new (user) program (named NEW with NOP command)
  -       Delete (user) program - (intrinsic programs cannot be deleted!)
  STO RCL Copy|Paste program to selected program (overwrites!)
  SQRT    Jump to physical constants
  EXP-TAN Fast decade access: Jump in 10% steps

There are "special sections" (reserved names) in the program memory:
  FNA-FNE Used for five math functions to examine/calculus/plot in CALC
  A1-D4   Cell names/programs used in RACK
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
 gg   Quit
 fg   Execute command via dictionary (i.e. physical constant (start with 'c')
 fSST Toggle display size
 fEEX Show TOS mantissa (15 digits)

CALC supports the following functions:
  Basic
    0-9.      Number input
    ENTER     Enter number (stack lift) or duplicate TOS (DUP)
    + - * /   Basic operation
    gRCL      Modulo
    CHS       Negate TOS (ends number input)
    EEX       Push Y*10^X to the stack
    BSP gBSP  Clear number entry or TOS, clear stack
    ROT dn/up Rotate 3 stack elements (ZYX->XZY/ZYX->YXZ)
    SWAP      Swap X and Y
    LASTx     Push last ENTERed number to stack
    STO RCL   Store Y to register number X (0-9) or push register X to stack
    fSIN      Toggle HEX mode (enter numbers >9 with a dot (i.e. .1=a, .6=f))
    g* g/     Conditions - provides 1 (TRUE) if X=0 respective X<=Y (else 0)
    fENTER    Generate random (16-bit) number
    gSST      PICK and push X-th stack element
  Advanced mathematics
    SQRT, SQR, EXP, LN, 10^X, LOG, Y^X, %, 1/X, delta%,
    FRAC, INT, ABS, PI, Pxy, Cxy, lnGAMMA (f0),
    SIN, COS, TAN, aSIN, aCOS, aTAN, SINH, COSH, TANH, aSINH, aCOSH, aTANH
    gSWAP     OVER (YX->YXY)
    g-        NAND ~(X & Y) ... useful in HEX mode (fSIN)
    fCOS      DO loop - repeat last (with DICT) selected command X times
    fSWAP     PV (present value) of interest rate (%) and duration (periods)
    fBSP      Calculate 2 roots of quadratic equation xx+px+q=0 (enter p q)
  Complex number operations: (Y=imaginary and X=real part)
    fTAN      Demand next operation (+ - * / DUP SWAP 1/x) as complex number
              operation (rectangular only)
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
to the user programs named A1 to D8 (i.e. editable with MED). In addition to
the program every cell can hold a (7 character) text which is displayed (even
if a cell hosts a program).

Keys:
  g         Quit
  f         Toggle view (2x2 and 1x1 with big font)
  2 4 6 8   Navigation (Down/Left/Right/Up)
  / 5 ENTER Edit cell program (or select link for a cell reference)
  *         Edit cell text
  GSB ROT   Copy and paste the cell program (overwrites existing program!)
  BSP       Delete complete sheet (!)
  R/S       Run CALC (side calculation) (copy result to LINE EDITOR clipboard)
            Useful for inserting physical constants into RACK programs

When demanding a cell reference (while editing a user program) press RCL to go
back to the RACK navigation mode, navigate to the demanded cell and press /, 5
or ENTER to insert the reference link.


____________________

TTOP - Tabletop
____________________

TTOP is a tabletop calculator that enables (simple) calculations with big
numbers (even in HEX format) with up to 3 decimals (set with f-key). TTOP uses a
"Dynamic Fixed Point Arithmetic" which raises the numerical precision with the
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

CPU simulates a simple 8-bit-CPU with a 64 bytes memory and two registers
(accumulator A and register R). It can display a one byte output (in decimal,
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
to 6 short (up to 128 characters) text files (i.e. formulas or todo lists).

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


____________________

DATE - Calendar
____________________

DATE offers a weekly calendar.

Keys:
  g   Quit
  0   Toggle the beginning of the week (Sun or Mon)
  5   Switch to "today's month"
  7 1 First/last month of the year
  4 6 Previous/next week (displayed inverse)
  8 2 Previous/next month
  9 3 Previous/next year


____________________

TIME - World Clock
____________________

TIME offers a world time clock. The first clock shows the home time zone, while
the other two clocks show selectable time zones. Please note that the time
displayed is a snapshot and will not refresh automatically.

Keys:
  g                  Quit
  SQRT SST           Select home time zone
  EXP GTO POW10 SIN  Select two time zones
  R/S GSB ROT        Reset time zones


____________________

MARK - Scores
____________________

MARK lets you display and store 2 or 4 scores (AD or ABCD).

Keys:
  g             Quit
  ENTER         Toggle 2 or 4 scores
  SQRT SST R/S  In/decrement or clear score A
  EXP GTO GSB   In/decrement or clear score B
  9 6 3         In/decrement or clear score C
  / * -         In/decrement or clear score D
  BSP           Clear all scores


____________________

E6B - Flight Planner
____________________

The E6B flight computer is a legendary circular slide rule used in aviation.
This app has all capabilities of E6B for flight planning and makes intense use
of RACK (see above) for all calculations.

Select one of 9 categories (with 8, 2 and 5/ENTER):
  TAS     True Air Speed as function of IAS (Indicated Air Speed) and OAT
          (Outside Air Temperature)
  WCA-GS  Wind Correction Angle (deg) as function of WS (Wind Speed), WA (Wind
          Angle, deg) and TAS
          GS (Ground Speed) as function of TAS, WCA, WS and WA
  ETA     EET (Estimated Elapsed Time, min) as function of Distance (NM) and GS
          (kts)
          ETA (Estimated Time of Arrival, h.mm) as function of AT (Actual Time,
          h.mm) and EET
  ALT     PA (Pressure Alt) as function of EIA (Estimated Indicated Alt) and QNH
          (Question Nautical Height)
          DA (Density Alt) as function of OAT and PA
          TA as function of EIA, OAT and PA
  DESCENT TOD (Top Of Descent, NM) as function of Hight1 (ft), Height2 ft) and
          ANG (Descent Angle, deg)
          ROD (Rate Of Descent, fpm) as function of GS (kt) and ANG (deg)
  FUEL    GPH (Gallons Per Hour) as function of FUEL-BURNED (gal) and TIME (h)
          and ENDURANCE (h) as function of FUEL (gal) and GPH
          FR (Fuel Range, NM) as function of ENDURANCE (h) and GS (kts)
  OCC     (Off Course Correction) ... TC (Total Correction, deg) as function of
          DistanceOFF (NM),
          DistanceFLOWN (NM) and DistanceREMAIN (NM)
  UNIT    cm>in, in>cm, m>ft, ft>m, mps>fpm, fpm>mps, km>sm, sm>km, km>nm,
          nm>km, nm>sm, sm>nm
  MISC    l>gal, gal>l, C>F, F>C, kg>lbs, lbs>kg
  g       Quit


____________________

SUGR
____________________

SUGR is an insulin calculator that calculates the instantly needed insulin dose
(and fat caused dose needed in 3 hours) depending of the food consumed, the
actual blood sugar, the blood sugar target, the Insulin-Sensitivity-Factor
(mg/dL lowered by 1 Unit of insulin) and the last injected insulin units
(including the time elapsed since then).

Keys of food selection:
  g        Quit
  ENTER 5  Add selected food
  8 2 7 1  Previous/next food, Home and End
  9 3      Previous/next food category

Keys of insulin calculator:
  g             Quit
  ENTER 5       Goto food selection
  0             Clear collected food
  SQRT SST R/S  In/decrease and reset actual blood glucose (mg/dL)
  EXP GTO GSB   In/decrease and reset target blood glucose (mg/dL)
  POW10 SIN ROT In/decrease and reset Insulin-Sensitivity-Factor (mg/dL)
  POW COS SWAP  In/decrease and reset last dose (units)
  INV TAN BSP   In/decrease and reset elapsed time since last dose (h)

If you are used to using values for blood glucose in mmol/L all you have to do
is to multiply your data for actual/target blood glucose and ISF with 18.0156
(atomic weight of glucose molecule).


____________________

ASC - ASCII Table
____________________

ASC provides a line-by-line table of ASCII (and SW15S) characters.

Keys:
  g  Quit
  8 2 De/increase line in ASCII table


____________________

PT - Periodic Table
____________________

PT shows data of all elements of the Periodic Table of Elements. The first line
displays atomic number, symbol, period, group, number of valence electrons and
atomic mass. The second line displays the melting temperature (in K), the
boiling temperature (in K), the electronegativity (Pauling scale) and the
density (kg/m^3).
Please note that groups 1,2,13-18 are main groups and 3-12 are subgroups
(transition metals).

Keys:
  g  Quit
  8 2 9 3 7 1 De/increase Page down/up Pos1/End atomic number of elements
  - + / *     De/increase Pos1/End elements in alphabetical order (89 Ar ... 40 Zr)
  SUM         Alphabetically middle element (12 Mg)


____________________

D&I - DIFF&INT
____________________

D&I shows rules and formulas for derivatives and integrals.

Keys:
  g            Quit
  8 2 9 3 7 1  De/increase Page down/up Pos1/End formula number
  4 6          Left/right ... switch between derivative (4) and integral (6) view
  5            View (long) formula with LINE EDITOR


____________________

RULE - Slide Rule
____________________

RULE is a simulation of a historic slide rule for reasons of education and
reminiscence.

Keys:
  g       Quit
  SQRT /  Slide one pixel left/right
  EXP 9   Slide 5 pixel left/right
  POW10 8 Slide 10 pixel left/right
  POW 7   Slide 20 pixel left/right

____________________

FIT - 2048 game
____________________

FIT offers an addictive 2048 game. Due to the restricted display the original
4x4-screen is split to 2x2x4 (see below) which adds an additional challenge.
FIT uses its own font according to domino tiles (0-9), followed by 1/2/3/4 big
points (10-13) and a small/large grey area (14 and 15).

Display split (original 4x4 to 2x2x4):
 aeim  >
 bfjn  >  efgh lkji
 cgko  >  abcd ponm
 dhlp  >

Keys:
  g   Quit
  f   New game
  4 1 Shift left
  6 3 Shift right
  8 5 Shift up
  2   Shift down


____________________

SPECIFICATIONS
____________________

  LINE EDITOR: 128   Maximal string length
  PRECISION:   64    bit double (15-17 digits of precision)
  CALC:        8    Stack size
               16    Address stack size
               0.001 Solver step accuracy (delta-x)
               20    Maximal solver iterations
               10    Integral steps/stripes
               2048  Size of memory (holds core, built-in and user programs)
               54    Core programs
               123   Builtin programs
               30    User programs
               4     Length of program names
               10    Double numbers to store
               32x16 Plot dimensions
  RACK:        4x8   Spreadsheet dimensions (4 cols, 8 rows)
               2x2   Displayed cells (alternatively 1x1)
  TTOP:        4     Stack size
               0-3   Decimals
  CPU:         64    Memory size
  NOTE:        255   Size of text file

*/


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  I N C L U D E S ,   P R O T O T Y P E S ,   G L O B A L

#include <string.h>
//#include <stdlib.h>

#include "sysinit.h"
#include "core/cpu/cpu.h"
//#include "core/timer32/timer32.h"
#include "core/pmu/pmu.h"
#include "drivers/lcd/bitmap/st7565/st7565.h"
#include "drivers/keyboard/keyboard.h"
#include "drivers/vref/vref.h"
#include "rtc.h"
//#include <math.h>

#include "qfplib-m0-full.h" // QFP library (including double)
#define dadd qfp_dadd // Short QFP defines
#define datan(y,x) qfp_datan2((y),(x))
#define dcos qfp_dcos
#define ddiv qfp_ddiv
#define dexp qfp_dexp
#define dln qfp_dln
#define dmul qfp_dmul
#define dsub qfp_dsub
#define d2ll qfp_double2int64
#define ll2d qfp_int642double

static void _div(void); // /
static void _inv(void); // 1/X
static void _mul(void); // *
static void _deg2rad(void); // DEG2RAD
static void _rad2deg(void); // RAD2DEG
static void _swap(void); // SWAP

static void _tswap(void); // TT SWAP
static void _tmul(void); // TT *
static void _trot(void); // TT ROT

typedef uint8_t byte; // Define unsigned byte
typedef int8_t sbyte; // Define signed byte
#define END 255 // End byte, terminator
#define PI 3.141592653589793238 // PI
#define RADEG 57.29577951308232088 // RAD2DEG


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  F O N T

#define FSIZES 1 // Font size (small or large)
#define FSIZEL 2
static byte fsize=FSIZES; // Font size
#define FW 5 // Font width
#define FWW (FW+1) // Font width (including separator pixel)
#define FOFFSET ' '

static const byte font[]={ // 6x8 font
  0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, // spc
  0b00000000, 0b00000000, 0b00101111, 0b00000000, 0b00000000, // !
  0b00000000, 0b00000111, 0b00000000, 0b00000111, 0b00000000, // "
  0b00010100, 0b01111111, 0b00010100, 0b01111111, 0b00010100, // #
  0b00101110, 0b00101010, 0b01111111, 0b00101010, 0b00111010, // $
  0b00100011, 0b00010011, 0b00001000, 0b01100100, 0b01100010, // %
  0b00110110, 0b01001001, 0b01010101, 0b00100010, 0b01010000, // &
  0b00000000, 0b00001011, 0b00000111, 0b00000000, 0b00000000, // '
  0b00000000, 0b00011100, 0b00100010, 0b01000001, 0b00000000, // (
  0b00000000, 0b01000001, 0b00100010, 0b00011100, 0b00000000, // )
  0b00010100, 0b00001000, 0b00111110, 0b00001000, 0b00010100, // *
  0b00001000, 0b00001000, 0b00111110, 0b00001000, 0b00001000, // +
  0b00000000, 0b01011000, 0b00111000, 0b00000000, 0b00000000, // ,
  0b00001000, 0b00001000, 0b00001000, 0b00001000, 0b00001000, // -
  0b00000000, 0b01100000, 0b01100000, 0b00000000, 0b00000000, // .
  0b00100000, 0b00010000, 0b00001000, 0b00000100, 0b00000010, // /
  0b01111111, 0b01000001, 0b01000001, 0b01000001, 0b01111111, // 0
  0b01000000, 0b01000010, 0b01111111, 0b01000000, 0b01000000, // 1
  0b01111001, 0b01001001, 0b01001001, 0b01001001, 0b01001111, // 2
  0b01000001, 0b01001001, 0b01001001, 0b01001001, 0b01111111, // 3
  0b00001111, 0b00001000, 0b00001000, 0b01111111, 0b00001000, // 4
  0b01001111, 0b01001001, 0b01001001, 0b01001001, 0b01111001, // 5
  0b01111111, 0b01001001, 0b01001001, 0b01001001, 0b01111000, // 6
  0b00000011, 0b00000001, 0b00000001, 0b00000001, 0b01111111, // 7
  0b01111111, 0b01001001, 0b01001001, 0b01001001, 0b01111111, // 8
  0b00001111, 0b01001001, 0b01001001, 0b01001001, 0b01111111, // 9
  0b00000000, 0b00110110, 0b00110110, 0b00000000, 0b00000000, // :
  0b00000000, 0b01011011, 0b00111011, 0b00000000, 0b00000000, // ;
  0b00001000, 0b00010100, 0b00100010, 0b01000001, 0b00000000, // <
  0b00010100, 0b00010100, 0b00010100, 0b00010100, 0b00010100, // =
  0b00000000, 0b01000001, 0b00100010, 0b00010100, 0b00001000, // >
  0b00000011, 0b00000001, 0b01011001, 0b00001001, 0b00001111, // ?
  0b01111011, 0b01001001, 0b01111001, 0b01000001, 0b01111111, // @
  0b01111111, 0b00001001, 0b00001001, 0b00001001, 0b01111111, // A
  0b01111111, 0b01001001, 0b01001001, 0b01001111, 0b01111000, // B
  0b01111111, 0b01000001, 0b01000001, 0b01000001, 0b01000000, // C
  0b01111111, 0b01000001, 0b01000001, 0b01100011, 0b00111110, // D
  0b01111111, 0b01001001, 0b01001001, 0b01001001, 0b01000001, // E
  0b01111111, 0b00001001, 0b00001001, 0b00001001, 0b00000001, // F
  0b01111111, 0b01000001, 0b01001001, 0b01001001, 0b01111001, // G
  0b01111111, 0b00001000, 0b00001000, 0b00001000, 0b01111111, // H
  0b01000001, 0b01000001, 0b01111111, 0b01000001, 0b01000001, // I
  0b01100000, 0b01000001, 0b01000001, 0b01000001, 0b01111111, // J
  0b01111111, 0b00001000, 0b00001000, 0b00001111, 0b01111000, // K
  0b01111111, 0b01000000, 0b01000000, 0b01000000, 0b01000000, // L
  0b01111111, 0b00000001, 0b00001111, 0b00000001, 0b01111111, // M
  0b01111111, 0b00000010, 0b00000100, 0b00001000, 0b01111111, // N
  0b01111111, 0b01000001, 0b01000001, 0b01000001, 0b01111111, // O
  0b01111111, 0b00001001, 0b00001001, 0b00001001, 0b00001111, // P
  0b01111111, 0b01000001, 0b01110001, 0b01000001, 0b01111111, // Q
  0b01111111, 0b00001001, 0b00001001, 0b01111001, 0b01001111, // R
  0b01101111, 0b01001001, 0b01001001, 0b01001001, 0b01111011, // S
  0b00000001, 0b00000001, 0b01111111, 0b00000001, 0b00000001, // T
  0b01111111, 0b01000000, 0b01000000, 0b01000000, 0b01111111, // U
  0b00011111, 0b00100000, 0b01000000, 0b00100000, 0b00011111, // V
  0b01111111, 0b01000000, 0b01111000, 0b01000000, 0b01111111, // W
  0b01100011, 0b00010100, 0b00001000, 0b00010100, 0b01100011, // X
  0b01001111, 0b01001000, 0b01111000, 0b01001000, 0b01001111, // Y
  0b01100001, 0b01010001, 0b01001001, 0b01000101, 0b01000011, // Z
  0b00000000, 0b01111111, 0b01000001, 0b01000001, 0b00000000, // [
  0b00000010, 0b00000100, 0b00001000, 0b00010000, 0b00100000, // backslash
  0b00000000, 0b01000001, 0b01000001, 0b01111111, 0b00000000, // ]
  0b00000100, 0b00000010, 0b00000001, 0b00000010, 0b00000100, // ^
  0b01000000, 0b01000000, 0b01000000, 0b01000000, 0b01000000, // _
  0b00100010, 0b00100111, 0b00100010, 0b01110010, 0b00100010, // ` leftright
  0b01110000, 0b01010100, 0b01010100, 0b01010100, 0b01111100, // a
  0b01111111, 0b01000100, 0b01000100, 0b01000100, 0b01111100, // b
  0b01111100, 0b01000100, 0b01000100, 0b01000100, 0b01000000, // c
  0b01111100, 0b01000100, 0b01000100, 0b01000100, 0b01111111, // d
  0b01111100, 0b01010100, 0b01010100, 0b01010100, 0b00011100, // e
  0b00000000, 0b00000100, 0b01111111, 0b00000101, 0b00000001, // f
  0b00011100, 0b01010100, 0b01010100, 0b01010100, 0b01111100, // g
  0b01111111, 0b00000100, 0b00000100, 0b00000100, 0b01111100, // h
  0b01000000, 0b01000100, 0b01111101, 0b01000000, 0b01000000, // i
  0b01100000, 0b01000000, 0b01000100, 0b01111101, 0b00000000, // j
  0b01111111, 0b00010000, 0b00010000, 0b00011100, 0b01110000, // k
  0b00000000, 0b01111111, 0b01000000, 0b01000000, 0b00000000, // l
  0b01111100, 0b00000100, 0b00011100, 0b00000100, 0b01111100, // m
  0b01111100, 0b00000100, 0b00000100, 0b00000100, 0b01111100, // n
  0b01111100, 0b01000100, 0b01000100, 0b01000100, 0b01111100, // o
  0b01111100, 0b00100100, 0b00100100, 0b00100100, 0b00111100, // p
  0b00111100, 0b00100100, 0b00100100, 0b00100100, 0b01111100, // q
  0b01111100, 0b00000100, 0b00000100, 0b00000100, 0b00001100, // r
  0b01011100, 0b01010100, 0b01010100, 0b01010100, 0b01110100, // s
  0b00000000, 0b00000100, 0b01111111, 0b01000100, 0b01000000, // t
  0b01111100, 0b01000000, 0b01000000, 0b01000000, 0b01111100, // u
  0b00000100, 0b01111100, 0b00100000, 0b00010000, 0b00001100, // v
  0b01111100, 0b01000000, 0b01110000, 0b01000000, 0b01111100, // w
  0b01000100, 0b00100100, 0b01111100, 0b01001000, 0b01000100, // x
  0b00011100, 0b01010000, 0b01010000, 0b01010000, 0b01111100, // y
  0b01000100, 0b01100100, 0b01010100, 0b01001100, 0b01000100, // z
  0b00001000, 0b01111111, 0b01000001, 0b01000001, 0b00000000, // {
  0b00000000, 0b00000000, 0b01111111, 0b00000000, 0b00000000, // |
  0b00000000, 0b01000001, 0b01000001, 0b01111111, 0b00001000, // }
  0b00011100, 0b00000100, 0b00011100, 0b00010000, 0b00011100, // ~
#define FBLACK 127 // black
 0b11111111, 0b11110111, 0b11100011, 0b11000001, 0b11111111,
//// INVERS, LETTERS
#define FI0 128 // 0 invers
  0b01111111, 0b01000001, 0b01011101, 0b01000001, 0b01111111,
#define FI1 129 // 1 invers
  0b01111111, 0b01011011, 0b01000001, 0b01011111, 0b01111111,
#define FI2 130 // 2 invers
  0b01111111, 0b01000101, 0b01010101, 0b01010001, 0b01111111,
#define FI3 131 // 3 invers
  0b01111111, 0b01010101, 0b01010101, 0b01000001, 0b01111111,
#define FI4 132 // 4 invers
  0b01111111, 0b01110001, 0b01110111, 0b01000001, 0b01111111,
#define FI5 133 // 5 invers
  0b01111111, 0b01010001, 0b01010101, 0b01000101, 0b01111111,
#define FI6 134 // 6 invers
  0b01111111, 0b01000001, 0b01010101, 0b01000101, 0b01111111,
#define FI7 135 // 7 invers
  0b01111111, 0b01111001, 0b01111101, 0b01000001, 0b01111111,
#define FI8 136 // 8 invers
  0b01111111, 0b01000001, 0b01010101, 0b01000001, 0b01111111,
#define FI9 137 // 9 invers
  0b01111111, 0b01010001, 0b01010101, 0b01000001, 0b01111111,
#define FIA 138 // A invers
  0b01111111, 0b01000001, 0b01110101, 0b01000001, 0b01111111,
#define FIB 139 // B invers
  0b01111111, 0b01000001, 0b01010101, 0b01000001, 0b01111111,
#define FIC 140 // C invers
 0b01111111, 0b01000001, 0b01011101, 0b01011101, 0b01111111,
#define FID 141 // D invers
 0b01111111, 0b01000001, 0b01011101, 0b01100011, 0b01111111,
#define FIE 142 // E invers
  0b01111111, 0b01000001, 0b01010101, 0b01010101, 0b01111111,
#define FIF 143 // E invers
  0b01111111, 0b01000001, 0b01110101, 0b01110101, 0b01111111,
#define FAEL 144 // Ä
  0b01111100, 0b00010101, 0b00010100, 0b00010101, 0b01111100,
#define FAES 145 // ä
  0b01110000, 0b01010101, 0b01010100, 0b01010101, 0b01111100,
#define FAOL 146 // Ao
  0b01111100, 0b00010111, 0b00010101, 0b00010111, 0b01111100,
#define FAOS 147 // ao
  0b01110100, 0b01010111, 0b01010101, 0b01010111, 0b01111100,
#define FANEL 148 // AE
  0b01111111, 0b00001001, 0b01111111, 0b01001001, 0b01001001,
#define FANES 149 // ae
  0b01110100, 0b01010100, 0b01111100, 0b01010100, 0b01011100,
#define FOEL 150 // Ö
  0b01111100, 0b01000101, 0b01000100, 0b01000101, 0b01111100,
#define FOES 151 // ö
  0b01111000, 0b01001010, 0b01001000, 0b01001010, 0b01111000,
#define FNTILDEL 152 // N~
  0b01111100, 0b00001001, 0b00010001, 0b00100001, 0b01111100,
#define FNTILDES 153 // n~
  0b01111000, 0b00001010, 0b00001010, 0b00001010, 0b01111000,
#define FUEL 154 // Ü
  0b01111100, 0b01000001, 0b01000000, 0b01000001, 0b01111100,
#define FUES 155 // ü
  0b01111000, 0b01000010, 0b01000000, 0b01000010, 0b01111000,
#define FQMFLIP 156 // ? flipped
  0b01100000, 0b01000000, 0b01001101, 0b01001000, 0b01111000,
//// GREEK
#define FALPHA 157 // alpha
  0b01111100, 0b01000100, 0b01000100, 0b00111000, 0b01000100,
#define FBETA 158 // beta
  0b01111111, 0b00000001, 0b00000101, 0b00100111, 0b00111100,
#define FDELTAL 159 // delta
  0b01100000, 0b01011000, 0b01000110, 0b01011000, 0b01100000,
#define FDELTAS 160 // delta small
  0b01111100, 0b01000100, 0b01000111, 0b01111101, 0b00000001,
#define FMU 161 // mu
  0b01111110, 0b01010000, 0b00010000, 0b00011110, 0b00010000,
#define FPI 162 // PI
  0b00000110, 0b01111110, 0b00000010, 0b01111110, 0b00000010,
#define FSUM 163 // sum
  0b01110111, 0b01011101, 0b01001001, 0b01000001, 0b01100011,
#define FSIGMA 164 // sigma
  0b01111100, 0b01000100, 0b01000100, 0b01111100, 0b00000100,
#define FTHETA 165 // theta
  0b00111110, 0b01001001, 0b01001001, 0b01001001, 0b00111110,
#define FOMEGA 166 // omega
  0b01011111, 0b01110001, 0b00000001, 0b01110001, 0b01011111,
//// ARROWS
#define FARRL 167 // arrow left
  0b00001000, 0b00011100, 0b00111110, 0b00001000, 0b00001000,
#define FARRD 168 // arrow down
  0b00001000, 0b00011000, 0b00111111, 0b00011000, 0b00001000,
#define FARRU 169 // arrow up
  0b00001000, 0b00001100, 0b01111110, 0b00001100, 0b00001000,
#define FARRR 170 // arrow right
  0b00001000, 0b00001000, 0b00111110, 0b00011100, 0b00001000,
#define FARRLU 171 // arrow left up
  0b00111110, 0b00000110, 0b00001010, 0b00010010, 0b00100010,
#define FARRRU 172 // arrow right up
  0b00100010, 0b00010010, 0b00001010, 0b00000110, 0b00111110,
#define FARRLD 173 // arrow left down
  0b00111110, 0b00110000, 0b00101000, 0b00100100, 0b00100010,
#define FARRRD 174 // arrow right down
  0b00100010, 0b00100100, 0b00101000, 0b00110000, 0b00111110,
#define FCURL 175 // cursor left
  0b00001000, 0b00011100, 0b00111110, 0b01111111, 0b00000000,
#define FCURD 176 // cursor down
  0b00000110, 0b00011110, 0b01111110, 0b00011110, 0b00000110,
#define FCURU 177 // cursor up
  0b00110000, 0b00111100, 0b00111111, 0b00111100, 0b00110000,
#define FCURR 178 // cursor right
  0b00000000, 0b01111111, 0b00111110, 0b00011100, 0b00001000,
#define FCURUD 179 // cursor up down
  0b00010100, 0b00110110, 0b01110111, 0b00110110, 0b00010100,
#define FSHIFT 180 // shift
  0b00000100, 0b01111110, 0b01111111, 0b01111110, 0b00000100,
#define FNAV 181 // navigation
  0b00011100, 0b01001001, 0b01100011, 0b01001001, 0b00011100,
#define FDIST 182 // distance
  0b00000000, 0b00100010, 0b01111111, 0b00100010, 0b00000000,
#define FENTER 183 // enter
  0b00010000, 0b00111000, 0b01111100, 0b00010000, 0b00011111,
//// MATH
#define FDEG 184 // degree
  0b00000000, 0b00000111, 0b00000101, 0b00000111, 0b00000000,
#define FDIV 185 // divide
  0b00001000, 0b00001000, 0b00101010, 0b00001000, 0b00001000,
#define FMULT 186 // mult
  0b00100010, 0b00010100, 0b00001000, 0b00010100, 0b00100010,
#define FEE 187 // enterexponent
  0b01111111, 0b01111111, 0b01001001, 0b01001001, 0b01000001,
#define FABS 188 // ABS
  0b00000000, 0b01111111, 0b00000000, 0b01111111, 0b00000000,
#define FANGLE 189 // angle
  0b00111110, 0b00101000, 0b00111000, 0b00100000, 0b00100000,
#define FANGLE45 190 // angle45
  0b00100000, 0b00110000, 0b00101000, 0b00100100, 0b00100010,
#define FSQRT 191 // sqrt
  0b00001000, 0b01111111, 0b00000001, 0b00000001, 0b00000011,
#define FINT 192 // integral
  0b01100000, 0b01000000, 0b01111111, 0b00000001, 0b00000011,
#define FPLUSMINUS 193 // +/-
  0b01000100, 0b01000100, 0b01011111, 0b01000100, 0b01000100,
#define FEXP 194 // exp
  0b01111100, 0b01111100, 0b01010100, 0b01010100, 0b00011100,
#define FSQR 195 // squared
  0b00000000, 0b00011101, 0b00010101, 0b00010111, 0b00000000,
#define FINV 196 // invers
  0b00000100, 0b00000100, 0b00010010, 0b00011111, 0b00010000,
#define FMEAN 197 // x mean
  0b01000101, 0b00100101, 0b01111101, 0b01001001, 0b01000101,
#define FYMEAN 198 // ymean
  0b00011101, 0b01010001, 0b01010001, 0b01010001, 0b01111101,
#define FINF 199 // infinite
  0b00011100, 0b00100010, 0b00011100, 0b00100010, 0b00011100,
#define FLE 200 // <=
  0b01010000, 0b01011000, 0b01010100, 0b01010010, 0b01010001,
#define FNE 201 // !=
  0b00010100, 0b01110100, 0b00011100, 0b00010111, 0b00010100,
#define FGE 202 // >=
  0b01010001, 0b01010010, 0b01010100, 0b01011000, 0b01010000,
//// SYMBOL
#define FSEP 203 // separate
  0b00000000, 0b00000000, 0b01010101, 0b00000000, 0b00000000,
#define F3DOT 204 // 3 dots
  0b01000000, 0b00000000, 0b01000000, 0b00000000, 0b01000000,
#define FDOT 205 // big middle dot
  0b00000000, 0b00011100, 0b00010100, 0b00011100, 0b00000000,
#define FMDOT 206 // middle dot
  0b00000000, 0b00000000, 0b00001000, 0b00000000, 0b00000000,
#define FGRID 207 // power grid
  0b00001000, 0b01001100, 0b00111110, 0b00011001, 0b00001000,
#define FBAT4 208 // battery full
  0b01111110, 0b01111111, 0b01111111, 0b01111111, 0b01111110,
#define FBAT3 209 // battery 3q
  0b01111110, 0b01111011, 0b01111011, 0b01111011, 0b01111110,
#define FBAT2 210 // battery medium
  0b01111110, 0b01110011, 0b01110011, 0b01110011, 0b01111110,
#define FBAT1 211 // battery 1q
  0b01111110, 0b01100011, 0b01100011, 0b01100011, 0b01111110,
#define FBAT0 212 // battery empty
  0b01111110, 0b01000011, 0b01000001, 0b01000011, 0b01111110,
#define FSQUARE 213 // square
  0b00111110, 0b00100010, 0b00100010, 0b00100010, 0b00111110,
#define FSQUAREF 214 // square filled
  0b00111110, 0b00111110, 0b00111110, 0b00111110, 0b00111110,
#define FCIRCLE 215 // circle
  0b00011100, 0b00110110, 0b00100010, 0b00110110, 0b00011100,
#define FCIRCLEF 216 // circle filled
  0b00011100, 0b00111110, 0b00111110, 0b00111110, 0b00011100,
#define FEXIT 217 // exit
  0b01110100, 0b01000110, 0b01011111, 0b01000110, 0b01110100,
#define FLINK 218 // link
  0b01110111, 0b01000001, 0b01011101, 0b01000001, 0b01110111,
#define FHOME 219 // home
  0b01111100, 0b01111110, 0b00001111, 0b01111110, 0b01111100,
#define FCALC 220 // calculator
  0b01010101, 0b00000001, 0b01010101, 0b00000001, 0b01010101,
#define FSCREEN 221 // display
  0b00011110, 0b01010010, 0b01110010, 0b01010010, 0b00011110,
#define FGAME 222 // game
  0b00111110, 0b00101110, 0b00111110, 0b00111010, 0b00111110,
#define FTXT 223 // text
  0b00000011, 0b01000001, 0b01111111, 0b01000001, 0b00000011,
#define FCAL 224 // calendar
  0b01111110, 0b01000011, 0b01011010, 0b01000011, 0b01111110,
#define FCLOCK 225 // clock
  0b00111110, 0b01100011, 0b01101111, 0b01101011, 0b00111110,
#define FSAND 226 // sandclock
  0b01100011, 0b01010101, 0b01001001, 0b01010101, 0b01100011,
#define FDISK 227 // save
  0b01111110, 0b01001110, 0b01001010, 0b01001010, 0b01111100,
#define FPAINT 228 // paint
  0b00111000, 0b01101100, 0b01111111, 0b01111100, 0b00111000,
#define FKBD 229 // keyboard
  0b00101010, 0b00100000, 0b00101010, 0b00100000, 0b00101010,
#define FTABLE 239 // table
  0b01010101, 0b01010101, 0b00000000, 0b01010101, 0b01010101,
#define FPLANE 231 // plane
  0b00001000, 0b01001100, 0b01111111, 0b01001100, 0b00001000,
#define FRAM 232 // ram
  0b00111110, 0b01100011, 0b00100010, 0b01100011, 0b00111110,
//#define FHP 233 // HP
//  0b00011111, 0b00000100, 0b01111100, 0b00010100, 0b00011100,
#define FHALF 233 // 1/2
 0b00010111, 0b00001000, 0b00000100, 0b01101010, 0b01011000,
#define FPARA 234 // §
  0b00000000, 0b01011111, 0b01010101, 0b01111101, 0b00000000,
#define FSMILE 235 // smiley
  0b00100011, 0b01000011, 0b01001000, 0b01000011, 0b00100011,
#define FHEX 236 // hex16
 0b00111110, 0b00000000, 0b00111110, 0b00101010, 0b00111010,
#define FTICK 237 // tick
  0b01111000, 0b00110000, 0b00011000, 0b00001100, 0b00000110,
#define FPROMPT 238 // prompt
 0b00111110, 0b00011100, 0b01001000, 0b01000000, 0b01000000,
#define F10X 239 // 10^x
  0b01111000,0b00000000,0b01111000, 0b01001011, 0b01111011,
};


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  S Y S T E M

#define SX 132 // Screen dimensions
#define SY 16
#define SBYTES (SX*SY/8)
static byte sbuf[SBYTES]; // Screen buffer

static byte ishex=FALSE, isAF; // HEX mode, hex input demanded
static byte offtime=60; // Offtime in s

#define X1 3 // Margins
#define X2 56
#define XS 109 // Status

#define MAXLLDIGITS 19 // Max len of string to hold long long variable (2^64=2*10^19)

#define DWIDTH 9 // Standard width of printed double (digits, incl. dot)
#define DWIDTHPLOT 7
#define DWIDTHRACK 8
#define DWIDTHCALCCOMPLEX 8
#define DWIDTHMAX DWIDTH // Biggest DWITH (to dimension arrays)
static byte dwidth=DWIDTH; // Changed by RACK, PLOT, different CALC outputs

#define _min(a,b) ({__typeof__(a) _a=(a);__typeof__(b) _b=(b); _a<_b?_a:_b;}) // Min
#define _max(a,b) ({__typeof__(a) _a=(a);__typeof__(b) _b=(b); _a>_b?_a:_b;}) // Max
#define _abs(a) ({__typeof__(a) _a=(a); _a<0?-_a:_a;}) // Absolute
#define _dec(x,n) (((x)+((n)-1))%(n)) // Decrement
#define _inc(x,n) (((x)+1)%(n)) // Increment
#define c2s(c) (char[2]){(c),'\0'} // Convert char to string
#define cc2s(c1,c2) (char[3]){(c1),(c2),'\0'} // Convert 2 chars to string

static void nop(){} // No operation

static void getdate(dt_t* d, tm_t* t){pcf8563_read_time(); rtc_mask_time(d,t);} // Get date and time
static int timer(void){dt_t d; tm_t t; getdate(&d,&t); return(t.min*60+t.sec);} // Get timestamp from RTC (in sec)

static byte batt(void){int a=2100, b=2800; return((_max(_min(battery_voltage(),b-1),a)-a)*10/(b-a));} // Battery level

static byte isbuzz=TRUE; // Key click
static void buzz(byte dur){ // Buzzer (dur: 50 for beep, 2 for click)
  IOCON_JTAG_TDO_PIO1_1 |=  IOCON_JTAG_TDO_PIO1_1_FUNC_GPIO; // Init1
  IOCON_JTAG_nTRST_PIO1_2 |=  IOCON_JTAG_nTRST_PIO1_2_FUNC_GPIO; // Init2
  gpioSetDir(1,1,1); gpioSetDir(1,2,1); // Set pins as output
  for(byte i=0;i<dur;i++){ // Sound loop
    gpioSetValue(1,1,0); gpioSetValue(1,2,1); systickDelay(1); // 1-on 2-off
    gpioSetValue(1,1,1); gpioSetValue(1,2,0); systickDelay(1); // 1-off 2-on
  }
  gpioSetValue(1,1,1); gpioSetValue(1,2,1); // Off
  gpioSetDir(1,1,0); gpioSetDir(1,2,0); // Set pins as input
}

static byte _isinf(double a){ // Check all EEbits=1 (double: 0x7ff(11bits), float: 0x7f8(8bits))
  union{double a;uint64_t u;}val; val.a=a;
  return((val.u&0x7ff0000000000000ULL)==0x7ff0000000000000ULL);
}

static uint16_t rndlfsr=0xACE1u; static byte rndbit;
static uint16_t rnd(void){ // Pseudo random generator (using a Linear Feedback Shift Register)
  rndbit=((rndlfsr<<0)^(rndlfsr>>2)^(rndlfsr>>3)^(rndlfsr>>5))&1;
  return(rndlfsr=((rndlfsr>>1)|(rndbit<<15)));
}

static const byte expand4[]={ // LUT to expand byte (0000abcd->aabbccdd, call with &0x0f)
  0x00,0x03,0x0c,0x0f,0x30,0x33,0x3c,0x3f,0xc0,0xc3,0xcc,0xcf,0xf0,0xf3,0xfc,0xff
};

static void cat(byte c, byte x, byte row){ // Print character at x|row
  for(byte w=0;w<FW;w++){ // Font width
    byte data=font[(c-FOFFSET)*FW+w], b=(row?data<<1:data); // Font data, shift 2nd row
    uint16_t bb=expand4[(data>>4)&0x0f]<<8|expand4[data&0x0f]; // Big font
    for(byte i=0;i<fsize;i++,x++) for(byte l=0;l<fsize;l++){ // Bold, Lines
      if(fsize==FSIZEL) b=(l?bb>>7:bb<<1); // Select big font bits (shift 1 pix)
      sbuf[x+(row+l)*SX]=b;
    }
  }
}

static void sat(const char* s, byte x, byte r){for(;*s;s++,x+=fsize*FWW) cat(*s,x,r);} // Print string at x|r
static void satdot(char* s, byte x, byte r){ // Print string at x|row with slim dot
  for(;*s;s++) if(*s=='.'){cat(*s,x-fsize,r); x+=fsize*(FW-2);} else{cat(*s,x,r); x+=fsize*FWW;}
}

static byte toasc(byte c){return(c+(c>9?'a'-10:'0'));} // Convert number (incl. hex) to ascii

static void bat(byte n, byte x, byte l){ // Print byte in hex at
  char s[2+1]; s[1]=toasc(n%16); s[0]=toasc((n/16)%16); sat(s,x,l);
}

static void sfill(char* s, char c, byte n){memset(s,c,n); s[n]='\0';} // Fill string with n chars c
static void scatc(char* s, char c){s+=strlen(s); *s++=c; *s='\0';} // Add character to string
static void scat(char* s, char c, byte pos){memmove(s+pos+1,s+pos,strlen(s)-pos+1); s[pos]=c;} // Write c to s at position pos
static void sdelat(char* s, byte pos){memcpy(s+pos,s+pos+1,strlen(s)-pos);} // Delete char at pos in string
static void ssat(char* s, const char* s1, byte pos){memcpy(s+pos,s1,strlen(s1));} // Write s1 to s at position pos
static void ssinsat(char* s, char* s1, byte pos){ // Insert s1 to s at position pos
  byte len=strlen(s1); char* at=s+pos; memmove(at+len,at,strlen(at)+1); // Make space
  memcpy(at,s1,len); // Copy string
}
static void slead(char* s){char* p=s; while(*s==' ') s++; while((*p++=*s++));} // Delete leading spaces
//static void strail(char* s){for(byte i=strlen(s)-1; i && s[i]=='0'; i--) s[i]='\0';} // Delete trailing zeros

static void vline(byte x){sbuf[x]=sbuf[x+SX]=0xff;} // Vertictal line

static void pixat(byte x, byte y){sbuf[y/8*SX+x]|=(1<<(y%8));} // Set pixel in sbuf

static void i2s2(char* s, byte n){s[1]=n%10+'0'; s[0]=(n/10)%10+'0';} // Copy 2 digit int to string
static void i2s20(char* s, byte n){i2s2(s,n); if(n<10) s[0]=' ';} // Copy 2 digit int to string (blank 10th zero)
static void i2s3(char* s, uint16_t n){s[2]=n%10+'0'; s[1]=(n/10)%10+'0'; s[0]=(n/100)%10+'0';} // Copy 3 digit int to string
static void i2s30(char* s, uint16_t n){i2s3(s,n); if(n<100) s[0]=' '; if(n<10) s[1]=' ';} // Copy 3 digit int to string (blank leading zeros)

static void ll2s(char* str, long long n){ // Convert long long to string (including sign)
  byte div=(ishex?16:10); // Decimal or hex
  char* s=str; byte sign=FALSE; if(n<0){sign=TRUE; n=-n;}
  do{char c=n%div; c=toasc(c); *s++=c;} while(n/=div);
  if(sign) *s++='-';
  *s--='\0'; while(s>str){char c=*s; *s--=*str; *str++=c;} // Terminate and reverse string
}
static long long s2ll(char* s){ // Convert string (hex or dec) to long long
  long long n=0LL;
  for(byte mul=(ishex?16:10);*s;s++){
    byte c=*s; if(c>='0' && c<='9') c-='0'; else if(c>='a' && c<='f') c=c-'a'+'9'-'0'+1;
    n=n*mul+c;
  }
  return(n);
}

static void llat(long long n, byte x, byte r){char s[MAXLLDIGITS+1]; ll2s(s,n); sat(s,x,r);} // Print ll at x|r

static void printhexat(double f, byte x, byte line){ // Print long as hex at x|y
  char s[DWIDTHMAX+1+1]; // Extra space for hex sign
  ll2s(s,d2ll(f)); slead(s); sat(s,x,line);
}

static double s2d(const char*s){ // String to double (sign, but no EE)
  double res=0.0, div=1.0; if(*s=='-'){s++; div=-1.0;} // Sign
  for(byte isdot=FALSE;*s;s++){
    if(*s=='.') isdot=TRUE;
    else if(*s>='0' && *s<='9'){
      res=dadd(dmul(res,10.0),(*s-'0'));
      if(isdot) div=dmul(div,10.0);
    }
  }
  return(ddiv(res,div));
}

static char* u32toa(uint32_t n, char* str){ // Adds long to string
  char* s=str; char tmps[10+1];
  byte i=0; if(!n) tmps[i++]='0';
  while(n){tmps[i++]=(n%10)+'0'; n/=10;} while(i) *s++=tmps[--i];
  return(s);
}

static void d2sn(double a, char* str, byte width){ // Double to string (6<width<13 (incl. dot))
  char* s=str;
  if(a==0.0) *s++='0';
  else if(_isinf(a)) for(byte i=0;i<3;i++) *s++='-';
  else{
    byte dot=1; // Dot needs one char
    byte sign=0; if(a<0.0){sign=1; a=-a; *s++='-';} // Sign
    int exp=0; if(a>0.0){ // Norm a (with exponent)
      while(a>=10.0){a=ddiv(a,10.0); exp++;} while(a<1.0){a=dmul(a,10.0); exp--;}
    }
    int predot=exp+1; // Predot digits
    byte issci=(((predot+sign+dot>width)||(exp<-2))?TRUE:FALSE); // FIXmin=2
    sbyte prec; // Precision (digits after dot)
    byte nrnd; // Places behind dot to round (SCI!=FIX)
    if(issci){
      int ex=_abs(exp);
      byte e=4; if(ex<100) e=3; if(ex<10) e=2;
      nrnd=prec=width-e-sign-1-dot; // SCI (e, sign, predot=1, dot)
    }
    else{prec=width-sign-(predot<1?1:predot)-dot; nrnd=prec+exp;} // FIX (sign, predot, dot)

    double rnd=0.5; for(byte i=0;i<nrnd;i++) rnd=ddiv(rnd,10.0); a=dadd(a,rnd); // Rounding
    if(a>=10.0){a=ddiv(a,10.0); exp++;} // Correct rounding error (rnd(9.9999)=10)

    if(issci){ // Write SCI to s
      byte i_part=a; double f_part=dsub(a,i_part);
      s=u32toa(i_part,s); // Write predot to s
      *s++='.'; // Dot
      if(prec>0){
        for(int i=0;i<prec;i++){
          f_part=dmul(f_part,10.0);
          byte digit=f_part;
          *s++=digit+'0';
          f_part=dsub(f_part,digit);
        }
      }
      while(*--s=='0'){} s++; // Remove Trailing Zeros
      if(exp){ // Exponent
        if(exp>=0) *s++='+'; else {*s++='-'; exp=-exp;} // Exponent sign
        s=u32toa(exp, s);
      }
    }
    else{ // Write FIX to s
      if(exp>=0) while(exp--) a=dmul(a,10.0); else while(exp++) a=ddiv(a,10.0); // Pump up
      uint32_t i_part=a; double f_part=dsub(a,i_part);
      s=u32toa(i_part,s); // Write predot to s
      *s++='.'; // Dot
      if(prec>0){ // Write postdot to s
        for(int i=0;i<prec;i++){
          f_part=dmul(f_part,10.0);
          byte digit=f_part;
          *s++=digit+'0';
          f_part=dsub(f_part,digit);
        }
      }
      while(*--s=='0'){} s++; // Remove Trailing Zeros
    }
  }
  *s='\0'; // Terminate string
}

static void dat(double a, byte x, byte row){ // Print double at x|row
  char s[DWIDTHMAX+1]; d2sn(a,s,dwidth); satdot(s,x,row);
}

static void printbullets(char* str){ // Print menu (6 bullet points)
  for(byte r=0;r<2;r++) for(byte c=0;c<3;c++){
    cat(FI4+3*(1-r)+c,X1+c*6*FWW,r); // Bullet
    char s[5]; s[4]='\0'; memcpy(s,str+(r*3+c)*4,4); sat(s,X1+(6*c+1)*FWW+1,r); // Title
  }
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  K E Y B O A R D

static byte key=0; // Global keypress variable
static byte isfg=0; // f/g-key status

#define KEYROWS 4 // Keyboard dimensions
#define KEYCOLS 10
#define KEYS 39 // Number of keys

#define KMNUM 0 // Numpad
#define KMCURSOR 1 // Numpad as cursor keys
#define KMQWERT 2 // QWERT Keyboard (editable)
static byte kbdmode=KMNUM; // keyboard mode to get character

static const char qwert[]={ // QWERT key characters
  ' ','n','m',FCURU,'j','k','l','u','i','o', //0
  FCURL,FCURD,FCURR,FSHIFT,'?','p', //10 DOT
  'y','h',FENTER, //16 CHS
  'q','w','e','r','t', //19 SQRT
  'a','s','d','f','g', //24 SST
  'z','x','c','v','b', //29 RS
  '?','?','?','?','?', //34 ON
};
static byte isshift=TRUE; // Shift on qwert-keyboard

enum{ // Key codes
  K0=0, K1, K2, K3, K4, K5, K6, K7, K8, K9, //0
  KDOT, KSUM, KADD, KSUB, KMUL, KDIV, KCHS, KEE, KENTER, KSQRT, //10
  KEXP, KPOW10, KPOW, KINV, KSST, KGTO, KSIN, KCOS, KTAN, KRS, //20
  KGSB, KROT, KSWAP, KBSP, KON, KF, KG, KSTO, KRCL //30
};

#define row(x) keymatrix_h[x][0],keymatrix_h[x][1] // Keymatrix (pins and keycodes)
#define col(x) keymatrix_v[x][0],keymatrix_v[x][1]
static const byte keymatrix_h[KEYROWS][2]={
  {KEYBOARD_H0_PORT, KEYBOARD_H0_PIN},{KEYBOARD_H1_PORT, KEYBOARD_H1_PIN},
  {KEYBOARD_H2_PORT, KEYBOARD_H2_PIN},{KEYBOARD_H3_PORT, KEYBOARD_H3_PIN}
};
static const byte keymatrix_v[KEYCOLS][2]={
  {KEYBOARD_V0_PORT, KEYBOARD_V0_PIN},{KEYBOARD_V1_PORT, KEYBOARD_V1_PIN},
  {KEYBOARD_V2_PORT, KEYBOARD_V2_PIN},{KEYBOARD_V3_PORT, KEYBOARD_V3_PIN},
  {KEYBOARD_V4_PORT, KEYBOARD_V4_PIN},{KEYBOARD_V5_PORT, KEYBOARD_V5_PIN},
  {KEYBOARD_V6_PORT, KEYBOARD_V6_PIN},{KEYBOARD_V7_PORT, KEYBOARD_V7_PIN},
  {KEYBOARD_V8_PORT, KEYBOARD_V8_PIN},{KEYBOARD_V9_PORT, KEYBOARD_V9_PIN}
};
static const byte keycode[KEYCOLS*KEYROWS]={ // Keycode matrix
  KSQRT, KSST, KRS,   KON,
  KEXP,  KGTO, KGSB,  KF,
  KPOW10,KSIN, KROT,  KG,
  KPOW,  KCOS, KSWAP, KSTO,
  KINV,  KTAN, KBSP,  KRCL,
  KCHS,  KEE,  KENTER,KENTER,
  K7,    K4,   K1,    K0,
  K8,    K5,   K2,    KDOT,
  K9,    K6,   K3,    KSUM,
  KDIV,  KMUL, KSUB,  KADD
};

static void setcolin(byte c){gpioSetDir(col(c),1); gpioSetValue(col(c),0);} // Set col c to input
static void setcolout(byte c){gpioSetDir(col(c),0); gpioSetValue(col(c),1);} // Set col c to output


static byte readonkey(void){ // Test ON key (got own interuptable pin)
  byte ison=FALSE;
  init_keyboard_pins(); // Prepare pins for scan
  setcolin(0);
  if(!gpioGetValue(KEYBOARD_ON_PORT,KEYBOARD_ON_PIN)) ison=TRUE; // 0,11
  setcolout(0);
  return(ison);
}


static byte scankey(void){ // Get/Scan (one) key
  if(readonkey()) return(KON); // ON key
  for(byte i=0,k=0; i<KEYCOLS; i++){
    setcolin(i); // Set col i to input
    for(byte j=0; j<KEYROWS; j++,k++)
      if(!gpioGetValue(row(j))){setcolout(i); return(keycode[k]);} // Set col i to output and return
    setcolout(i); // Set col i to output
  }
  return(END); // Default keypress code
}

static void keyrelease(){while(scankey()!=END){} systickDelay(1);} // Wait for key release


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  L C D   S C R E E N

static byte isprintscreen=TRUE; // Print screen

static inline void lcdsend(byte b){ // Send byte b to LCD
  for(byte i=0;i<8;i++,b<<=1){ // Set/unset pixel
    gpioSetValue(ST7565_SCLK_PORT, ST7565_SCLK_PIN, 0); // Set clock pin low
    gpioSetValue(ST7565_SDAT_PORT, ST7565_SDAT_PIN, (b&0x80?1:0)); // Set bit (always MSB)
    gpioSetValue(ST7565_SCLK_PORT, ST7565_SCLK_PIN, 1); // Set clock pin high
  }
}

static void lcdcmd(byte c){gpioSetValue(ST7565_A0_PORT, ST7565_A0_PIN, 0); lcdsend(c);} // Send cmd

static void lcdset(void){ // Set display: Flip (c0 or c8) and Page offset (0x40|n ... n=0-63)
  lcdcmd(0xc8); lcdcmd(0x70);
}

static inline void sendpage(byte p){ // Send screenbuffer page to LCD
  lcdcmd(ST7565_CMD_SET_PAGE | p); // Set page
  lcdcmd(ST7565_CMD_SET_COLUMN_LOWER); lcdcmd(ST7565_CMD_SET_COLUMN_UPPER);
  gpioSetValue(ST7565_A0_PORT, ST7565_A0_PIN, 1);
  byte* ptr=&sbuf[(p?SX:0)]; int i=SX; while(i--) lcdsend(*ptr++);
}

void sleep(){ // Sleep mode
  keyrelease(); rtc_disable_int(); st7565TurnOff();
  sleep_ds(0, WT_ON);
  if(!read_rtcint_pin()) // No sleep workaround
  sleep_ds(0, WT_ON);
  st7565Init(); lcdset();
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  I N P U T   S E T T I N G S  -  Input for settings menu

static byte isinput=FALSE, setnr=0;

static const char* const day[]={"MO","TU","WE","TH","FR","SA","SU"};

#define decval(val,min) (((val)>(min))?((val)-1):(val)) // Decrement value
#define incval(val,max) (((val)<(max))?((val)+1):(val)) // Increment value

static void printinput(void){
  switch(setnr){
    case 4: sat((isbuzz?"ON":"OFF"),X1,0); break; // Buzz
    case 5: { // Time
      dt_t d; tm_t t; getdate(&d,&t);llat(t.hour,X1,0); llat(t.min,X1+3*FWW,0); break;
    }
    case 7: llat(offtime,X1,0); break; // Toff
    case 8: { // Date
      dt_t d; tm_t t; getdate(&d,&t);
      llat(d.year,X1,0); llat(d.month,X1+3*FWW,0); llat(d.day,X1+6*FWW,0);
      sat((char*)day[julian_day(&d)%7],X1+9*FWW,0); break;
    }
    case 9: llat(lcd_brightness,X1,0); llat(lcd_oper_voltage,X1+3*FWW,0); break; // LCD
  }
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  S E T T I N G S  -  Settings

static byte isset=FALSE;

static void printset(void){printbullets("ToffDATELCD BUZZTIMERST ");}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  S T A C K  -  Stack definitions and operations

#define DATASTACKSIZE 8
static double ds[DATASTACKSIZE], store[10]={0.0}, lastx=0.0; // Data stack, Store, LastX
static byte dp=0, lifted=FALSE; // Data stack pointer, Lift indicator (True, if stack was lifted (by ENTER))

static double push(double d){ // Push number to data stack
  if(dp>=DATASTACKSIZE){memmove(ds,ds+1,(DATASTACKSIZE-1)*sizeof(double)); dp--;} // Float stack if full
  return(ds[dp++]=d);
}
static double pop(void){return(dp?ds[--dp]:0.0);} // Pop value from data stack

static void pushs(char* s){ // Push string to stack
  (ishex?push(ll2d(s2ll(s))):push(s2d(s)));
  s[0]='\0';
}

static void printstack(byte n, byte x, byte line){ // Print value of stack number n at line
  if(dp>n){if(ishex) printhexat(ds[dp-n-1],x,line); else dat(ds[dp-n-1],x,line);}
  else cat('_',x,line);
}

#define ADDRESSSTACKSIZE 16
static byte ap=0, cl=0; // Address pointer, Conditional level
static uint16_t as[ADDRESSSTACKSIZE]; // Address stack
static void apush(uint16_t addr){as[ap++]=addr;} // Push address (int) to address stack
static int apop(void){return(ap?as[--ap]:0);} // Pop address (int) from address stack


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  E D I T   S T R I N G  -  Input and edit string es[]

static byte ises=FALSE, escurpos=0;

static byte iscmd=FALSE; // Flag for CMD to edit string accordingly
static byte isrlink=FALSE; // Link to RACK demanded

#define MAXFIG 9 // Max figures to print input string
#define MAXTXT 17 // Max text length of display
#define MAXGETS 128 // Maximal length of edit string

static char es[MAXGETS+1]="", clip[MAXGETS+1]=""; // Editstring, clipboard
static char is[MAXGETS+1]=""; // String to enter numbers

static void esbsp(void){if(escurpos){sdelat(es,escurpos-1); escurpos--;}} // Backspace
static void esclr(void){es[0]='\0'; escurpos=0; isfg=0;} // Clear edit string
static void escurleft(void){if(escurpos) escurpos--;} // Cursor left
static void escurright(void){if(escurpos<strlen(es)) escurpos++;} // Cursor right

#define ASCCOLS 8 // Number of columns in ascii table
static byte ascrow=0, asccol=0; // Row and col in ascii table
static void ascup(void){if(ascrow) ascrow--;} // Ascii up
static void ascdown(void){if(ascrow<sizeof(font)/FW/ASCCOLS-1) ascrow++;} // Ascii down

static void clipsto(void){strcpy(clip,es);} // Store es to clip
static void cliprcl(void){strcpy(es,clip); escurpos=0;} // Recall es from clip

static void printes(void){ // Print edit text
  scat(es,FBLACK,escurpos); // Insert cursor
  byte start=_max((escurpos-MAXTXT+1),0), len=_min(MAXTXT,strlen(es));
  char s[MAXGETS+1]={0}; memcpy(s,es+start,len); sat(s,X1,0); // Print visible part of es
  sdelat(es,escurpos); // Delete cursor

  if(kbdmode==KMCURSOR){ // Print numpad selection
    for(byte i=0,x=X2-FWW; i<ASCCOLS; i++,x+=FWW){ // Ascii menu
      cat(ascrow*ASCCOLS+i+' ',x,1); if(i==asccol){x+=FWW; cat(FBLACK,x,1);}
    }
  }
  if(iscmd) printstack(0,X1,1);
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  M E N U  -  Application Launcher

static byte ismenu=FALSE; // For printing and correct status

static void printmenu(void){ // Print MENU screen
  if(isfg==1)      printbullets("NOTEDATETIMEMARKE6B SUGR");
  else if(isfg==2) printbullets("ASC PT  D&I RULEFIT SET ");
  else             printbullets("CALCCMD RACKTTOPCPU MED ");
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  P L O T  -  Plot Graph

static byte isplot=FALSE, isplotcalc=FALSE;
#define PLOTX 32
#define PLOTY 16
static double plotmin=0.0, plotmax=0.0;
static double limita=0.0, limitb=0.0;
static byte plot[PLOTX];

static void printplot(void){ // Print plot
  byte x1=2, x2=50, xp=98;
  byte x=ddiv(limita,dsub(limita,limitb))*PLOTX, y=PLOTY-ddiv(plotmin,dsub(plotmin,plotmax))*PLOTY;
  dat(plotmin,x1,0); dat(plotmax,x2,0); dat(limita,x1,1); dat(limitb,x2,1); // Print limits
  for(byte i=0;i<PLOTX;i++){pixat(xp+i,PLOTY-1-plot[i]); pixat(xp+i,y);} // Plot x, x-axis
  vline(xp+x); // y-axis
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  C A L C  -  Calculator

static byte iscalc=FALSE, isbig=TRUE, isshow=FALSE;
static byte fn=0; // Function (0=off, 1=A, 2=B, ..., 5=E)
static byte istos2clip=FALSE; // Copy TOS to clip (when leaving CALC)
static byte isc=FALSE; // Complex function demanded
static byte ishyp=FALSE; // Hyperbolics selection

//static byte isdo=FALSE, doi=0, lastselected; // Do-loop with (in DICT) last selected command
static byte isdo=FALSE, lastselected; // Do-loop with (in DICT) last selected command
static int doi=0;

#define MAXCORE 55
#define MAXBINS 125
#define MAXUSR 30
#define MAXMEM 2048
#define MAXNAMELEN 4

static char name[MAXCORE+MAXBINS+MAXUSR][MAXNAMELEN+1]; // Command names
static const char initname[][MAXNAMELEN+1]={ // Init command names
 "0",   "1",   "2",   "3",   "4",   "5",   "6",   "7",   "8",   "9",    //0 vvv-CORE-vvv
 ".",   "SUM", "+",   "-",   "*",   "/",   "NEG", "EE",  "DUP",         //10
 "EXP", "LN",  "SWAP","INV", "COS", "DROP","D2R", "R2D", "ATAN","INT",  //19
 "ROT", "CLA", "LSTX","NAND","PI",  "EQ0", "LE",  "IF",  "ELSE","THEN", //29
 "BEG", "UNTL","PICK","STO", "RCL", "FN",  "NOP", "HEX", "SOLV","INTL", //39
 "FNY", "SLOP","PLOT","DO",  "RND", "SHOW", //49
 "SQR", "SQRT","PWR", "P10", "SIN", "TAN", "ASIN","ACOS","FRAC","ROT2", //55 vvv-BINS-vvv
 "LOG", "OVER","%",   "%CHG","ABS", "SINH","ASNH","COSH","ACSH","TANH", //65
 "ATNH","PERM","COMB","S+",  "S-",  "SCLR","MEAN","SDEV","LR",  "LRY",  //75
 "!",   "P2R", "R2P", "H2HM","HM2H","I2CM","CM2I","KM2S","S2KM","KM2N", //85
 "N2KM","L2G", "G2L", "C2F", "F2C", "KG2L","L2KG","PV",  "QE",  "MOD",  //95
 "PDF", "CDF", "FNA", "FNB", "FNC", "FND", "FNE", //105
 "A1","B1","C1","D1", "A2","B2","C2","D2", "A3","B3","C3","D3", "A4","B4","C4","D4", //112 RACK cell functions
 "A5","B5","C5","D5", "A6","B6","C6","D6", "A7","B7","C7","D7", "A8","B8","C8","D8", //128
 "cc", "cg",  "cG", "cVm", "cNA", "cRyd",  "ch", "cPH0","ca0","ck",  "cR", "cF", //144 Physical Constants
 "ct", "catm","ce", "cE0", "cm0", "cZ0",   "cmU","cre", "cme","cmp", "cmn","cmmu", //156
 "cmB","cmN", "cmme","cmmp","cmmn","cmmm", "cA", "cS",  "cG0","cgam","cC1","cC2", //168
};

static byte namenr; // Number of (real) elements in name[]
static byte namesort[MAXCORE+MAXBINS+MAXUSR]; // Sorted name[]

static byte findwordpos(char* s){ // Find position of command name in name[] (END if not found)
  for(byte i=0;i<namenr;i++){if(!strcmp(name[i],s)) return(i);}
  return(END);
}

static byte val2pos(byte val){ // Find position where namesort is val
  for(byte i=0;i<namenr;i++){if(namesort[i]==val) return(i);}
  return(END);
}

enum{ // Command defines
 _0=0,_1,_2,_3,_4,_5,_6,_7,_8,_9, //0
 _DOT,_SUM,_ADD,_SUB,_MUL,_DIV,_NEG,_EE,_DUP, //10
 _EXP,_LN,_SWAP,_INV,_COS,_DROP,_DEG2RAD,_RAD2DEG,_ATAN,_INT, //19
 _ROT,_CLA,_LASTX,_NAND,_PI,_EQ0,_LE,_IF,_ELSE,_THEN, //29
 _BEGIN,_UNTIL,_PICK,_STO,_RCL,_FN,_NOP,_HEX,_SOLVE,_INTEGRAL, //39
 _FNX,_SLOPE,_PLOT,_DO,_RND,_SHOW, //49
 _SQR,_SQRT,_PWR,_P10,_SIN,_TAN,_ASIN,_ACOS,_FRAC,_ROT2, //55 vvv-BINS-vvv
 _LOG,_OVER,_PCT,_PCTCHG,_ABS,_SINH,_ASINH,_COSH,_ACOSH,_TANH, //65
 _ATANH,_PERM,_COMB,_STATADD,_STATSUB,_STATCLR,_STATMEAN,_STATSTDEV,_STATLR,_STATLRY, //75
 _GAMMA,_P2R,_R2P,_H2HMS,_HMS2H,_IN2CM,_CM2IN,_KM2SM,_SM2KM,_KM2NM, //85
 _NM2KM,_L2GAL,_GAL2L,_C2F,_F2C,_KG2LBS,_LBS2KG,_PV,_QE,_MOD, //95
 _PDF,_CDF,_FNA,_FNB,_FNC,_FND,_FNE, //105
 _A1,_B1,_C1,_D1,_A2,_B2,_C2,_D2,_A3,_B3,_C3,_D3,_A4,_B4,_C4,_D4, //112 RACK
 _A5,_B5,_C5,_D5,_A6,_B6,_C6,_D6,_A7,_B7,_C7,_D7,_A8,_B8,_C8,_D8, //128
 _cc,_cg,_cG,_cVm,_cNA,_cRyd,_ch,_cPH0,_ca0,_ck,_cR,_cF, //144 Physical Constants
 _ct,_catm,_ce,_cE0,_cm0,_cZ0,_cmU,_cre,_cme,_cmp,_cmn,_cmmu, //156
 _cmB,_cmN,_cmme,_cmmp,_cmmn,_cmmm,_cA,_cS,_cG0,_cgam,_cC1,_cC2, //168
};

static const byte key2mpos[]={ // Convert keycode to name[] position
 _0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_DOT, //0 keys
 _STATADD,_ADD,_SUB,_MUL,_DIV,_NEG,_EE,_DUP, //SUM
 _SQRT,_EXP,_P10,_PWR,_INV, //SQRT
 _SLOPE,_NOP,_SIN,_COS,_TAN, //SST
 _FNX,_NOP,_ROT,_SWAP,_DROP, //RS
 _NOP,_NOP,_NOP,_STO,_RCL, //ON
 _GAMMA,_P2R,_H2HMS,_DEG2RAD,_GAL2L,_F2C,_LBS2KG,_IN2CM,_SM2KM,_NM2KM,_STATLRY, //0 f-keys
 _STATLR,_PERM,_NOP,_INTEGRAL,_SOLVE,_NOP,_SHOW,_RND, //SUM
 _FN,_FN,_FN,_FN,_FN, //SQRT
 _NOP,_NOP,_HEX,_DO,_NOP, //SST
 _PLOT,_STATCLR,_NOP,_PV,_QE, //RS
 _NOP,_NOP,_NOP,_FRAC,_NOP, //ON
 _STATMEAN,_R2P,_HMS2H,_RAD2DEG,_L2GAL,_C2F,_KG2LBS,_CM2IN,_KM2SM,_KM2NM,_STATSTDEV, //0 g-keys
 _STATSUB,_COMB,_NAND,_EQ0,_LE,_ABS,_PI,_LASTX,  //SUM
 _SQR,_LN,_LOG,_PCT,_PCTCHG, //SQRT
 _PICK,_NOP,_ASIN,_ACOS,_ATAN, //SST
 _NOP,_NOP,_ROT2,_OVER,_CLA, //RS
 _NOP,_NOP,_NOP,_INT,_MOD //ON
};

static byte mem[MAXMEM]; // Memory area
static const byte initmem[]={ // Initial data for mem[]
  END, //0
  _0,END,_1,END,_2,END,_3,END,_4,END,_5,END,_6,END,_7,END,_8,END,_9,END, //1   -vvv- CORE FUNCTIONS -vvv-
  _DOT,END,_SUM,END,_ADD,END,_SUB,END,_MUL,END,_DIV,END,_NEG,END,_EE,END,_DUP,END, //21
  _EXP,END,_LN,END,_SWAP,END,_INV,END,_COS,END,_DROP,END,_DEG2RAD,END,_RAD2DEG,END,_ATAN,END,_INT,END, //39
  _ROT,END,_CLA,END,_LASTX,END,_NAND,END,_PI,END,_EQ0,END,_LE,END,_IF,END,_ELSE,END,_THEN,END, //59
  _BEGIN,END,_UNTIL,END,_PICK,END,_STO,END,_RCL,END,_FN,END,_NOP,END,_HEX,END,_SOLVE,END,_INTEGRAL,END, //79
  _FNX,END,_SLOPE,END,_PLOT,END,_DO,END,_RND,END,_SHOW,END, //99

  _DUP,_MUL,END, // SQR =X*X   -vvv- BUILT IN FUNCTIONS -vvv-
  _LN,_2,_DIV,_EXP,END, // SQRT =EXP(0.5*LN(X))
  _SWAP,_LN,_MUL,_EXP,END, // PWR =Y^X=EXP(X*LN(Y))
  _1,_0,_SWAP,_PWR,END, // P10 =10^X
  _NEG,_9,_0,_ADD,_COS,END, // SIN =COS(90-X)
  _DUP,_SIN,_SWAP,_COS,_DIV,END, // TAN =SIN/COS
  _ACOS,_NEG,_9,_0,_ADD,END, // ASIN =PI/2-acos=atan(x/sqrt(1-x*x))
  _DUP,_SQR,_NEG,_1,_ADD,_SQRT,_SWAP,_DIV,_ATAN,END, // ACOS =atan((sqrt(1-x*x))/x)
  _DUP,_INT,_SUB,END, // FRAC
  _ROT,_ROT,END, // ROT2
  _LN,_1,_0,_LN,_DIV,END, // LOG =LN(X)/LN(10)
  _SWAP,_DUP,_ROT,END, // OVER
  _OVER,_1,_0,_0,_DIV,_MUL,END, // PERCENT =B*X/100% (keep X)
  _OVER,_SUB,_SWAP,_DIV,_1,_0,_0,_MUL,END, // PERCENTDELTA =(X-B)/B*100%
  _DUP,_DUP,_0,_LE,_IF,_NEG,_THEN,END, // ABS
  _EXP,_DUP,_INV,_NEG,_ADD,_2,_DIV,END, // SINH =(exp(x)-exp(-x))/2
  _DUP,_SQR,_1,_ADD,_SQRT,_ADD,_LN,END, // ASINH =ln(x + sqrt(x * x + 1))
  _EXP,_DUP,_INV,_ADD,_2,_DIV,END, // COSH =(exp(x)+exp(-x))/2
  _DUP,_SQR,_1,_NEG,_ADD,_SQRT,_ADD,_LN,END, // ACOSH =ln(x+sqrt(x*x-1))
  _DUP,_SINH,_SWAP,_COSH,_DIV,END, // TANH =sinh(z)/cosh(z)
  _DUP,_DUP,_1,_ADD,_SWAP,_NEG,_1,_ADD,_DIV,_SQRT,_LN,END, // ATANH =ln(sqrt((1+x)/(1-x)))
  _OVER,_ROT,_SUB,_1, // PERM  nPr=n!/(n-r)! - (n n-k 1)
  _BEGIN,_SWAP,_1,_ADD,_DUP,_ROT,_MUL,_3,_PICK,_1,_SUB,_3,_PICK,_1,_SUB,_LE, _UNTIL,
  _ROT,_DROP,_DROP,END,

  _DUP, _ROT, _PERM,  // COMB nCr=n!/r!/(n-r)!=nPr/r! - (k perm)
  _BEGIN, _SWAP, _DUP, _ROT, _DIV, _SWAP, _1, _SUB, _DUP, _ROT, _1, _LE, _UNTIL,
  _SWAP, _DROP, END,

  _7,_RCL,_1,_ADD,_7,_STO,_DROP, // STATADD - n
  _DUP,_DUP,_8,_RCL,_ADD,_8,_STO,_DROP, // X
  _DUP,_DUP,_MUL,_5,_RCL,_ADD,_5,_STO,_DROP, // XX
  _OVER,_MUL,_6, _RCL,_ADD,_6,_STO,_DROP, // XY
  _9,_RCL,_ADD,_9,_STO,_DROP,_7,_RCL,END, // Y push(n)

  _7,_RCL,_1,_SUB,_7,_STO,_DROP, // STATSUB - n
  _DUP,_DUP,_8,_RCL,_SWAP,_SUB,_8,_STO,_DROP, // X
  _DUP,_DUP,_MUL,_5,_RCL,_SWAP,_SUB,_5,_STO,_DROP, // XX
  _OVER,_MUL,_6,_RCL,_SWAP,_SUB,_6,_STO,_DROP, // XY
  _9,_RCL,_SWAP,_SUB,_9,_STO,_DROP,_7,_RCL,END, // Y push(n)

  _0,_DUP,_DUP,_DUP,_DUP,_DUP,_5,_STO,_DROP,_6,_STO,_DROP,_7,_STO,_DROP,_8,_STO,_DROP,_9,_STO,_DROP,END, // STATCLR

  _8,_RCL,_7,_RCL,_DIV,END, // STATMEAN - mean (X/n)

  _STATMEAN,_DUP,_MUL,_7,_RCL,_MUL,_NEG,_5,_RCL,_ADD,_7,_RCL,_1,_SUB,_DIV,_SQRT,END, //385 STATSTDEV =(XX-n*m^2)/(n-1)

  _6,_RCL,_7,_RCL,_MUL,_8,_RCL,_9,_RCL,_MUL,_SUB, // STATLR y=ax+b (X=a, Y=b) - a
  _5,_RCL,_7,_RCL,_MUL,_8,_RCL,_DUP,_MUL,_SUB,_DIV,
  _DUP,_DUP,_8,_RCL,_MUL,_NEG,_9,_RCL,_ADD,_7,_RCL,_DIV,_SWAP,END, // b

  _STATLR,_ROT2,_MUL,_ADD,END, // STATLRY y=ax+b

  _1,_ADD,_DUP,_DUP,_DUP,_DUP,_DUP,_1,_2,_MUL, // GAMMALN: ln!=(ln(2*PI)-ln(z))/2+z*(ln(z+1/(12*z-1/10/z))-1)
  _SWAP,_1,_0,_MUL,_INV,_SUB,_INV,_ADD,_LN,_1,_SUB,_MUL,_SWAP,_LN,_NEG,_2,_PI,_MUL,_LN,_ADD,_2,_DIV,_ADD,END,

  _DUP,_ROT2,_DUP,_COS,_SWAP,_SIN,_ROT2,_MUL,_ROT,_MUL,END, // P2R y=r*sin(a) x=r*cos(a)
  _DUP,_MUL,_SWAP,_DUP,_MUL,_DUP,_ROT2,_DUP,_ROT2,_ADD,_SQRT,_ROT, _DIV,_SQRT,_ATAN,_SWAP,END, //483 R2P r=sqrt(x*x+y*y) a=atan(y/x)

  _3,_6,_0,_0,_MUL,_DOT,_0,_0,_1,_ADD, // H2HMS *3600+1e-2 - avoid rounding leap
  _DUP,_DUP,_3,_6,_0,_0,_DIV,_INT,_SWAP, //h=(int)(a/3600)
  _DUP,_DUP,_3,_PICK,_3,_6,_0,_0,_MUL,_SUB,_6,_0,_DIV,_INT,_SWAP, //m=(int)((a-h*3600)/60)
  _OVER,_6,_0,_MUL,_SUB,_3,_PICK,_3,_6,_0,_0,_MUL,_SUB, //s=a-m*60-h*3600
  _1,_0,_0,_0,_0,_DIV,_SWAP,_1,_0,_0,_DIV,_ADD,_ADD, //hms=h+m/100+s/10000
  _1,_0,_0,_0,_0,_MUL,_DOT,_5,_ADD,_INT,_1,_0,_0,_0,_0,_DIV,END, // Round 4

  _DOT,_0,_0,_0,_0,_1,_ADD, // HMS2H +1e-5 - avoid rounding leap
  _DUP,_INT,_SWAP, //h=(int)a
  _DUP,_DUP,_3,_PICK,_SUB,_1,_0,_0, _MUL,_INT,_SWAP, //m=(int)((a-h)*100)
  _DUP,_3,_PICK,_SUB,_1,_0,_0,_MUL,_2,_PICK,_SUB,_1,_0,_0,_MUL, //s=((a-h)*100-m)*100
  _6,_0,_DIV,_ADD,_6,_0,_DIV,_ADD,//END, // h.h=(s/60+m)/60+h
  _1,_0,_0,_0,_0,_MUL,_DOT,_5,_ADD,_INT,_1,_0,_0,_0,_0,_DIV,END, // Round 4

  _2,_DOT,_5,_4,_MUL,END, // IN2CM   -vvv- CONVERSIONS -vvv-
  _1,_NOP,_IN2CM,_DIV,END, // CM2IN
  _0,_DOT,_6,_2,_1,_3,_7,_1,_1,_MUL,END, // KM2SM
  _1,_NOP,_KM2SM,_DIV,END, // SM2KM
  _0,_DOT,_5,_3,_9,_9,_5,_6,_8,_MUL,END, // KM2NM
  _1,_NOP,_KM2NM,_DIV,END, // NM2KM
  _3,_DOT,_7,_8,_5,_4,_1,_1,_8,_DIV,END, // L2GAL
  _1,_NOP,_L2GAL,_DIV,END, // GAL2L
  _1,_DOT,_8,_MUL,_3,_2,_ADD,END, // C2F
  _3,_2,_SUB,_1,_DOT,_8,_DIV,END, // F2C
  _2,_DOT,_2,_0,_4,_6,_2,_2,_6,_MUL,END, // KG2LBS
  _1,_NOP,_KG2LBS,_DIV,END, // LBS2KG

  _SWAP,_1,_0,_0,_DIV,_DUP,_ROT,_1,_ADD,_SWAP,_PWR,_DUP,_DUP,_1,_SUB,_SWAP,_DIV,_SWAP,_DIV,END, //713 PV PV(i,n)=((1+i)^n-1)/(1+i)^n/i
  _SWAP,_2,_DIV,_NEG,_DUP,_DUP,_MUL,_ROT2,_SUB,_SQRT,_OVER,_OVER,_ADD,_ROT,_SUB,END, //733 QE xx+px+q=0 (-p/2+-sqrt(pp/4-q))
  _OVER,_OVER,_DIV,_INT,_MUL,_SUB,END, // Modulo

  _DUP,_MUL,_NEG,_2,_DIV,_EXP,_2,_PI,_MUL,_SQRT,_INV,_MUL,END, //PDF = exp(-x*x/2)/sqrt(2*PI)
  _DUP,_DUP,_DUP,_MUL,_MUL,_DOT,_0,_7,_MUL,_NEG, //CDF ~ 1/(1+exp(-0.07*x^3-1.6*x))
  _SWAP,_1,_DOT,_6,_MUL,_NEG,_ADD,_EXP,_1,_ADD,_INV,END,

  _NOP,END,_NOP,END,_NOP,END,_NOP,END,_NOP,END, // fnA/B/C/D/E   -vvv- FUNCTIONS -vvv-

  _NOP,END,_NOP,END,_NOP,END,_NOP,END, // A1 - D1   -vvv- RACK CELLS -vvv-
  _NOP,END,_NOP,END,_NOP,END,_NOP,END, // A2 - D2
  _NOP,END,_NOP,END,_NOP,END,_NOP,END, // A3 - D3
  _NOP,END,_NOP,END,_NOP,END,_NOP,END, // A4 - D4
  _NOP,END,_NOP,END,_NOP,END,_NOP,END, // A5 - D5
  _NOP,END,_NOP,END,_NOP,END,_NOP,END, // A6 - D6
  _NOP,END,_NOP,END,_NOP,END,_NOP,END, // A7 - D7
  _NOP,END,_NOP,END,_NOP,END,_NOP,END, // A8 - D8

  _NOP,_2,_9,_9,_7,_9,_2,_4,_5,_8,_NOP,END, // c: Speed of light   -vvv- 36 PHYSICAL CONSTANTS -vvv-
  _NOP,_9,_DOT,_8,_0,_6,_6,_5,_NOP,END, //  g: Acceleration of gravity
  _NOP,_6,_DOT,_6,_7,_4,_3,_NOP,_1,_1,_NEG,_EE,END, // G: Newton constant of gravity
  _NOP,_0,_DOT,_0,_2,_2,_7,_1,_0,_9,_5,_NOP,END, // Vm: Molar volume of ideal gas
  _NOP,_6,_DOT,_0,_2,_2,_1,_4,_1,_NOP,_2,_3,_EE,END, // NA: Avogadro constant
  _NOP,_1,_0,_9,_7,_3,_7,_3,_2,_NOP,END, // Rinf: Rydberg constant
  _NOP,_6,_DOT,_6,_2,_6,_0,_7,_0,_NOP,_3,_4,_NEG,_EE,END, // h: Planck constant
  _NOP,_2,_DOT,_0,_6,_7,_8,_3,_4,_NOP,_1,_5,_NEG,_EE,END, // Phi0: Magnetic flux quantum
  _NOP,_5,_DOT,_2,_9,_1,_7,_7,_2,_NOP,_1,_1,_NEG,_EE,END, // a0: Bohr radius
  _NOP,_1,_DOT,_3,_8,_0,_6,_4,_9,_NOP,_2,_3,_NEG,_EE,END, // k: Boltzmann constant
  _NOP,_8,_DOT,_3,_1,_4,_4,_6,_3,_NOP,END, // R: Molar gas constant
  _NOP,_9,_6,_4,_8,_5,_DOT,_3,_3,_NOP,END, // F: Faraday constant

  _NOP,_2,_7,_3,_DOT,_1,_5,_NOP,END, // t: Celsius temperature
  _NOP,_1,_0,_1,_3,_2,_5,_NOP,END, // atm: Standard atmosphere
  _NOP,_1,_DOT,_6,_0,_2,_1,_7,_7,_NOP,_1,_9,_NEG,_EE,END, // e: Elementary charge
  _NOP,_8,_DOT,_8,_5,_4,_1,_8,_8,_NOP,_1,_2,_NEG,_EE,END, // eps0: Vacuum electric permittivity
  _NOP,_1,_DOT,_2,_5,_6,_6,_3,_7,_NOP,_6,_NEG,_EE,END, // mu0: Vacuum magnetic permeability
  _NOP,_3,_7,_6,_DOT,_7,_3,_0,_3,_NOP,END, // Z0: Impedance of vacuum
  _NOP,_1,_DOT,_6,_6,_0,_5,_3,_9,_NOP,_2,_7,_NEG,_EE,END, // mU: Atomic mass constant
  _NOP,_2,_DOT,_8,_1,_7,_9,_4,_0,_NOP,_1,_5,_NEG,_EE,END, // re: Electron radius
  _NOP,_9,_DOT,_1,_0,_9,_3,_8,_4,_NOP,_3,_1,_NEG,_EE,END, // me:Electron mass
  _NOP,_1,_DOT,_6,_7,_2,_6,_2,_2,_NOP,_2,_7,_NEG,_EE,END, // mp: Proton mass
  _NOP,_1,_DOT,_6,_7,_4,_9,_2,_7,_NOP,_2,_7,_NEG,_EE,END, // mn: Neutron mass
  _NOP,_1,_DOT,_8,_8,_3,_5,_3,_2,_NOP,_2,_8,_NEG,_EE,END, // Mmu: Muon mass

  _NOP,_9,_DOT,_2,_7,_4,_0,_1,_0,_NOP,_2,_4,_NEG,_EE,END, // B: Bohr magneton
  _NOP,_5,_DOT,_0,_5,_0,_7,_8,_4,_NOP,_2,_7,_NEG,_EE,END, // muN: Nuclear magneton
  _NOP,_9,_DOT,_2,_8,_4,_7,_6,_5,_NEG,_2,_4,_NEG,_EE,END, // mue: Electron magnetic moment
  _NOP,_1,_DOT,_4,_1,_0,_6,_0,_7,_NOP,_2,_6,_NEG,_EE,END, // mup: Proton magnetic moment
  _NOP,_9,_DOT,_6,_6,_2,_3,_6,_5,_NEG,_2,_7,_NEG,_EE,END, // mun: Neutron magnetic moment
  _NOP,_4,_DOT,_4,_9,_0,_4,_4,_8,_NEG,_2,_6,_NEG,_EE,END, // mumu: Muon magnetic moment
  _NOP,_7,_DOT,_2,_9,_7,_3,_5,_4,_NOP,_3,_NEG,_EE,END, // alpha: Fine structure constant
  _NOP,_5,_DOT,_6,_7,_0,_3,_7,_4,_NOP,_8,_NEG,_EE,END, // sigma: Stefan-Boltzmann constant
  _NOP,_7,_DOT,_7,_4,_8,_0,_9,_2,_NOP,END, // G0: Conductance quantum
  _NOP,_2,_DOT,_6,_7,_5,_2,_2,_2,_NOP,_8,_EE,END, // gamp: Proton gyromagnetic ratio
  _NOP,_3,_DOT,_7,_4,_1,_7,_7,_2,_NOP,_1,_6,_NEG,_EE,END, // C1: First radiation constant
  _NOP,_1,_DOT,_4,_3,_8,_7,_7,_7,_NOP,_2,_NEG,_EE,END, // C2: Second radiation constant
};
static uint16_t mp=0; // Memory location pointer

static void memreset(void){ // Delete name[]/mem[] and copy initname[]/initmem[] to name[]/mem[]
  memset(name,'\0',(MAXCORE+MAXBINS+MAXUSR)*(MAXNAMELEN+1)); memcpy(name,initname,sizeof(initname)); // name
  namenr=sizeof(initname)/(MAXNAMELEN+1); // Size of mem
  memset(mem,'\0',MAXMEM); memcpy(mem,initmem,sizeof(initmem)); // mem
}

static uint16_t seeknextend(uint pos){while(mem[++pos]!=END) if(pos>=MAXMEM) return(0); return(pos);} // Seek (after pos) next END
static uint16_t mpos(byte n){ // Find position of n-th program in mem[]
  uint pos=0; while(n-- && pos<MAXMEM-1) pos=seeknextend(pos);
  return(pos+1);
}

static uint16_t memsize(void){return(seeknextend(mpos(namenr-1)));} // mem-size (position of last END)

//static void correctcmddel(byte n){ // Correct cmds in mem (after delete)
//  for(uint i=0;i<memsize();i++) if(mem[i]!=END && mem[i]>n) mem[i]--;
//}

static void memdel(byte n){ // Delete n-th mem entry (incl. END)
  uint16_t mto=mpos(n), mfrom=seeknextend(mto)+1; memcpy(mem+mto,mem+mfrom,memsize()-mfrom);
}
static void namedel(byte n){ // Delete n-th name[] entry
  memmove(name[n],name[n+1],(namenr-1-n)*(MAXNAMELEN+1));
}

static void inscmdname(byte n){ // Insert name to edit string
  byte len=strlen(name[n]);
  if(strlen(es)<MAXGETS-len-1){
    if(findwordpos(name[n])>_DOT && escurpos) scat(es,' ',escurpos++); // Leading blank
    for(byte i=0;i<len;i++) scat(es,name[n][i],escurpos++);
  }
}

static void sort(void){ // Sort name[] alphabetically to namesort[]
  for(byte i=0;i<namenr;i++) namesort[i]=i; // Initialize
  for(byte k=namenr-1;k;k--) for(byte i=0;i<k;i++){ // Outer and inner loop
    if(strcmp(name[namesort[i]],name[namesort[i+1]])>0){ // Compare
      byte tmp=namesort[i]; namesort[i]=namesort[i+1]; namesort[i+1]=tmp; // Swap
    }
  }
}

#define DELTAX 0.001 // Analysis specs
#define MAXLAPS 20
#define STRIPES 10
static byte runs=0, laps=0, issolve=FALSE, isint=FALSE, isslope=FALSE; // Solve, Integrate, Slope
static double intf=0.0, intdelta=0.0, slopex=0.0;
static uint16_t fnmp; // Mem pointer to FNx

static void pts(void){if(strlen(is)){if(lifted){pop();} pushs(is);} lifted=FALSE;} // Push input string

static void _num(byte k){ // NumInput
  if(strlen(is)<MAXGETS){
    byte c; if(isAF && k>=1 && k<=6) c=k-1+'a'; else if(k==KDOT) c='.'; else c=k+'0'; // Insert a-f,dot or 0-9
    scatc(is,c);
    isAF=FALSE;
  }
}
static void _n0(void){_num(0);} static void _n1(void){_num(1);} static void _n2(void){_num(2);}
static void _n3(void){_num(3);} static void _n4(void){_num(4);} static void _n5(void){_num(5);}
static void _n6(void){_num(6);} static void _n7(void){_num(7);} static void _n8(void){_num(8);}
static void _n9(void){_num(9);} static void _ndot(void){if(ishex) isAF=TRUE; else _num(KDOT);}

static void _add(void){ // +
  if(isc){double a=pop(),b=pop(),c=pop(),d=pop(); push(dadd(b,d)); push(dadd(a,c));} // Complex
  else push(dadd(pop(),pop()));
}
static void _atan(void){push(datan(pop(),1.0)); _rad2deg();} // ATAN
static void _begin(void){apush(mp);} // BEGIN
static void _chs(void){push(-pop());} // CHS
static void _cla(void){dp=0;} // CLa
static void _condeq0(void){push(pop()==0.0);} // CONDITION =0
static void _condle(void){push(pop()>=pop());} // CONDITION <=
static void _condseek(void) { // CONDITION - seek next ELSE or THEN
  byte isloop=TRUE, cltmp=0; // Local conditional level
  while(isloop){
    byte c=0;
    if(mp>=sizeof(mem)) isloop=FALSE; // No corresponding ELSE or THEN
    else if(c==_IF) cltmp++; // Nested IF found
    else if(cltmp && c==_THEN) cltmp--; // Nested IF ended
    else if(!cltmp && (c==_ELSE || c==_THEN)) isloop=FALSE;
    else c=mem[mp++]; // Builtin
  }
}
static void _condelse(void){ // CONDITION ELSE
  _condseek(); // Seek next THEN
  cl--;
}
static void _condif(void){ // CONDITION IF
  cl++; // Increment conditional level
  if(!pop()) _condseek(); // FALSE-Clause - seek next ELSE or THEN
}
static void _condthen(void){cl--;} // CONDITION THEN - Decrement conditional level
static void _cos(void){_deg2rad(); push(dcos(pop()));} // COS
static void _deg2rad(void){push(RADEG); _div();} // DEG2RAD
static void _div(void){ // /
  if(isc){ // Complex
    double a=pop(), b=pop(), c=pop(), d=pop(), n=dadd(dmul(a,a),dmul(b,b));
    push(ddiv((dsub(dmul(a,d),dmul(b,c))),n)); push(ddiv((dadd(dmul(a,c),dmul(b,d))),n));
  }
  else{_inv(); _mul();}
}
static void _do(void){pts(); doi=pop(); isdo=TRUE;} // DO
static void _drop(void){byte l=strlen(is); if(l) is[l-1]='\0'; else pop();} // DROP
static void _dup(void){ // DUP
  if(isc){double a=pop(), b=pop(); push(b); push(a); push(b); push(a);}
  else lastx=push(push(pop())); // Includes lastx (when pressing ENTER)
  lifted=TRUE;
}
static void _ee(void){double m=10.0; int e=pop(); if(e<0){m=0.1; e=-e;} while(e--){push(m); _mul();}} // EE
static void _exp(void){push(dexp(pop()));} // EXP
static void _fkeyf(void){isfg=(isfg==1?0:1); ishyp=0;} // F-key f
static void _fkeyg(void){isfg=(isfg==2?0:2); ishyp=0;} // F-key g
static void _fn(void){byte k=key-KSQRT+1; fn=(fn==k?0:k);} // Set FN
static void _fncalc(void){ // Calc FN value
  if(fn){char s[MAXNAMELEN+1]="FNx"; s[2]=fn+'A'-1; mp=mpos(findwordpos(s));}
}
static void _fninit(void){char s[MAXNAMELEN+1]="FNx"; s[2]=fn+'A'-1; fnmp=mpos(findwordpos(s)); pts();} // Init FN
static void _fnintegral(void){ // INTEGRAL
  if(fn){
    _fninit(); _swap(); limita=pop(); intdelta=ddiv(ddiv(dsub(push(pop()),limita),2.0),STRIPES);
    intf=0.0; isint=TRUE; runs=isfg=0;
  }
}
static void _fnplot(void){ // PLOT
  if(fn){
    pts(); _fninit(); memset(plot,0,sizeof(byte)*PLOTX); isplot=isplotcalc=TRUE; dwidth=DWIDTHPLOT; runs=laps=isfg=0;
    limitb=pop(); limita=push(pop()); intdelta=ddiv(dsub(limitb,limita),(PLOTX-1));
  }
}
static void _fnslope(void){ // SLOPE
  if(fn){
    pts(); slopex=push(dsub(pop(),dmul(2.0,DELTAX))); // f2-
    _fninit(); intf=0.0; runs=0; isslope=TRUE; //isfg=0;
  }
}
static void _fnsolve(void){if(fn){_fninit(); _dup(); _dup(); issolve=TRUE; runs=laps=0;}} // SOLVE
static void _hex(void){ishex=!ishex;} // HEX
static void _int(void){ // Integer (works for negative values)
  char s[DWIDTHMAX+1+1]; ll2s(s,pop()); pushs(s);
}
static void _inv(void){ // 1/X
  if(isc){
    double a=pop(),b=pop(),n=dadd(dmul(a,a),dmul(b,b));
    push(-ddiv(b,n)); push(ddiv(a,n));
  }
  else push(ddiv(1.0,pop())); 
}
/*
static void _key(void){ // KEY
  keyrelease();
  byte k; while((k=scankey())==END) sleep_ds(offtime*10, WT_ALL_KEYS); // Wait (idle)
  push(k);
  keyrelease();
}
*/
static void _lastx(void){push(lastx);} // LASTx
static void _ln(void){push(dln(pop()));} // LN
static void _nand(void){push(~((long)pop()&(long)pop()));} // NAND
static void _mul(void){ // *
  if(isc){ // Complex
    double a=pop(), b=pop(), c=pop(), d=pop();
    push(dadd(dmul(b,c),dmul(a,d))); push(dsub(dmul(a,c),dmul(c,d)));
  }
  else push(dmul(pop(),pop()));
}
static void _pi(void){push(PI);} // PI
static void _pick(void){byte n=pop(); if(n>=1 && n<=dp) push(ds[dp-n]);} // PICK
static void _rad2deg(void){push(RADEG); _mul();} // RAD2DEG
static void _rnd(void){push(rnd());} // RND
static void _rot(void){_swap(); double b=pop(); _swap(); push(b);} // ROT
static void _show(void){isshow=TRUE;} // SHOW
static void _storcl(void){push(store[((long)pop())%10]);} // RCL
static void _stosto(void){byte n=((long)pop())%10; push(store[n]=pop());} // STO
static void _sub(void){ // -
  if(isc){double a=pop(), b=pop(), c=pop(), d=pop(); push(dsub(d,b)); push(dsub(c,a));} // Complex
  else{_chs(); _add();}
}
static void _swap(void){ // SWAP
  double a=pop(),b=pop(),c=0.0,d=0.0;
  if(isc){c=pop(),d=pop(); push(b); push(a); push(d); push(c);}
  else{push(a); push(b);}
}
static void _until(void){ // UNTIL
  if(!ap) ; // No BEGIN for this UNTIL
  else if(pop()) apop(); // Go on (delete return address)
  else apush(mp=apop()); // Go back to BEGIN
}

static const void (*core[])(void)={ // Core function array
  &_n0,&_n1,&_n2,&_n3,&_n4,&_n5,&_n6,&_n7,&_n8,&_n9, //0
  &_ndot,&nop,&_add,&_sub,&_mul,&_div,&_chs,&_ee,&_dup, //10
  &_exp,&_ln,&_swap,&_inv,&_cos,&_drop,&_deg2rad,&_rad2deg,&_atan,&_int, //19
  &_rot,&_cla,&_lastx,&_nand,&_pi,&_condeq0,&_condle,&_condif,&_condelse,&_condthen, //29
  &_begin,&_until,&_pick,&_stosto,&_storcl,&_fn,&nop,&_hex,&_fnsolve,&_fnintegral, //39
  &_fncalc,&_fnslope,&_fnplot,&_do,&_rnd,&_show //49
};
static void doit(byte cmd){ // Execute (core) command
  if(cmd>KDOT && cmd!=_DROP) pts(); // Push input string (except subroutines treating input string)
  (*core[cmd])();
  if(!iscmd) isfg=0; // Reset f keys (not for parsing procedure in CMD)
  isc=FALSE;
}

static void calcinit(void){iscalc=TRUE; ishex=FALSE; mp=0; lastselected=_NOP;} // Init
static void tos2clip(void){d2sn(push(pop()),clip,DWIDTH);} // Copy TOS to clip (when leaving CALC)
static void calcquit(void){iscalc=isAF=FALSE; isfg=0; if(istos2clip){tos2clip();istos2clip=FALSE;}} // Quit

static void printis(byte line, byte maxlen){ // Print input string
  scatc(is,'_'); // Add '_'
  byte len=strlen(is); satdot(is+(len>maxlen?len-maxlen:0),X1,line); // Print limited input string
  is[len-1]='\0'; // Remove '_'
}

static void printcalc(void){ // Print input string resp. stack
  if(isshow){
    double f=(dp?_abs(ds[dp-1]):0.0);
    if(f>0.0){while(f<1e14) f=dmul(f,10.0); while(f>=1e15) f=ddiv(f,10.0);}
    llat(f,X1,1);
    isshow=FALSE;
  }
  else if(isc){
    dwidth=DWIDTHCALCCOMPLEX;
    printstack(0,X1,1); printstack(1,X2,1);
    printstack(2,X1,0); printstack(3,X2,0);
    dwidth=DWIDTH;
  }
  else if(isbig){
    fsize=FSIZEL;
    if(strlen(is)) printis(0,MAXFIG); else printstack(0,X1,0);
    fsize=FSIZES;
  }
  else{
    if(strlen(is)){printis(1,MAXTXT); printstack(0,X1,0);}
    else{printstack(0,X1,1); printstack(1,X1,0);}
  }
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  C M D  -  Command prompt

static byte isparsees=FALSE; // Parsing edit string
static byte esparsepos=0; // Parse position in es
static char esword[32+1];

static void cmdinit(void){iscmd=ises=TRUE; escurpos=0; dp=0; es[0]='\0';} // Init
static void parseinit(void){is[0]='\0'; dp=0; isparsees=TRUE; lifted=FALSE;} // Init parsing input string ivs

static void interpret(char* s){ // Interpret and execute word
  byte pos=findwordpos(s);
  if(pos!=END && pos>KDOT) mp=mpos(pos); // Execute command (not number)
  else pushs(s); // Try number
}

static void getnextword(void){ // Find next word in es (esword)
  esword[0]='\0';
  while(es[esparsepos]==' ' && esparsepos<strlen(es)) esparsepos++; // Skip whitespaces
  while(es[esparsepos]!=' ' && esparsepos<strlen(es)) scatc(esword,es[esparsepos++]); // Copy word
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  D I C T  -  Dictionary

static byte isdict=FALSE, dictnr=0;

static void dictinit(void){isdict=TRUE; sort(); isfg=0;}
static void dictinc(void){dictnr=_inc(dictnr,namenr);} // Next dict entry
static void dictdec(void){dictnr=_dec(dictnr,namenr);} // Previous dict entry

static void printdict(void){ // Print command
  sat(name[namesort[dictnr-1]],X1,0); // Previous
  fsize=FSIZEL; sat(name[namesort[dictnr]],X1+5*FWW-FWW/2,0); fsize=FSIZES;
  sat(name[namesort[dictnr+1]],X1+13*FWW,1); // Next
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  M E D  -  Edit mem[] and name[]

static byte ismed=FALSE, isedname=FALSE;
static byte mednr, mednrbuf; // mem pointer

static void makemeds(void){ // Make med string
  if(isedname) strcpy(es,name[namesort[mednr]]); // Edit program name
  else{ // Edit program
    byte curpos=0; uint16_t pos=mpos(namesort[mednr]);
    while(mem[pos]!=END){
      for(byte i=0;i<strlen(name[mem[pos]]) && curpos<MAXGETS;i++) es[curpos++]=name[mem[pos]][i]; // Add cmd name
      es[curpos++]=' '; // Add ' '
      pos++;
    }
    es[curpos-1]='\0'; // Overwrite last ' ' with EOS
  }
  escurpos=strlen(es); // Set cursor pos to end of string
}

static void medinit(void){ismed=TRUE; sort(); mednr=0; makemeds(); ishex=FALSE;} // Init
static void medmeminit(void){ises=TRUE; makemeds();} // Init cmd edit
static void mednameinit(void){ises=isedname=TRUE; makemeds();} // Init name edit

static void medinc(void){mednr=_inc(mednr,namenr);} // Next mem entry
static void meddec(void){mednr=_dec(mednr,namenr);} // Previous mem entry

static void s2cmd(byte* cmd, char* s){ // Convert es to array of commands
  esparsepos=0; byte cmdnr=0; getnextword(); // Get first esword
  while(strlen(esword)!=0){
    byte pos=findwordpos(esword);
    if(pos!=END) cmd[cmdnr++]=pos; // Word found - single command
    else for(byte i=0;i<strlen(esword);i++){ // Word not found - number?
      byte n=esword[i]; if(n=='.') cmd[cmdnr++]=_DOT; else if(n>='0' && n<='9') cmd[cmdnr++]=n-'0'; else break;
    }
    getnextword(); // Get next esword
  }
}

static void fillcell(byte cell, byte* cmd){ // Fill cell with string of commands
  uint16_t mpos1=mpos(cell), mpos2=seeknextend(mpos1)+1, prelen=mpos2-mpos1-1; // Old limits (after END)
  byte postlen=0; while(cmd[postlen]!=END && postlen<MAXGETS) postlen++; // New limits
  if(memsize()-prelen+postlen<MAXMEM){ // Sufficient free space?
    if(postlen<prelen) memcpy(mem+mpos1+postlen,mem+(mpos2-1),memsize()-(mpos2-1)); // Reduce space
    else if(postlen>prelen) memmove(mem+mpos1+postlen,mem+(mpos2-1),memsize()-(mpos2-1)+1); // Make space
    memcpy(mem+mpos1,cmd,postlen); // Copy cmd to mem
  }
}
static void savemem(void){ // Save es to mem[mednr]
  if(!strlen(es)) strcpy(es,"NOP"); // Do not save empty string (save NOP)
  byte cmd[MAXGETS+1]={END}; sfill((char*)cmd,END,MAXGETS); s2cmd(cmd,es); // Convert es to commands
  if(cmd[0]!=END) fillcell(namesort[mednr],cmd); // Save if no regular command
}
static void savename(void){ // Save es to name[]
  if(strlen(es)) memcpy(&name[namesort[mednr]],es,MAXNAMELEN);
  strcpy(es,name[namesort[mednr]]); // 'Repair' es (for later findwordpos)
}
static void copyprg(void){ // Copy program from mednrbuf to mednr
  byte mednrold=mednr; mednr=mednrbuf; // Set mednr to source prg (buf)
  makemeds(); mednr=mednrold; savemem(); // Copy source prg to es and save es to target prg
}

static void printmed(void){ // Print med-string, -number and -name
  char s[MAXTXT+1]; // Edit string
  byte len=_min(strlen(es),MAXTXT); memcpy(s,es,len); s[len]='\0', sat(s,X1,0); // String
  sat(name[namesort[mednr]],X1,1); llat(mednr,X2+1+FWW,1); llat(namenr-1,X2+1+5*FWW,1); // Name, number, count
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  R A C K  -  Spreadsheet

static byte israck=FALSE, israckview=FALSE, selcell=0;
static byte shiftleft=0, shiftup=0, oldshiftleft=0, oldshiftup=0, oldselcell=0; // View shift, save for reference
static byte isreval=FALSE, revalstart, revalend, revalnr; // For evaluating rack cells

#define RC 4 // Spreadsheet dimensions
#define RR 8
#define RCELLS (RR*RC) // Max number of cells
#define MAXCELLTXT 7 // Max chars per text cell

static double rval[RCELLS]; // Cell values
static char rtxt[RCELLS][MAXCELLTXT+1]={'\0'};

static void reval(void){ // Start spreadsheet evaluation
  isreval=TRUE; revalstart=revalnr=findwordpos("A1"); revalend=findwordpos("D8");
}

static void rinit(void){israck=TRUE; dwidth=DWIDTHRACK; reval();}

#define cell2col(n) ((n)%RC+1) // Cell->col
#define cell2row(n) ((n)/RC+1) // Cell->row
static void cell2s(char* s, byte n){*s=cell2col(n)+'A'-1; *++s=cell2row(n)+'0';} // Convert cell number to cell name

static void cell2mednr(byte n){ // Set mednr due to selcell
  char s[2+1]={0}; cell2s(s,n); mednr=val2pos(findwordpos(s));
}

static void rdel(void){ // Delete complete sheet
  sort(); strcpy(es,"NOP"); // Prepare
  for(byte i=0;i<RCELLS;i++){cell2mednr(i); savemem();} // Delete cells (overwrite with NOP)
  for(byte i=0;i<RCELLS;i++) rtxt[i][0]='\0'; // Delete cells text
}

static void rleft(void){ // Left
  if(selcell) selcell--;
  shiftleft=FALSE; if(cell2col(selcell)==RC) shiftleft=TRUE;
}
static void rright(void){ // Right
  if(selcell<RCELLS-1) selcell++;
  shiftleft=TRUE; if(cell2col(selcell)==1) shiftleft=FALSE;
}
static void rup(void){shiftup=FALSE; if(selcell>=RC) selcell-=RC;} // Up
static void rdown(void){shiftup=TRUE; if(selcell<RCELLS-RC) selcell+=RC;} // Down

static void editcell(void){ // Edit cell (with es)
  ises=TRUE; isedname=FALSE; sort();
  cell2mednr(selcell);
  makemeds();
}
static void editcelltxt(void){ // Edit cell text (with es)
  ises=TRUE; isedname=TRUE; sort(); strcpy(es,rtxt[selcell]); escurpos=strlen(rtxt[selcell]);
}

static void savecelltxt(void){ // Save es to rtxt
  char *s=rtxt[selcell], *e=es; byte n=MAXCELLTXT;
  do{*s=*e;} while(--n && *s++ && *e++);
  isedname=FALSE;
}

static void printlocation(void){ // Print rack-grid at end of sbuf
  byte d[]={0xff,0xff,0xff,0xff}; d[selcell%4]=(1<<selcell/4)^0xff;
  memcpy(sbuf+SBYTES-5,d,4);
}

static void printcell(byte c, byte x, byte y){ // Print cell (incl. marker matrix)
  if(strlen(rtxt[c])) sat(rtxt[c],x,y); // Text
  else{double a=rval[c]; if(a==0.0) cat(F3DOT,x,y); else dat(a,x,y);} // Value
  if(c==selcell) cat(FCURR,x-fsize*FWW,y); // Cursor
}

static void printrack(void){
  if(israckview){fsize=FSIZEL; printcell(selcell,2*(FWW+1),0); fsize=FSIZES;} // One cell
  else{ // 4 cells
    static byte x1=FWW, x2=53+FWW;
    byte c=selcell; if(shiftup && c>=RC) c-=RC; if(shiftleft && c) c--; // Active cell
    printcell(c,x1,0); printcell(++c,x2,0); // 1st and 2nd cell
    printcell(c+=(RC-1),x1,1); printcell(++c,x2,1); // 3th and 4th cell
  }
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  E 6 B  -  Flight Calculator

static byte ise6b=FALSE, enr=0;

enum{ // Text token
  E_IAS=0,E_TAS,E_WCA,E_ft,E_C,
  E_WS,E_WA,E_GS,E_INPUT,E_DIST,
  E_EET,E_AT,E_ETA,E_FB,E_TIME,
  E_GPH,E_FUEL,E_EIA,E_QNH,E_OAT,
  E_PA,E_DA,E_TA,E_ANG,E_TOD,
  E_ROD,E_FR,E_Doff,E_Dflow,E_Dremain,
  E_CAngle,E_l2gal,E_gal2l,E_C2F,E_F2C,
  E_kg2lbs,E_lbs2kg,E_cm2in,E_in2cm,E_m2ft,
  E_ft2m,E_mps2fpm,E_fpm2mps,E_km2sm,E_sm2km,
  E_km2nm,E_nm2km,E_nm2sm,E_sm2nm,
};
static const char* const etxt[]={ // E6B text
  "IAS","TAS",(char[7]){'W','C','A','[',FDEG,']'},"H[ft]",cc2s(FDEG,'C'),
  "WS[kt]",(char[6]){'W','A','[',FDEG,']'},"GS[kt]","INPUT","NM",
  "EET","AT","ETA","FB[gal]","TIME[h]",
  "GPH","GAL","EIA[ft]","QNH[Hg]","OAT[C]",
  "PA[ft]","DA[ft]","TA[ft]",c2s(FDEG),"TOD[NM]",
  "ROD[fpm]","FR[NM]","Doff","Dflown","Dremain",
  (char[7]){'O','C','C','[',FDEG,']'},"l>gal","gal>l","C>F","F>C",
  "kg>lbs","lbs>kg","cm>in","in>cm","m>ft",
  "ft>m","m/s>fpm","fpm>m/s","km>sm","sm>km",
  "km>nm","nm>km","nm>sm","sm>nm"
};

static void t2r(byte cell, byte t){strcpy(rtxt[cell],etxt[t]);} // Copy E6B text (via token) to cell

// True Air Speed TAS=IAS*(1+(1.24*H+120*OAT-1800)/50000)
static void TAS(void){
  fillcell(_A4,(byte[]){_A2,_1,_DOT,_2,_4,_MUL,_A3,_1,_2,_0,_MUL,_ADD,_1,_8,_0,_0,_SUB,_5,_0,_0,_0,_0,_DIV,_1,_ADD,_A1,_MUL,END});
  t2r(1,E_IAS); t2r(5,E_ft); t2r(9,E_C); t2r(13,E_TAS);
}
// Wind Correction Angle WCA=asin(WS*sin(WA)/TAS)
// Ground Speed GS=TAS*cos(WCA)+WS*cos(WA)
static void WCA(void){
  fillcell(_A4,(byte[]){_A3,_SIN,_A2,_MUL,_A1,_DIV,_ASIN,END}); // WCA
  fillcell(_A5,(byte[]){_A4,_COS,_A1,_MUL, _A3,_COS,_A2,_MUL,_ADD,END}); // GS
  t2r(1,E_TAS); t2r(5,E_WS); t2r(9,E_WA); t2r(13,E_WCA); t2r(17,E_GS);
}
// Estimated Elapsed Time EET[min]=Distance[NM]/GS[kts]*60
// Estimated Time of Arrival ETA[h.mm]=AT(Actual Time)[h.mm]+EET
static void ETA(void){
  fillcell(_A3,(byte[]){_A1,_6,_0,_MUL,_A2,_DIV,END}); fillcell(_A5,(byte[]){_A4,_A3,_DIV,END});
  t2r(1,E_DIST); t2r(5,E_GS); t2r(9,E_EET); t2r(13,E_AT); t2r(17,E_ETA);
}
// PressureAlt PA=EIA+1000*(29.92-QNH)
// DensityAlt DA=PA+120*(OAT-(15-PA/500))
// TrueAlt TA=EIA+EIA*0.004*(OAT-(15-PA/500))
static void ALT(void){
  fillcell(_A4,(byte[]){_A2,_NEG,_2,_9,_DOT,_9,_2,_ADD,_1,_0,_0,_0,_MUL,_A1,_ADD,END}); // PA
  fillcell(_A5,(byte[]){_A4,_5,_0,_0,_DIV,_NEG,_1,_5,_ADD,_NEG,_A3,_ADD,_1,_2,_0,_MUL,_A4,_ADD,END}); // DA
  fillcell(_A6,(byte[]){_A4,_5,_0,_0,_DIV,_NEG,_1,_5,_ADD,_NEG,_A3,_ADD,_0,_DOT,_0,_0,_4,_MUL,_1,_ADD,_A1,_ADD,END}); // TA
  t2r(1,E_EIA); t2r(5,E_QNH); t2r(9,E_OAT); t2r(13,E_PA); t2r(17,E_DA); t2r(21,E_TA);
}
// TopOfDescent TOD[NM]=(H1-H2)/(6076.1*tan(ANG))
// RateOfDescent ROD[fpm]=GS[kt]*tan(ANG)*60076.12/60
static void TOD(void){
  fillcell(_A5,(byte[]){_A1,_A2,_SUB,_A4,_TAN,_DIV,_6,_0,_6,_7,_DOT,_1,_2,_DIV,END}); // TOP
  fillcell(_A6,(byte[]){_A4,_TAN,_A3,_MUL,_6,_0,_6,_7,_DOT,_1,_2,_MUL,_6,_0,_DIV,END}); // TOP
  t2r(1,E_ft); t2r(5,E_ft); t2r(9,E_GS); t2r(13,E_ANG); t2r(17,E_TOD); t2r(21,E_ROD);
}
// Consumption GPH=FUEL_BURNED[gal]/TIME[h]
// Endurance[h]=FUEL[GAL]/GPH
// Fuel Range FR[NM]=Endurance[h]*GS[kt]
static void GAL(void){
  fillcell(_A3,(byte[]){_A1,_A2,_DIV,END}); // GPH
  fillcell(_A5,(byte[]){_A4,_A3,_DIV,END}); // Endurance Time
  fillcell(_A7,(byte[]){_A5,_A6,_MUL,END}); // Range
  t2r(1,E_FB); t2r(5,E_TIME); t2r(9,E_GPH); t2r(13,E_FUEL); t2r(17,E_TIME);
  t2r(21,E_GS); t2r(25,E_FR);
}
// OffCourseCorrection: TotalCorrection[deg]=DistanceOff[NM]*(1/DistanceFlown[NM]+1/DistRemain[NM])*60
static void OCC(void){
  fillcell(_A4,(byte[]){_A2,_INV,_A3,_INV,_ADD,_A1,_MUL,_6,_0,_MUL,END});
  t2r(1,E_Doff); t2r(5,E_Dflow); t2r(9,E_Dremain); t2r(13,E_CAngle);
}
static void UNIT(void){
  t2r(1,E_INPUT); // Input cell
  fillcell(_A2,(byte[]){_A1,_CM2IN,END}); t2r(5,E_cm2in);
  fillcell(_A3,(byte[]){_A1,_IN2CM,END}); t2r(9,E_in2cm);
  fillcell(_A4,(byte[]){_A1,_DOT,_3,_0,_4,_8,_DIV,END}); t2r(13,E_m2ft);
  fillcell(_A5,(byte[]){_A1,_DOT,_3,_0,_4,_8,_MUL,END}); t2r(17,E_ft2m);
  fillcell(_A6,(byte[]){_A1,_DOT,_0,_0,_5,_0,_8,_DIV,END}); t2r(21,E_mps2fpm);
  fillcell(_A7,(byte[]){_A1,_DOT,_0,_0,_5,_0,_8,_MUL,END}); t2r(25,E_fpm2mps);
  fillcell(_C2,(byte[]){_A1,_KM2SM,END}); t2r(7,E_km2sm);
  fillcell(_C3,(byte[]){_A1,_SM2KM,END}); t2r(11,E_sm2km);
  fillcell(_C4,(byte[]){_A1,_KM2NM,END}); t2r(15,E_km2nm);
  fillcell(_C5,(byte[]){_A1,_NM2KM,END}); t2r(19,E_nm2km);
  fillcell(_C6,(byte[]){_A1,_NM2KM,_KM2SM,END}); t2r(23,E_nm2sm);
  fillcell(_C7,(byte[]){_A1,_SM2KM,_KM2NM,END}); t2r(27,E_sm2nm);
}
static void MISC(void){
  t2r(1,E_INPUT); // Input cell
  fillcell(_A2,(byte[]){_A1,_L2GAL,END}); t2r(5,E_l2gal);
  fillcell(_A3,(byte[]){_A1,_GAL2L,END}); t2r(9,E_gal2l);
  fillcell(_A4,(byte[]){_A1,_C2F,END}); t2r(13,E_C2F);
  fillcell(_A5,(byte[]){_A1,_F2C,END}); t2r(17,E_F2C);
  fillcell(_A6,(byte[]){_A1,_KG2LBS,END}); t2r(21,E_kg2lbs);
  fillcell(_A7,(byte[]){_A1,_LBS2KG,END}); t2r(25,E_lbs2kg);
}

static const void (*e6b[])(void)={ // Function array
  &TAS,&WCA,&ETA,&ALT,&TOD,&GAL,&OCC,&UNIT,&MISC
};
static const char* e6bfn[]={"TAS","WCA-GS","ETA","ALT","DESCENT","FUEL","OCC","UNIT","MISC"}; // Function names

static void setrack(void){ // Set rack to desired function
  rdel(); israck=TRUE; dwidth=DWIDTHRACK; selcell=0; shiftleft=shiftup=0; // Prepare RACK
  (*e6b[enr])(); reval(); // Fill rack and evaluate
}

static void printe6b(void){
  fsize=FSIZEL; llat(enr+1,X1,0); sat(e6bfn[enr],X1+4*FWW,0); fsize=FSIZES;
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  T T O P  -  Tabletop Calculator

static byte istt=FALSE;
//#define fix long long // Define fix format
typedef long long fix; // Define fix format

#define TTSTACKSIZE 4
static fix tts[TTSTACKSIZE], ttsto=0LL;
static byte ttp=0;
static fix tpush(fix n){ // Push number to data stack
  if(ttp>=TTSTACKSIZE){ // Float stack if full
    memmove(tts,tts+1,(TTSTACKSIZE-1)*sizeof(fix));
    ttp--;
  }
  return(tts[ttp++]=n);
}
static fix tpop(void){ // Pop value from data stack
  if(ttp) return(tts[--ttp]);
  return(0LL);
}

#define MAXTTDEC 3 // 0-3 decimals
#define MAXTTDECF 1000 // 10^MAXTTDEC
static byte ttdec=0; // Precision - number of decimals
#define fixn(i) (3*(i)+4) // Floating bits for i=ttdec precision
#define FIXF (1<<fixn(ttdec)) // Dynamic scaling factor (due to ttdec)
static uint16_t decf=0; // Decimal scaling factor
static void setdecf(void){decf=1; for(byte n=ttdec;n;n--) decf*=10;} // Set decf

static void ttinit(void){istt=TRUE; ishex=FALSE; lifted=FALSE; is[0]='\0'; setdecf();} // Init

static fix b2fix(byte a){return(a*FIXF);}
static byte fix2b(fix a){return(a/FIXF);}
static fix fixmul(fix a, fix b){return((a*b)/FIXF);}
static fix fixdiv(fix a, fix b){return((a*FIXF)/b);}

static void compensateup(void){ // Compensate stack (increasing precision)
  for(byte i=0;i<ttp;i++) tts[i]*=(1<<(fixn(ttdec+1)-fixn(ttdec)));
}
static void compensatedown(void){ // Compensate stack (decreasing precision)
  for(byte i=0;i<ttp;i++) tts[i]/=(1<<(fixn(ttdec)-fixn(0)));
}
static void ttinc(void){ // Increment decimal precision (Compensate stack)
  if(ttp){if(ttdec<MAXTTDEC) compensateup(); else compensatedown();}
  ttdec=_inc(ttdec,MAXTTDEC+1); setdecf();
}

static fix s2fix(char* s){ // Convert string to fix
  if(ishex){ // Hex
    fix val=0;
    while(*s){
      byte c=*s++;
      if(c>='0' && c<='9') c=c-'0'; else if(c>='a' && c<='f') c=c-'a'+'9'-'0'+1;
      val=(val<<4)|(c&0x0f);
    }
    return(val*FIXF);
  }
  else{ // Decimal
    char* dotpos=strchr(s,'.');
    char s1[MAXGETS+1], s2[MAXGETS+1]="";
    strcpy(s1,s); if(dotpos){s1[dotpos-s]='\0'; strcpy(s2,dotpos+1);}
    return(s2ll(s1)*FIXF+s2ll(s2)*FIXF/MAXTTDECF);
  }
}

#define MAXTTDIG 19 // Maximal digits of tt string
#define MAXITER 30 // Max interation steps (tsqrt)

static void tpushs(char* s){tpush(s2fix(s)); s[0]='\0';} // Push string to stack
static void tpts(void){if(strlen(is)){if(lifted){tpop();} tpushs(is);} lifted=FALSE;} // Push input string

static void _tnum(byte k){ // NumInput
  if(strlen(is)<MAXGETS){
    byte c; if(isAF && k>=1 && k<=6) c=k-1+'a'; else if(k==KDOT) c='.'; else c=k+'0'; // Insert a-f,dot or 0-9
    scatc(is,c);
    isAF=FALSE;
  }
}

static void _tn0(void){_tnum(0);} static void _tn1(void){_tnum(1);} static void _tn2(void){_tnum(2);}
static void _tn3(void){_tnum(3);} static void _tn4(void){_tnum(4);} static void _tn5(void){_tnum(5);}
static void _tn6(void){_tnum(6);} static void _tn7(void){_tnum(7);} static void _tn8(void){_tnum(8);}
static void _tn9(void){_tnum(9);} static void _tndot(void){if(ishex) isAF=TRUE; else _tnum(KDOT);}

static void _tadd(void){tpush(tpop()+tpop());} // ADD +
static void _tchs(void){tpush(-tpop());} // CHS
static void _tdiv(void){fix a=tpop(), b=tpop(); tpush(fixdiv(b,a));} // DIV /
static void _tdup(void){tpush(tpush(tpop())); lifted=TRUE;} // DUP
static void _tdrop(void){byte l=strlen(is); if(l) is[l-1]='\0'; else tpop();} // DROP
static void _tee(void){ // EE
  fix m=b2fix(10); sbyte e=fix2b(tpop());
  if(e<0) while(e++){tpush(m); _tdiv();} else while(e--){tpush(m); _tmul();}
}
static void _thex(void){ // HEX
  if(ishex) ishex=FALSE;
  else{
    if(ttdec && ttp) compensatedown(); // Compensate stack
    ishex=TRUE; ttdec=0; decf=1;
  }
}
static void _tmul(void){tpush(fixmul(tpop(),tpop()));} // MULT *
static void _tnand(void){tpush(~(tpop() & tpop()));} // NAND
static void _tpercent(void){_tswap(); _tdup(); _trot(); _tmul(); tpush(100LL*FIXF); _tdiv();} // % = B*x/100% (keep B)
static void _trot(void){_tswap(); fix b=tpop(); _tswap(); tpush(b);} // ROT
static void _tsqrt(void){ // SQRT Newton: x1=(x0+n/x0)/2 with x0=n
  fix n=tpop(), x=n;
  for(byte i=0;i<MAXITER;i++){
    fix xold=x; x=fixdiv(fixdiv(n,x)+x,b2fix(2));
    if(x==xold) break; // No change (root due to precision level reached)
    if(i>=MAXITER-1) x=n; // No (stable) solution found (or negative argument)
  }
  tpush(x);
}
static void _tstorcl(void){tpush(ttsto);} // RCL
static void _tstosto(void){tpush(ttsto=tpop());} // STO
static void _tsub(void){_tchs(); _tadd();} // -
static void _tswap(void){if(ttp>1){fix a=tpop(), b=tpop(); tpush(a); tpush(b);}} // SWAP

static const void (*tcore[])(void)={ // Core function array
  &_tn0,&_tn1,&_tn2,&_tn3,&_tn4,&_tn5,&_tn6,&_tn7,&_tn8,&_tn9, //0
  &_tndot,&_tnand,&_tadd,&_tsub,&_tmul,&_tdiv,&_tchs,&_tee,&_tdup, //10
  &_tsqrt,&nop,&nop,&_tpercent,&nop, //SQRT
  &nop,&nop,&_thex,&nop,&nop, //SST
  &nop,&nop,&_trot,&_tswap,&nop, //RS
  &nop,&nop,&nop,&_tstosto,&_tstorcl //ON
};

static void tdoit(byte cmd){ // Execute (core) command
  if(cmd>KDOT && cmd!=KBSP) tpts(); // Push input string (except subroutines treating input string)
  (*tcore[cmd])();
  isfg=0; // Reset f keys
}

static void fix2s(char* str, fix n){ // Convert fix number to string
  byte sep=1, sign=0; if(n<0LL){sign=1; n=-n;}
  char* s=str+MAXTTDIG; // String pointer (right aligned)
  n=(n*10LL*decf/FIXF+5LL)/10LL; // Scaling and rounding

  if(!n) *--s='0'; // Zero
  else if(ishex){ // Hex number
    while(n && s>str+sign){ // Limit length to (MAXTTDIG-1)
      char c=n%16LL; c=toasc(c); *--s=c; n/=16LL; // Mantissa
      if(s>str+sign && !(sep++%4)) *--s=' '; // Separator
    }
  }
  else{ // Decimal
    if(ttdec){ // Fraction
      for(byte i=0;i<ttdec;i++){*--s=(n%10LL)+'0'; n/=10LL;}
      *--s='.';
    }
    while(n && s>str+sign){ // Mantissa (limit length to MAXTTDIG and separators)
      *--s=(n%10LL)+'0'; n/=10LL; // Mantissa
      if(s>str+sign && !(sep++%3)) *--s=' '; // Separators
    }
  }
  if(sign) *--s='-'; // Sign
  if(n) strcpy(str,"---"); // General overflow
}
static void sattt(char* s, byte x, byte r){ // Print string at x|r with smaller spaces
  slead(s); // Delete trailing spaces
  for(;*s;x+=FWW,s++){cat(*s,x,r); if(*s==' ') x-=3; if(*s=='.') x--;}
}
static void printttstack(char* s, byte n, byte x, byte line){
  sfill(s,' ',MAXTTDIG); fix2s(s,tts[n]); sattt(s,x,line);
}
static void printtt(void){
  char s[MAXTTDIG+1];
  if(strlen(is)){printis(1,MAXTTDIG-1); if(ttp) printttstack(s,ttp-1,X1,0);} // Input string (+ TOS)
  else{ // Stack
    if(ttp>1){printttstack(s,ttp-2,X1,0); printttstack(s,ttp-1,X1,1);} // TOS-1 and TOS
    else if(ttp) printttstack(s,ttp-1,X1,1); // TOS
    else{strcpy(s,"_"); sattt(s,X1,1);} // Prompt
  }
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  C P U  -  CPU-Simulator

static byte iscpu=FALSE;

#define CPUMEMSIZE 64
static byte cpumem[CPUMEMSIZE];

static byte acc=0, reg=0, cpup=CPUMEMSIZE, cpupold=0, cpupoldexe=0, cpucmd=0, cpumemview=0;
static byte cpuout=0, iscpuin=FALSE, iscpupause=FALSE;

static void cpuinit(void){memset(cpumem,0x1f,CPUMEMSIZE);}
static void cpuclr(void){acc=reg=cpuout=cpupoldexe=0;} // Clear ACC, REG, ...
static void cpucla(void){cpuclr(); cpuinit();} // Clear all (incl. cpumem)
static void cpupoke(byte k){cpumem[cpumemview]=(cpumem[cpumemview]<<4)|(k&0x0f);} // Shift nibble to cpumem
static void cpuviewdec(void){cpumemview=_dec(cpumemview,CPUMEMSIZE);} // Decrement cpuview
static void cpuviewinc(void){cpumemview=_inc(cpumemview,CPUMEMSIZE);} // Increment cpuview

static void _cadd(void){acc+=reg;} // + ACC=ACC+REG
static void _cand(void){acc&=reg;} // & ACC=ACC&REG
static void _cinc(void){acc++;} // ++ Increment ACC
static void _cdec(void){acc--;} // -- Decrement ACC
static void _cdiv(void){acc/=reg;} // -/ ACC=ACC/REG
static void _cend(void){cpup=CPUMEMSIZE; isprintscreen=TRUE; keyrelease();} // END
static void _cin(void){iscpuin=TRUE; isprintscreen=TRUE; keyrelease(); cpupold=cpup; cpup=CPUMEMSIZE;} // IN
static void _cjp(void){cpup=((cpucmd&0x0f)<<2);} // JP to (4-th) adr aaaa<<2
static void _cjz(void){if(!acc) cpup=cpucmd&0x3f;} // JZ
static void _cmod(void){acc%=reg;} // % ACC=ACC%REG
static void _cmul(void){acc*=reg;} // * ACC=ACC*REG
static void _cn2A(void){acc=(acc<<4)|(cpucmd&0x0f);} // n2A - Shift nibble n to ACC
static void _cnop(void){} // NOP
static void _cnot(void){acc=~acc;} // ~ ACC=~ACC
static void _cout(void){cpuout=acc;} // OUT
static void _cor(void){acc|=reg;} // | ACC=ACC|REG
static void _cpse(void){iscpupause=TRUE; isprintscreen=TRUE; keyrelease(); cpupold=cpup; cpup=CPUMEMSIZE;} // PAUSE
static void _csl(void){acc<<=(cpucmd&0x07);} // <<n ACC=ACC<<n
static void _csr(void){acc>>=(cpucmd&0x07);} // >>n ACC=ACC>>n
static void _csub(void){acc-=reg;} // - ACC=ACC-REG
static void _cswap(void){byte tmp=acc; acc=reg; reg=tmp;} // SWP - Swap ACC and REG
static void _cxor(void){acc^=reg;} // ^ ACC=ACC^REG
static void _cA2a(void){cpumem[cpucmd&0x3f]=acc;} // Save A to (a)
static void _ca2A(void){acc=cpumem[cpucmd&0x3f];} // Load A from (a)

static const char* const cpuname[]={ // Init command names
 "NOP","n2A","SWP","A2a","a2A","++","--","+","-","*", //0
  "/", "%","<<n",">>n","&","|","~","^","JZ","OUT", //10
  "IN","PSE","JP","END" // 20
};
static const void (*cpucmdexe[])(void)={ // CPU commands
  &_cnop,&_cn2A,&_cswap,&_cA2a,&_ca2A,&_cinc,&_cdec,&_cadd,&_csub,&_cmul, //0
  &_cdiv,&_cmod,&_csl,&_csr,&_cand,&_cor,&_cnot,&_cxor,&_cjz,&_cout, //10
  &_cin,&_cpse,&_cjp,&_cend //20
};

enum{ // Exe codes
  _CNOP=0, _Cn2A, _CSWP, _CA2a, _Ca2A, _CINC, _CDEC, _CADD, _CSUB,_CMUL, //0
  _CDIV, _CMOD, _CSLn, _CSRn, _CAND, _COR, _CNOT, _CXOR, _CJZ, _COUT, //10
  _CIN, _CPSE, _CJP, _CEND //20
};

static byte cmd2exenr(byte cmd){ // Convert cmd to exe number
  byte opcode=(cmd&0xc0)>>6, hi=(cmd&0x30)>>4, lo=(cmd&0x0f);
  cpucmd=cmd;
  if(!opcode){                       //00..
    if(!hi) return(_Cn2A);           //..00 nnnn  n2A
    else if(hi==1){                  //..01
      if(!lo) return(_CSWP);         //.... 0000  swap
      else if(lo==1) return(_CINC);  //.... 0001  ++
      else if(lo==2) return(_CDEC);  //.... 0010  --
      else if(lo==3) return(_CADD);  //.... 0011  +
      else if(lo==4) return(_CSUB);  //.... 0100  -
      else if(lo==5) return(_CMUL);  //.... 0101  *
      else if(lo==6) return(_CDIV);  //.... 0110  /
      else if(lo==7) return(_CMOD);  //.... 0111  %
      else if(lo==8) return(_CAND);  //.... 1000  &
      else if(lo==9) return(_COR);   //.... 1001  |
      else if(lo==10) return(_CNOT); //.... 1010  ~
      else if(lo==11) return(_CXOR); //.... 1011  ^
      else if(lo==12) return(_COUT); //.... 1100  OUT
      else if(lo==13) return(_CIN);  //.... 1101  IN
      else if(lo==14) return(_CPSE); //.... 1110  PSE
      else if(lo==15) return(_CEND); //.... 1111  END
    }
    else if(hi==2){                  //..10       shift
      if(lo<7) return(_CSLn);        //.... 0nnn  <<n
      else return(_CSRn);            //.... 1nnn  >>n
    }
    else if(hi==3) return(_CJP);     //..11 aaaa  JP to node
  }
  else if(opcode==1) return(_CA2a);  //01aa aaaa  A2a
  else if(opcode==2) return(_Ca2A);  //10aa aaaa  a2A
  else if(opcode==3) return(_CJZ);   //11aa aaaa  JZa
  return(_CNOP);
}

static void printmem(char c, byte ptr, byte l){ // Print cpumem[ptr] at line
  cat(c,X1,l); llat(ptr,X1+FWW,l); bat(cpumem[ptr],X1+3+3*FWW,l);
  sat(cpuname[cmd2exenr(cpumem[ptr])],X1+6*FWW,l);
}
static void printcpu(void){
  printmem('m',cpumemview,0); printmem(FARRR,cpupoldexe,1); // Memory and cpup
  cat('a',X2+2*FWW,0); bat(acc,X2+3*FWW,0); cat('r',X2+3+5*FWW,0); bat(reg,X2+3+6*FWW,0); // ACC REG
  cat(FCURR,X2+2*FWW,1); bat(cpuout,X2+3*FWW,1); llat(cpuout,X2+3+5*FWW,1); // OUT
  if(cpuout>=FOFFSET) cat(cpuout,X2+9*FWW,1);
  if(iscpuin && !iscpupause) cat('?',X2+2*FWW,0); // ACC IN demanded
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  N O T E ,  T E X  - Text Editor

static byte istex=FALSE, istexup=FALSE, islinesplit=FALSE; // Indicate line split

#define MAXTEX 255 // Maximal length of edited text
#define MAXTEXDIG 19 // Digits to show
#define LF 0x0a // Line feed

static char tex[MAXTEX+1]={LF,[1 ... MAXTEX]='\0'}; // Tex buffer
static byte texline=0;
static char tstore[6][MAXTEX+1]; // Txt storage (6 slots)
static byte issave=FALSE, isload=FALSE;

static void texinit(void){istex=TRUE; texline=0; memset(tex,'\0',MAXTEX); tex[0]=LF;}

static char *texseek(byte n){char *p=tex; while(n && *p && p<tex+MAXTEX){if(*p++==LF) n--;} return(p);} // Pointer to n-th line of tex
static char *texsize(void){char *p=tex; while(*p && p<tex+MAXTEX) p++; return(p);} // Size of tex[]
static byte texlines(void){ // Seek last line
 byte line=0; char *p=tex; while(*p && p<tex+MAXTEX) if(*p++==LF) line++;
 return(line);
}

static void texstartedit(void){ // Edit selected line
  char *p1=texseek(texline), *p2=texseek(texline+1);
  if(p2==tex){tex[0]=LF; tex[1]=es[0]='\0';} // Empty file
  else{memcpy(es,p1,p2-p1-1); es[p2-p1-1]='\0';}
  escurpos=strlen(es);
  ises=TRUE;
}
static void texendedit(void){ // Insert edited line to tex
  char *p1=texseek(texline), *p2=texseek(texline+1), *eof=texsize(), len=strlen(es); byte prelen=p2-p1;
  memmove(p1+len,p2-1,eof-p2+1); memset(eof-(prelen-len)+1,'\0',eof-tex-(prelen-len));
  memcpy(p1,es,len); // Copy es to tex
}

static void linesplit(void){ // Split line at escurpos
  char *p1=texseek(texline);
  memmove(p1+escurpos+1,p1+escurpos,texsize()-p1+escurpos); *(p1+escurpos)=LF;
}
static void linedel(void){ // Delete recent line
  char *p1=texseek(texline), *p2=texseek(texline+1), *eof=texsize();
  memcpy(p1,p2,eof-p2); memset(eof-(p2-p1),'\0',(tex+MAXTEX)-(eof-(p2-p1)));
}
static void linejoin(void){ // Join recent line with next
  char *p2=texseek(texline+1);
  if(*p2) memcpy(p2-1,p2,texsize()-p2+1); // If there is a next line
}
static void linenewbefore(void){ // Add new line before recent line
  char *p1=texseek(texline);
  memmove(p1+1,p1,texsize()-p1); *p1=LF;
}
static void linenewafter(void){ // Add new line after recent line
  char *p=texseek(texline+1);
  memmove(p+1,p,texsize()-p); *p=LF; texline++;
}

static void tsave(byte n){memcpy(tstore[n],tex,MAXTEX+1);} // Save tex to slot n
static void tload(byte n){memcpy(tex,tstore[n],MAXTEX+1);} // Load tex from slot n

static void printslot(void){ // Print start of files (tstore) as menu text
  char s[24+1]; sfill(s,' ',24); const byte order[6]={3,4,5,0,1,2};
  for(byte i=0;i<6;i++) for(byte j=0;j<4;j++) if(tstore[i][j]==LF) break; else s[order[i]*4+j]=tstore[i][j];
  printbullets(s);
}
static void printtex(void){ // Print TEX
  if(issave || isload) printslot(); // Save/load menu
  else{ // Display 2 lines
    char s[MAXTEXDIG+1];
    for(byte i=0; i<2 && texline+i<texlines(); i++){
      char *p1=texseek(texline+i), *p2=texseek(texline+i+1);
      byte min=_min(MAXTEXDIG,p2-p1-1);
      memcpy(s,p1,min); s[min]='\0'; sat(s,X1,i);
    }
  }
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  D A T E  - Calendar app

static byte isdate=FALSE, ismonfirst=FALSE;

#define MAXCAL 20 // Digits per line

static int dateyear;
static byte datemonth, dateday, dateweek=0;
static const char* const monthname[]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};

static void datetoday(void){ // Set today (Jan=1, Year with 4 digits)
  dt_t d; tm_t t; getdate(&d,&t); dateyear=d.year+2000; datemonth=d.month; dateday=d.day;
}
static void dateinit(void){isdate=TRUE; datetoday();} // Init calendar

static byte daynumber(byte day, byte month, uint16_t year){ // Weekdaynumber of date (Sun=0)
  byte t[]={0,3,2,5,0,3,5,1,4,6,2,4};
  year-=month<3;
  byte offset=(year+year/4-year/100+year/400+t[month-1]+day)%7;
  if(ismonfirst) offset=(offset?offset-1:6);
  return(offset);
}
static byte numberofdays(byte month, uint16_t year){ // Number of days of a month
  if(month==2){ // February
    if(year%400==0 || (year%4==0 && year%100!=0)) return(29); // Switch year
    else return(28);
  }
  if(month==4 || month==6 || month==9 || month==11) return(30); // 30's
  return(31); // 31's
}
static byte wpm(void){ // Weeks per month (including offset)
  byte offset=daynumber(1,datemonth,dateyear), days=numberofdays(datemonth,dateyear);
  return(((days+offset-1+(ismonfirst?1:0))+7)/7);
}

static void dateweekdec(void){if(dateweek) dateweek--;} // Week-
static void dateweekinc(void){if(dateweek<wpm()-1) dateweek++;} // Week+
static void datemonthdec(void){if(datemonth>1) datemonth--; else{datemonth=12; dateyear--;}} // Month-
static void datemonthinc(void){if(datemonth<12) datemonth++; else{datemonth=1; dateyear++;}} // Month+
static void dateyeardec(void){dateyear--;} // Year-
static void dateyearinc(void){dateyear++;} // Year+

static void printdate(void){
  char s1[]="    ", s[MAXCAL+1]; sfill(s,' ',MAXCAL); // Temp and output string
  ssat(s,(ismonfirst?"MO TU WE":"SO MO TU"),0); // First weekday(s)
  s[10]=dateweek+FI1; // Week of month
  ssat(s,monthname[datemonth-1],12); ll2s(s1,dateyear); ssinsat(s,s1,16); // Date
  sat(s,X1,0); // Print header

  byte offset=daynumber(1,datemonth,dateyear); sfill(s,' ',MAXCAL);
  for(byte i=0;i<7;i++){ // Days
    sfill(s1,' ',2); s1[1]='_';
    if(!dateweek){if(i>=offset) i2s20(s1,i-offset+1);} // First week
    else{byte d=dateweek*7+1+i-offset; if(d<=numberofdays(datemonth,dateyear)) i2s20(s1,d);} // Other
    ssat(s,s1,i*3);
  }
  sat(s,X1,1); // Print days
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  T I M E  - World Time Zones

static byte istime=FALSE;

#define GMT 11 // Timezone London (GMT)
static byte tz[]={GMT,GMT,GMT}; // Time zone (0=home)
static const char* const tzn[]={ // Time zone name
 "PPG","HNL","ANC","LAX","DEN","CHI","NYC","SCL","RIO","SGS","PDL","LON", // -11...0
 "PAR","CAI","MSK","DXB","KHI","DAC","BKK","HKG","TYO","SYD","NOU","WLG"  // +1...+12
};

static byte tc(sbyte h){if(h<0) return(h+24); else if(h>=24) return(h-24); return(h);} // Time correct (24h)

static void printtime(void){
  sbyte h, m; dt_t d; tm_t t; getdate(&d,&t); h=t.hour; m=t.min; char s[5+1], tmp[]="  :  ";
  for(byte i=0;i<3;i++){
    strcpy(s,tmp); i2s20(s,tc(h+tz[i]-tz[0])); i2s2(s+3,m);
    sat((char*)tzn[tz[i]],X1+(i*6+1)*FWW,0); sat(s,X1+i*6*FWW,1);
  }
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  M A R K - Note your score

static byte ismark=FALSE, ismark4=TRUE, marka=0, markb=0, markc=0, markd=0;

static void printmark(void){ // Print A C D B
  fsize=FSIZEL;
  llat(marka,X1,0); llat(markb,X1+15*FWW,0);
  if(ismark4){llat(markc,X1+5*FWW,0); llat(markd,X1+10*FWW,0);}
  fsize=FSIZES;
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  S U G R  -  Insulin Calculator (Bolus)

static byte issugr=FALSE, isfoodselect=FALSE, foodnr=0, items=0;

#define U_SCALE 1000 // 1U=1000 (for fixed point arithmetic)

static int bg_now=100, bg_target=100, isf=40; // Blood gluc and InsulinSensFactor (1U lowers BG by 40 mg/dL)
static byte last_dose=0, h_ago=0; // Last dose and hours ago of injection
static int carbs=0, fpus=0; // Collected carbs and FatProteinUnits
static int immediate=0, delayed=0, iob=0; // Bolus values, InsulinOnBoard
static const byte lut[]={100,95,80,62,45,30,18,8}; // Lookup table for InsulinOnBoard

static const byte ibc[]={0,7,13,19,23,38,46,51,58,65,71,78,82,87}; // Items before category
static byte foodnr2cat(void){ // Calculate category number
  for(byte i=1;i<sizeof(ibc);i++) if(foodnr<ibc[i]) return(i-1);
  return(0);
}

static const char* const category[]={ // 13 food categories
  "BREAD","GRAIN","SPUD","CREAL","FRUIT","VEG","MILK","MAIN","JUNK","SNACK","SWEET","SOFT","ALC"
};
static const struct{const char* name; const uint8_t carbs, fpus;} food[]={ // Food database
// Food name, carbs [g] and FatProteinUnits (1 FPU = 100 kcal of Fat/Protein)
 {"White slc",15,0},{"Whole slc",12,0},{"Toast slc",12,0},{"Baguette 50g",25,0}, // Bread
 {"Croissant",25,2},{"Bun/Roll",30,0},{"Pretzel",35,0},
 {"Pasta 150g",45,0},{"Rice 150g",45,0},{"Cuscus 150g",35,0},{"Quinoa 150g",30,1}, // Grain
 {"Noodle 150g",40,0},{"Risott 150g",40,2},
 {"Boiled M",15,0},{"Mashed 150g",20,1},{"Fries 100g",35,2},{"Wedges 100g",25,1}, // Spud
 {"Sweet M",25,0},{"Salad 150g",25,2},
 {"Oats 150g",25,0},{"Flakes 30g",25,0},{"Muesli 50g",30,1},{"Granola 50g",35,2}, // Creal
 {"Apple",15,0},{"Banana",20,0},{"Orange",12,0},{"Pear",15,0}, // Fruits
 {"Peach",10,0},{"Straws 150g",10,0},{"BlueB 100g",12,0},{"Grapes 100g",16,0},
 {"Kiwi",10,0},{"Mango 1/2",15,0},{"Pines 100g",12,0},{"Melon 200g", 15, 0},
 {"Dates 3pc",15,0},{"Raisin 1tsp",10,0},{"Apricot 4pc",15,0},
 {"Carrots 100g",7,0},{"Peas 100g",12,0},{"Corn 100g",15,0},{"Lentils 150g",20,1}, // Veg
 {"C-Peas 150g",25,1},{"Beans 150g",20,1},{"Broccoli 200g",6,0},{"Tomato",5,0},
 {"Milk 200ml",10,1},{"Yogurt 150g",7,1},{"YogurtF 150g",20,1},{"Cottage 150g",5,2}, // Milk
 {"Cheese 50g", 1, 3},
 {"Steak 200g",0,4},{"Chicken 200g",0,2},{"Pork 200g",0,4},{"Fish 150g",0,2}, // Main
 {"Salmon 150g",0,4},{"Sausage 1pc",1,3},{"Salami 50g",0,4},
 {"Pizza 1sl",25,2},{"Burger",35,3},{"Cheeseburger",35,4},{"Nuggets 6pc",15,2}, // Junk
 {"Kebab 1pc",50,5},{"Hot Dog 1pc",25,3},{"Taco 1pc",15,1},
 {"Chips 30g",15,2},{"Peanuts 30g",5,4},{"Walnuts 30g",4,5},{"Almonds 30g",5,4}, // Snacks
 {"Popcorn 30g",20,1},{"Cracker 30g", 20, 1},
 {"Choco 30g",15,3},{"Gummis 50g",40,0},{"IceScoop",15,2},{"Cookie 1lg",20,1}, // Sweets
 {"Cake 1sl",35,3},{"Donut 1pc",25,2},{"Honey 1tbsp",15,0},
 {"Cola 0.33L",35,0},{"Juice 0.2L",20,0},{"Energy 0.25L",30,0},{"IceTea 0.33L", 25,0}, // Soft
 {"Beer 0.33L",12,0},{"Beer 0.5L",18,0},{"WineDry 0.2L",2,0},{"WineS 0.2L",15,0}, // Alk
 {"Cocktail",25,1}
};

static void additem(byte idx){carbs+=food[idx].carbs, fpus+=food[idx].fpus; items++;} // Add carbs and fpus

static void bolus(void){ // Calculate immediate and delayed (3-5h) insulin dose
  dt_t d; tm_t t; getdate(&d,&t); byte cir=(t.hour<10?8:10); // CarbInsulinRate - 1U per 8g (morning) or 10g
  iob=((h_ago<8)?(last_dose*U_SCALE*lut[h_ago])/100:0); // InsulinOnBoard
  immediate=_max((carbs*U_SCALE)/cir+(_max(bg_now-bg_target,0)*U_SCALE)/isf-iob,0); // bolus+correction-iob
  delayed=fpus*U_SCALE; // FPU rule: 1 FPU = 1 Unit extra (delayed by 3-5h)
}

static void printitems(void){ // Print collected items, carbs and fat
  llat(items,X1,1); cat(FIC,X1+3*FWW,1); llat(carbs,X1+4*FWW,1); cat(FIF,X1+8*FWW,1); llat(fpus,X1+9*FWW,1);
}
static void printfoodselect(void){ // Print food selection
  char s[MAXCAL+1]="";
  llat(foodnr+1,X1,0); strcpy(s,category[foodnr2cat()]); strcat(s," "); strcat(s,food[foodnr].name);
  s[MAXCAL]='\0'; sat(s,X1+(foodnr<9?2:3)*FWW,0); printitems();
}
static void printbol(void){
  bolus(); // Calculate bolus (immediate and delayed)
  cat(FPAINT,X1,0); llat(bg_now,X1+FWW,0); cat(FARRR,X1+4*FWW,0); llat(bg_target,X1+5*FWW,0); // BG
  cat(FARRD,X1+8*FWW,0); llat(isf,X1+9*FWW,0); // ISF rate
  cat(FSHIFT,X1+12*FWW,0); llat(last_dose,X1+13*FWW,0); // Last insulin dose
  llat(h_ago,X1+16*FWW,0); cat('h',X1+17*FWW,0); // Hours ago
  printitems(); // Items, carbs, fat
  cat(FCURR,X1+12*FWW,1); dat(ddiv(ll2d(immediate/100),10.0),X1+13*FWW,1); // Immediate
  cat(FCLOCK,X1+17*FWW,1); llat(delayed/1000,X1+18*FWW,1); // in 2h
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  A S C  -  ASCII table

static byte isasc=FALSE, ascnr=0;

#define ASCCPL 16 // ASCII characters per line
#define ASCLIN 13 // 13 Lines (2 offset)

static void printasc(void){
  byte first=(ascnr+2)*ASCCPL; // 1st character in line (2 lines offset)
  bat(first,X1,0); llat(first,X1,1); // Hex and dec number
  memset(sbuf+X1+4*FWW,0xfe,(ASCCPL-1)*FWW); // Background of inverse characters
  for(byte i=0,x=X1+4*FWW; i<ASCCPL; i++,x+=FWW){cat(FI0+i,x,0); cat(first+i,x,1);} // Title and chars
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  P T  -  Periodic Table of the Elements

static byte ispt=FALSE, ptnr=0;

#define PTMAX 118 // Number of elements
#define S(c1,c2) ((uint16_t)(unsigned char)(c2)|((uint16_t)(unsigned char)(c1)<<8)) // Symbol shift
#define P(p,g) ((uint16_t)(((p)&0x07)|(((g)&0x1F)<<3))) // Period/Group shift

typedef struct{ // Symbol period/group mass*1000 density*100 melt(K) boil(K) en*10 valenzelectons
  const uint16_t sym; const uint16_t pg; const uint32_t mass; const uint16_t dens;
  const uint16_t melt; const uint16_t boil; const uint8_t en; const uint8_t val;
} Element;
static const Element pt[]={
//sym        pos     mass   dens melt boil en val  sym        pos     mass   dens melt boil en val
 {S('H',' '),P(1,1), 1008,  9,   14,  20,  22,1}, {S('H','e'),P(1,18),4003,  18,  1,   4,   0, 2},
 {S('L','i'),P(2,1), 6941,  53,  454, 1615,10,1}, {S('B','e'),P(2,2), 9012,  185, 1560,2742,16,2},
 {S('B',' '),P(2,13),10811, 234, 2349,4200,20,3}, {S('C',' '),P(2,14),12011, 226, 3823,4300,25,4},
 {S('N',' '),P(2,15),14007, 125, 63,  77,  30,5}, {S('O',' '),P(2,16),15999, 143, 54,  90,  34,6},
 {S('F',' '),P(2,17),18998, 170, 53,  85,  40,7}, {S('N','e'),P(2,18),20180, 90,  24,  27,  0, 8},
 {S('N','a'),P(3,1), 22990, 97,  371, 1156,9, 1}, {S('M','g'),P(3,2), 24305, 174, 923, 1363,13,2},
 {S('A','l'),P(3,13),26982, 270, 933, 2792,16,3}, {S('S','i'),P(3,14),28085, 233, 1687,3538,19,4},
 {S('P',' '),P(3,15),30974, 182, 317, 553, 22,5}, {S('S',' '),P(3,16),32065, 207, 388, 717, 26,6},
 {S('C','l'),P(3,17),35453, 321, 172, 239, 32,7}, {S('A','r'),P(3,18),39948, 178, 84,  87,  0, 8},
 {S('K',' '),P(4,1), 39098, 86,  336, 1032,8, 1}, {S('C','a'),P(4,2), 40078, 154, 1115,1757,10,2},
 {S('S','c'),P(4,3), 44956, 299, 1814,3109,14,2}, {S('T','i'),P(4,4), 47867, 450, 1941,3560,15,2},
 {S('V',' '),P(4,5), 50942, 611, 2183,3680,16,2}, {S('C','r'),P(4,6), 51996, 715, 2180,2944,17,1},
 {S('M','n'),P(4,7), 54938, 744, 1519,2334,15,2}, {S('F','e'),P(4,8), 55845, 787, 1811,3134,18,2},
 {S('C','o'),P(4,9), 58933, 890, 1768,3200,19,2}, {S('N','i'),P(4,10),58693, 890, 1728,3186,19,2},
 {S('C','u'),P(4,11),63546, 896, 1357,2835,19,1}, {S('Z','n'),P(4,12),65380, 714, 692, 1180,16,2},
 {S('G','a'),P(4,13),69723, 591, 303, 2477,18,3}, {S('G','e'),P(4,14),72630, 532, 1211,3106,20,4},
 {S('A','s'),P(4,15),74922, 572, 1090,887, 22,5}, {S('S','e'),P(4,16),78960, 481, 494, 958, 26,6},
 {S('B','r'),P(4,17),79904, 312, 266, 332, 30,7}, {S('K','r'),P(4,18),83798, 373, 115, 119, 30, 8},
 {S('R','b'),P(5,1), 85468, 153, 312, 961, 8, 1}, {S('S','r'),P(5,2), 87620, 264, 1050,1655,10,2},
 {S('Y',' '),P(5,3), 88906, 447, 1799,3609,12,2}, {S('Z','r'),P(5,4), 91224, 652, 2128,4682,13,2},
 {S('N','b'),P(5,5), 92906, 857, 2750,5017,16,1}, {S('M','o'),P(5,6), 95950, 1022,2896,4912,22,1},
 {S('T','c'),P(5,7), 98000, 1150,2430,4538,19,2}, {S('R','u'),P(5,8), 101070,1237,2607,4423,22,1},
 {S('R','h'),P(5,9), 102905,1241,2237,3968,22,1}, {S('P','d'),P(5,10),106420,1202,1828,3236,22,0},
 {S('A','g'),P(5,11),107868,1050,1234,2435,19,1}, {S('C','d'),P(5,12),112411,865, 594, 1040,17,2},
 {S('I','n'),P(5,13),114818,731, 429, 2345,18,3}, {S('S','n'),P(5,14),118710,728, 505, 2875,20,4},
 {S('S','b'),P(5,15),121760,668, 903, 1860,20,5}, {S('T','e'),P(5,16),127600,624, 722, 1261,21,6},
 {S('I',' '),P(5,17),126904,493, 386, 457, 27,7}, {S('X','e'),P(5,18),131293,589, 161, 165, 26,8},
 {S('C','s'),P(6,1), 132905,187, 301, 944, 7, 1}, {S('B','a'),P(6,2), 137327,359, 1000,2170,9, 2},
 {S('L','a'),P(6,3), 138905,615, 1193,3737,11,2}, {S('C','e'),P(6,0), 140116,677, 1068,3716,11,2},
 {S('P','r'),P(6,0), 140907,677, 1208,3793,11,2}, {S('N','d'),P(6,0), 144242,701, 1297,3347,11,2},
 {S('P','m'),P(6,0), 145000,726, 1315,3273,11,2}, {S('S','m'),P(6,0), 150360,752, 1345,2067,12,2},
 {S('E','u'),P(6,0), 151964,524, 1099,1802,12,2}, {S('G','d'),P(6,0), 157250,790, 1585,3546,12,2},
 {S('T','b'),P(6,0), 158925,823, 1629,3503,12,2}, {S('D','y'),P(6,0), 162500,855, 1680,2840,12,2},
 {S('H','o'),P(6,0), 164930,879, 1734,2993,12,2}, {S('E','r'),P(6,0), 167259,906, 1802,3141,12,2},
 {S('T','m'),P(6,0), 168934,932, 1818,2223,13,2}, {S('Y','b'),P(6,0), 173054,690, 1097,1469,11,2},
 {S('L','u'),P(6,0), 174966,984, 1925,3675,13,2}, {S('H','f'),P(6,4), 178490,1331,2506,4876,13,2},
 {S('T','a'),P(6,5), 180947,1665,3290,5731,15,2}, {S('W',' '),P(6,6), 183840,1925,3695,5828,24,2},
 {S('R','e'),P(6,7), 186207,2102,3459,5869,19,2}, {S('O','s'),P(6,8), 190230,2259,3306,5285,22,2},
 {S('I','r'),P(6,9), 192217,2256,2719,4701,22,2}, {S('P','t'),P(6,10),195084,2145,2041,4098,22,1},
 {S('A','u'),P(6,11),196966,1930,1337,3129,25,1}, {S('H','g'),P(6,12),200592,1353,234, 630, 20,2},
 {S('T','l'),P(6,13),204383,1185,577, 1746,16,3}, {S('P','b'),P(6,14),207200,1134,600, 2022,18,4},
 {S('B','i'),P(6,15),208980,978, 544, 1837,20,5}, {S('P','o'),P(6,16),209000,920, 527, 1235,20,6},
 {S('A','t'),P(6,17),210000,620, 575, 610, 22,7}, {S('R','n'),P(6,18),222000,973, 202, 211, 22,8},
 {S('F','r'),P(7,1), 223000,187, 300, 950, 7, 1}, {S('R','a'),P(7,2), 226000,500, 973, 2010,9, 2},
 {S('A','c'),P(7,3), 227000,1007,1323,3471,11,2}, {S('T','h'),P(7,0), 232038,1172,2115,5061,13,2},
 {S('P','a'),P(7,0), 231035,1537,1841,4300,15,2}, {S('U',' '),P(7,0), 238028,1895,1405,4404,14,2},
 {S('N','p'),P(7,0), 237000,2045,917, 4273,14,2}, {S('P','u'),P(7,0), 244000,1984,912, 3501,13,2},
 {S('A','m'),P(7,0), 243000,1367,1449,2880,11,2}, {S('C','m'),P(7,0), 247000,1351,1613,3383,13,2},
 {S('B','k'),P(7,0), 247000,1478,1259,2900,13,2}, {S('C','f'),P(7,0), 251000,1510,1173,1743,13,2},
 {S('E','s'),P(7,0), 252000,884, 1133,1269,13,2}, {S('F','m'),P(7,0), 257000,970, 1125,0,   13,2},
 {S('M','d'),P(7,0), 258000,1030,1100,0,   13,2}, {S('N','o'),P(7,0), 259000,990, 1100,0,   13,2},
 {S('L','r'),P(7,0), 262000,1560,1900,0,   13,3}, {S('R','f'),P(7,4), 267000,2320,2400,5800,13,2},
 {S('D','b'),P(7,5), 268000,2930,0,   0,   0, 2}, {S('S','g'),P(7,6), 271000,3500,0,   0,   0, 2},
 {S('B','h'),P(7,7), 270000,3700,0,   0,   0, 2}, {S('H','s'),P(7,8), 269000,4100,0,   0,   0, 2},
 {S('M','t'),P(7,9), 278000,3740,0,   0,   0, 2}, {S('D','s'),P(7,10),281000,3480,2000,4000,0, 2},
 {S('R','g'),P(7,11),282000,2870,0,   0,   0, 1}, {S('C','n'),P(7,12),285000,2370,283, 340, 0, 2},
 {S('N','h'),P(7,13),286000,1600,700, 1400,0, 3}, {S('F','l'),P(7,14),289000,1400,340, 420, 0, 4},
 {S('M','c'),P(7,15),290000,1350,700, 1400,0, 5}, {S('L','v'),P(7,16),293000,1290,700, 1100,0, 6},
 {S('T','s'),P(7,17),294000,720, 700, 880, 0, 7}, {S('O','g'),P(7,18),294000,500, 235, 350, 0, 8}
};

static void ptdec(void){ptnr=_dec(ptnr,PTMAX);}
static void ptinc(void){ptnr=_inc(ptnr,PTMAX);}

static byte nxtprv(byte isprv){ // Find alphabetically next/previous element (FALSE/TRUE)
  byte n=ptnr, p=ptnr;
  for(byte i=0;i<PTMAX;i++){
    if(pt[i].sym>pt[ptnr].sym) if(n==ptnr||pt[i].sym<pt[n].sym) n=i; // Found a better successor
    if(pt[i].sym<pt[ptnr].sym) if(p==ptnr||pt[i].sym>pt[p].sym) p=i; // Found a better precedessor
  }
  return(isprv?p:n);
}

static void printpg(byte p, byte g){ // Print PSE-grid at end of sbuf
  byte d[18]; memset(d,0xfe,18); // Init
  d[g-1]=(1<<p)^0xfe; // Set p|g-bit
  memcpy(sbuf+SBYTES-18,d,18); // Print
}

static void printpt(void){
  byte x=X1; llat(ptnr+1,x,0); x+=2*FWW; if(ptnr+1>9) x+=FWW; if(ptnr+1>99) x+=FWW; // Number
  cat(pt[ptnr].sym>>8,x,0); x+=FWW; cat(pt[ptnr].sym,x,0); x+=2*FWW; // Symbol
  llat(pt[ptnr].pg&0x07,x,0); x+=2*FWW; // Period
  llat((pt[ptnr].pg>>3)&0x1f,x,0); x+=2*FWW; if(((pt[ptnr].pg>>3)&0x1f)>9) x+=FWW; // Group
  llat(pt[ptnr].val,x,0); x+=2*FWW;// Valenz electrons
  dat(ddiv(pt[ptnr].mass,1000.0),x,0); // Mass (multiples of C12-mass)

  x=X1; llat(pt[ptnr].melt,x,1); x+=3*FWW; if(pt[ptnr].melt>99) x+=FWW; if(pt[ptnr].melt>999) x+=FWW; // Melt (K)
  llat(pt[ptnr].boil,x,1); x+=3*FWW; if(pt[ptnr].boil>99) x+=FWW; if(pt[ptnr].boil>999) x+=FWW; // Boil (K9
  dat(ddiv(pt[ptnr].en,10.0),x,1); x+=3*FWW+3; // Electronegativity (no dimension - Pauling scale)
  dat(ddiv(pt[ptnr].dens,100.0),x,1); // Density (kg/m^3)
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  D & I  -  Derivative and Integral Table

static byte isdi=FALSE, dinr=0, isdipos1=TRUE;

#define MAXFORMULA 21 // Maximal number of formulae

static void didec(void){dinr=_dec(dinr,MAXFORMULA);}
static void diinc(void){dinr=_inc(dinr,MAXFORMULA);}

enum{ // Text token
  T_END=0,T_X,T_N,T_U,T_V,T_UD,T_VD,T_DX,T_DV,T_C1,T_C2,T_C05,T_A,T_NEG,T_BRA,T_KET,T_INT,
  T_ADD,T_SUB,T_MUL,T_DIV,T_POW,T_SQRT,T_EXP,T_LN,
  T_SIN,T_COS,T_TAN,T_ASIN,T_ACOS,T_ATAN,T_SINH,T_COSH,T_TANH,T_ASINH,T_ACOSH,T_ATANH
};

static const byte f_nop[]={T_END}; // Formulae rules
static const byte f_chain[]={T_U,T_BRA,T_V,T_KET,T_END};
static const byte d_chain[]={T_UD,T_BRA,T_V,T_KET,T_MUL,T_VD,T_END};
static const byte f_prod[]={T_U,T_MUL,T_V,T_END};
static const byte d_prod[]={T_UD,T_MUL,T_V,T_ADD,T_U,T_MUL,T_VD,T_END};
static const byte f_quot[]={T_U,T_DIV,T_V,T_END};
static const byte d_quot[]={T_BRA,T_UD,T_MUL,T_V,T_SUB,T_U,T_MUL,T_VD,T_KET,T_DIV,T_V,T_POW,T_C2,T_END};
static const byte f_part[]={T_U,T_MUL,T_VD,T_END};
static const byte F_part[]={T_U,T_MUL,T_V,T_SUB,T_INT,T_UD,T_MUL,T_V,T_END};
static const byte f_sub[]={T_U,T_BRA,T_V,T_KET,T_MUL,T_VD,T_MUL,T_DX,T_END};
static const byte F_sub[]={T_INT,T_U,T_BRA,T_V,T_KET,T_MUL,T_DV,T_END};
static const byte f_pow[]={T_X,T_POW,T_N,T_END};
static const byte d_pow[]={T_N,T_MUL,T_X,T_POW,T_BRA,T_N,T_SUB,T_C1,T_KET,T_END};
static const byte F_pow[]={T_BRA,T_X,T_POW,T_BRA,T_N,T_ADD,T_C1,T_KET,T_KET,T_DIV,T_BRA,T_N,T_ADD,T_C1,T_KET,T_END};
static const byte f_pwr[]={T_A,T_POW,T_X,T_END};
static const byte d_pwr[]={T_BRA,T_A,T_POW,T_X,T_KET,T_MUL,T_LN,T_BRA,T_A,T_KET,T_END};
static const byte F_pwr[]={T_BRA,T_A,T_POW,T_X,T_KET,T_DIV,T_LN,T_BRA,T_A,T_KET,T_END};
static const byte f_exp[]={T_EXP,T_X,T_END};
static const byte f_ln[]={T_LN,T_BRA,T_X,T_KET,T_END};
static const byte d_ln[]={T_C1,T_DIV,T_X,T_END};
static const byte F_ln[]={T_X,T_MUL,T_LN,T_BRA,T_X,T_KET,T_SUB,T_X,T_END};
static const byte f_sin[]={T_SIN,T_BRA,T_X,T_KET,T_END}; // Trigonometric functions
static const byte d_sin[]={T_COS,T_BRA,T_X,T_KET,T_END};
static const byte F_sin[]={T_NEG,T_COS,T_BRA,T_X,T_KET,T_END};
static const byte f_cos[]={T_COS,T_BRA,T_X,T_KET,T_END};
static const byte d_cos[]={T_NEG,T_SIN,T_BRA,T_X,T_KET,T_END};
static const byte F_cos[]={T_SIN,T_BRA,T_X,T_KET,T_END};
static const byte f_tan[]={T_TAN,T_BRA,T_X,T_KET,T_END};
static const byte d_tan[]={T_BRA,T_C1,T_DIV,T_COS,T_BRA,T_X,T_KET,T_KET,T_POW,T_C2,T_END};
static const byte F_tan[]={T_NEG,T_LN,T_BRA,T_COS,T_BRA,T_X,T_KET,T_KET,T_END};
static const byte f_asin[]={T_ASIN,T_BRA,T_X,T_KET,T_END};
static const byte d_asin[]={T_C1,T_DIV,T_SQRT,T_BRA,T_C1,T_SUB,T_X,T_POW,T_C2,T_KET,T_END};
static const byte F_asin[]={T_X,T_MUL,T_ASIN,T_BRA,T_X,T_KET,T_ADD,T_SQRT,T_BRA,T_C1,T_SUB,T_X,T_POW,T_C2,T_KET,T_END};
static const byte f_acos[]={T_ACOS,T_BRA,T_X,T_KET,T_END};
static const byte d_acos[]={T_NEG,T_C1,T_DIV,T_SQRT,T_BRA,T_C1,T_SUB,T_X,T_POW,T_C2,T_KET,T_END};
static const byte F_acos[]={T_X,T_MUL,T_ACOS,T_BRA,T_X,T_KET,T_SUB,T_SQRT,T_BRA,T_C1,T_SUB,T_X,T_POW,T_C2,T_KET,T_END};
static const byte f_atan[]={T_ATAN,T_BRA,T_X,T_KET,T_END};
static const byte d_atan[]={T_C1,T_DIV,T_BRA,T_C1,T_ADD,T_X,T_POW,T_C2,T_KET,T_END};
static const byte F_atan[]={T_X,T_MUL,T_ATAN,T_BRA,T_X,T_KET,T_SUB,T_C05,T_MUL,T_LN,T_BRA,T_C1,T_ADD,T_X,T_POW,T_C2,T_KET,T_END};
static const byte f_sinh[]={T_SINH,T_BRA,T_X,T_KET,T_END}; // Hyperbolic functions
static const byte d_sinh[]={T_COSH,T_BRA,T_X,T_KET,T_END};
static const byte F_sinh[]={T_COSH,T_BRA,T_X,T_KET,T_END};
static const byte f_cosh[]={T_COSH,T_BRA,T_X,T_KET,T_END};
static const byte d_cosh[]={T_SINH,T_BRA,T_X,T_KET,T_END};
static const byte F_cosh[]={T_SINH,T_BRA,T_X,T_KET,T_END};
static const byte f_tanh[]={T_TANH,T_BRA,T_X,T_KET,T_END};
static const byte d_tanh[]={T_BRA,T_C1,T_DIV,T_BRA,T_COSH,T_BRA,T_X,T_KET,T_KET,T_POW,T_C2,T_END};
static const byte F_tanh[]={T_LN,T_BRA,T_COSH,T_BRA,T_X,T_KET,T_KET,T_END};
static const byte f_asinh[]={T_ASINH,T_BRA,T_X,T_KET,T_END};
static const byte d_asinh[]={T_C1,T_DIV,T_SQRT,T_BRA,T_X,T_POW,T_C2,T_ADD,T_C1,T_KET,T_END};
static const byte F_asinh[]={T_X,T_MUL,T_ASINH,T_BRA,T_X,T_KET,T_SUB,T_SQRT,T_BRA,T_X,T_POW,T_C2,T_ADD,T_C1,T_KET,T_END};
static const byte f_acosh[]={T_ACOSH,T_BRA,T_X,T_KET,T_END};
static const byte d_acosh[]={T_C1,T_DIV,T_SQRT,T_BRA,T_X,T_POW,T_C2,T_SUB,T_C1,T_KET,T_END};
static const byte F_acosh[]={T_X,T_MUL,T_ACOSH,T_BRA,T_X,T_KET,T_SUB,T_SQRT,T_BRA,T_X,T_POW,T_C2,T_SUB,T_C1,T_KET,T_END};
static const byte f_atanh[]={T_ATANH,T_BRA,T_X,T_KET,T_END};
static const byte d_atanh[]={T_C1,T_DIV,T_BRA,T_C1,T_SUB,T_X,T_POW,T_C2,T_KET,T_END};
static const byte F_atanh[]={T_X,T_MUL,T_ATANH,T_BRA,T_X,T_KET,T_ADD,T_C05,T_MUL,T_LN,T_BRA,T_C1,T_SUB,T_X,T_POW,T_C2,T_KET,T_END};

typedef struct{ // Formula structure (name, funktion, derivative, integral)
  const byte* f; const byte* d; const byte* i;
} MathRule;
static const MathRule rules[]={ // Array to manage formulae rules
  {f_chain,d_chain,f_nop}, {f_prod,d_prod,f_nop}, {f_quot,d_quot,f_nop},
  {f_part,f_nop,F_part}, {f_sub,f_nop,F_sub},
  {f_pow,d_pow,F_pow}, {f_pwr,d_pwr,F_pwr}, {f_exp,f_exp,f_exp}, {f_ln,d_ln,F_ln},
  {f_sin,d_sin,F_sin}, {f_cos,d_cos,F_cos}, {f_tan,d_tan,F_tan},
  {f_asin,d_asin,F_asin}, {f_acos,d_acos,F_acos}, {f_atan,d_atan,F_atan},
  {f_sinh,d_sinh,F_sinh}, {f_cosh,d_cosh,F_cosh}, {f_tanh,d_tanh,F_tanh},
  {f_asinh,d_asinh,F_asinh}, {f_acosh,d_acosh,F_acosh}, {f_atanh,d_atanh,F_atanh}
};

static char* tinterpret(const byte t){ // Return formula string (due to token)
  switch(t){
    case T_X: return("x"); break;         case T_N: return("n"); break;
    case T_U: return("u"); break;         case T_V: return("v"); break;
    case T_UD: return("u'"); break;       case T_VD: return("v'"); break;
    case T_DX: return("dx"); break;       case T_DV: return("dv"); break;
    case T_C1: return("1"); break;        case T_C2: return("2"); break;
    case T_C05: return("\xe9"); break;    case T_A: return("a"); break;
    case T_NEG: return("-"); break;       case T_BRA: return("("); break;
    case T_KET: return(")"); break;       case T_INT: return("\xc0"); break;
    case T_ADD: return("+"); break;       case T_SUB: return("-"); break;
    case T_MUL: return("*"); break;       case T_DIV: return("/"); break;
    case T_POW: return("^"); break;       case T_SQRT: return("\xbf"); break;
    case T_EXP: return("e^"); break;      case T_LN: return("ln"); break;
    case T_SIN: return("sin"); break;     case T_COS: return("cos"); break;
    case T_TAN: return("tan"); break;     case T_ASIN: return("asin"); break;
    case T_ACOS: return("acos"); break;   case T_ATAN: return("atan"); break;
    case T_SINH: return("sinh"); break;   case T_COSH: return("cosh"); break;
    case T_TANH: return("tanh"); break;   case T_ASINH: return("asinh"); break;
    case T_ACOSH: return("acosh"); break; case T_ATANH: return("atanh"); break;
    default: return("?");
  }
}

static byte rule(byte i, byte fdi){ // Return rules function due to f/f'/S
  if(fdi==1) return(rules[dinr].f[i]);
  if(fdi==2) return(rules[dinr].d[i]);
  return(rules[dinr].i[i]);
}
static void printformula(byte fdi, byte x, byte line){
  char s[22+1]=""; for(byte i=0;rule(i,fdi)!=T_END;i++) strcat(s,tinterpret(rule(i,fdi)));
  strcpy(es,s); escurpos=strlen(es); // Save to es (for viewing)
  s[20]='\0'; sat(s,x,line);
}
static void printdi(void){
  llat(dinr+1,X1,0); cat((isdipos1?'d':FINT),X1+3*FWW,0);
  printformula(1,X1+5*FWW,0); // f
  printformula((isdipos1?2:3),X1,1); // Derivative/Integral
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  R U L E  -  Slide Rule

static byte isrule=FALSE;
static const byte rulebuf[SBYTES]={
  0b11110111, 0b11100000, 0b11000000, 0b10000000, 0b00000000, //0
  0b00000011, 0b00000000, 0b00000000, 0b00000000, 0b00000000, //5
  0b00000011, 0b00000000, 0b00000000, 0b00000000, 0b00000000, //10
  0b00000011, 0b00000000, 0b00000000, 0b00000000, 0b00000011, //15
  0b00000000, 0b00000000, 0b00000000, 0b00001111, 0b00000000, //20
  0b00000000, 0b00000000, 0b00000011, 0b00000000, 0b00000000, //25
  0b00000000, 0b00000011, 0b00000000, 0b00000000, 0b00000011, //30
  0b00000000, 0b00000000, 0b00000011, 0b00000000, 0b10111000, //35
  0b10101011, 0b11101000, 0b00000000, 0b00000011, 0b00000000, //40
  0b00000000, 0b00000011, 0b00000000, 0b00000000, 0b00000011, //45
  0b00000000, 0b00000011, 0b00000000, 0b00001111, 0b00000000, //50
  0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, //55
  0b00000000, 0b00000000, 0b10001000, 0b10101011, 0b11111000, //60
  0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, //65
  0b00000000, 0b00000000, 0b00001111, 0b00000000, 0b00000000, //70
  0b00000000, 0b00000000, 0b00000000, 0b11100000, 0b00100011, //75
  0b11111000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, //80
  0b00000000, 0b00001111, 0b00000000, 0b00000000, 0b00000000, //85
  0b00000000, 0b11101000, 0b10101011, 0b10111000, 0b00000000, //90
  0b00000000, 0b00000000, 0b00000000, 0b00001111, 0b00000000, //95
  0b00000000, 0b00000000, 0b11111000, 0b10101011, 0b00111000, //100
  0b00000000, 0b00000000, 0b00000000, 0b00001111, 0b00000000, //105
  0b00000000, 0b11000000, 0b10000011, 0b11111000, 0b00000000, //110
  0b00000000, 0b00000000, 0b00000000, 0b11111000, 0b10101011, //115
  0b11111000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, //120
  0b11100000, 0b10101011, 0b11111000, 0b00000000, 0b10000000, //125
  0b11000000, 0b11100000, 0b11101111, 0b00000111, 0b00000011, //130
  0b00000001, 0b00000000, 0b11000000, 0b00000000, 0b00000000, //135
  0b00000000, 0b00000000, 0b11000000, 0b00000000, 0b00000000, //140
  0b00000000, 0b00000000, 0b11000000, 0b00000000, 0b00000000, //145
  0b00000000, 0b11000000, 0b00000000, 0b00000000, 0b00000000, //150
  0b11110000, 0b00000000, 0b00000000, 0b00000000, 0b11000000, //155
  0b00000000, 0b00000000, 0b00000000, 0b11000000, 0b00000000, //160
  0b00000000, 0b11000000, 0b00000000, 0b00000000, 0b11000000, //165
  0b00000000, 0b00010111, 0b11010101, 0b00011101, 0b00000000, //170
  0b11000000, 0b00000000, 0b00000000, 0b11000000, 0b00000000, //175
  0b00000000, 0b11000000, 0b00000000, 0b11000000, 0b00000000, //180
  0b11110000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, //185
  0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00010101, //190
  0b11010101, 0b00011111, 0b00000000, 0b00000000, 0b00000000, //195
  0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11110000, //200
  0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, //205
  0b00011100, 0b11000100, 0b00011111, 0b00000000, 0b00000000, //210
  0b00000000, 0b00000000, 0b00000000, 0b11110000, 0b00000000, //215
  0b00000000, 0b00000000, 0b00000000, 0b00011101, 0b11010101, //220
  0b00010111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, //225
  0b11110000, 0b00000000, 0b00000000, 0b00000000, 0b00011111, //230
  0b11010101, 0b00000111, 0b00000000, 0b00000000, 0b00000000, //235
  0b11110000, 0b00000000, 0b00000000, 0b00011000, 0b11010000, //240
  0b00011111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, //245
  0b00011111, 0b11010101, 0b00011111, 0b00000000, 0b00000000, //250
  0b00000000, 0b00000000, 0b00011100, 0b11010101, 0b00011111, //255
  0b00000000, 0b00000001, 0b00000011, 0b00000111, //260
};

static void ruleinit(void){memcpy(sbuf,rulebuf,SBYTES);}

static void ruleleft(byte n){ // Rule n left
  for(byte i=0;i<n;i++){byte tmp=sbuf[0]; memcpy(sbuf,&sbuf[1],SX-1); sbuf[SX-1]=tmp;}
}
static void ruleright(byte n){ // Rule n right
  for(byte i=0;i<n;i++){byte tmp=sbuf[SX-1]; memmove(&sbuf[1],sbuf,SX-1); sbuf[0]=tmp;}
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  F I T  -  A 2048 game

static byte isfit=FALSE;

#define FFFW 8 // Tile font width
static const byte fitfont[]={ // Tile font (8x8)
 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, 0b11111111, // 0
 0b11111111, 0b11111111, 0b11111111, 0b11100111, 0b11100111, 0b11111111, 0b11111111, 0b11111111, // 1
 0b11111111, 0b11111001, 0b11111001, 0b11111111, 0b11111111, 0b10011111, 0b10011111, 0b11111111, // 2
 0b11111111, 0b11111001, 0b11111001, 0b11100111, 0b11100111, 0b10011111, 0b10011111, 0b11111111, // 3
 0b11111111, 0b10011001, 0b10011001, 0b11111111, 0b11111111, 0b10011001, 0b10011001, 0b11111111, // 4
 0b11111111, 0b10011001, 0b10011001, 0b11100111, 0b11100111, 0b10011001, 0b10011001, 0b11111111, // 5
 0b11111111, 0b10000001, 0b10000001, 0b11111111, 0b11111111, 0b10000001, 0b10000001, 0b11111111, // 6
 0b11111111, 0b10000001, 0b10000001, 0b11100111, 0b11100111, 0b10000001, 0b10000001, 0b11111111, // 7
 0b11111111, 0b10000001, 0b10000001, 0b10011001, 0b10011001, 0b10000001, 0b10000001, 0b11111111, // 8
 0b11111111, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b11111111, // 9
 0b11111111, 0b10000001, 0b10011001, 0b10111101, 0b10111101, 0b10011001, 0b10000001, 0b11111111, // 10 big dot
 0b11111111, 0b10000001, 0b10001101, 0b10001101, 0b10110001, 0b10110001, 0b10000001, 0b11111111, // 11 2 points
 0b11111111, 0b10000001, 0b10111101, 0b10111101, 0b10110001, 0b10110001, 0b10000001, 0b11111111, // 12 3 points
 0b11111111, 0b10000001, 0b10111101, 0b10111101, 0b10111101, 0b10111101, 0b10000001, 0b11111111, // 13 4 points
 0b11111111, 0b10000001, 0b10101001, 0b10010101, 0b10101001, 0b10010101, 0b10000001, 0b11111111, // 14 small grey
 0b11111111, 0b11010101, 0b10101011, 0b11010101, 0b10101011, 0b11010101, 0b10101011, 0b11111111, // 15 full grey
};

static byte fit[4][4];
static uint16_t fithiscore=0;
#define _FITU 1 // Direction (up/down/left/right)
#define _FITD 2
#define _FITL 3
#define _FITR 4

static byte fitzeros(void){ // Count zeros
  byte zeros=0; for(byte i=0;i<4;i++) for(byte j=0;j<4;j++) if(fit[i][j]==0) zeros++;
  return(zeros);
}

static byte fitseed(void){ // Seed new content in game matrix
  byte zeros=fitzeros();
  if(!zeros) return(FALSE); // No space to seed
  byte seed=rnd()%zeros;
  byte nr=0;
  for(byte i=0;i<4;i++) for(byte j=0;j<4;j++)
    if(fit[i][j]==0 && nr++==seed) fit[i][j]=((rnd()%10>0)?1:2); // 1(90%) or 2(10%)
  return(TRUE);
}

static void fitinit(void){isfit=TRUE; isfg=0; memset(&fit[0][0],0,16); fitseed();} // Init

static byte fitcollapse(byte direction){ // Collapse
  byte collapses=0;
  if(direction==_FITD){ // Down
    for(byte k=0;k<3;k++) for(byte i=3;i>k;i--) for(byte j=0;j<4;j++)
    if(!fit[i][j] && fit[i-1][j]){fit[i][j]=fit[i-1][j]; fit[i-1][j]=0; collapses++;}
  }
  else if(direction==_FITR){ // Right
    for(byte k=0;k<3;k++) for(byte i=0;i<4;i++) for(byte j=3;j>k;j--)
    if(!fit[i][j] && fit[i][j-1]){fit[i][j]=fit[i][j-1]; fit[i][j-1]=0; collapses++;}
  }
  else if(direction==_FITU){ // Up
    for(byte k=0;k<3;k++) for(byte i=k;i<3;i++) for(byte j=0;j<4;j++)
    if(!fit[i][j] && fit[i+1][j]){fit[i][j]=fit[i+1][j]; fit[i+1][j]=0; collapses++;}
  }
  else if(direction==_FITL){ // Left
    for(byte k=0;k<3;k++) for(byte i=0;i<4;i++) for(byte j=k;j<3;j++)
    if(!fit[i][j] && fit[i][j+1]){fit[i][j]=fit[i][j+1]; fit[i][j+1]=0; collapses++;}
  }
  if(collapses) return(TRUE); else return(FALSE);
}

static byte fitmerge(byte direction){ // Merge
  byte merges=0;
  if(direction==_FITD){ // Down
    for(byte i=3;i>0;i--) for(byte j=0;j<4;j++)
    if(fit[i][j] && fit[i][j]==fit[i-1][j]){fit[i][j]++; fit[i-1][j]=0; merges++;}
  }
  else if(direction==_FITR){ // Right
    for(byte i=0;i<4;i++) for(byte j=3;j>0;j--)
    if(fit[i][j] && fit[i][j]==fit[i][j-1]){fit[i][j]++; fit[i][j-1]=0; merges++;}
  }
  else if(direction==_FITU){ // Up
    for(byte i=0;i<3;i++) for(byte j=0;j<4;j++)
    if(fit[i][j] && fit[i][j]==fit[i+1][j]){fit[i][j]++; fit[i+1][j]=0; merges++;}
  }
  else if(direction==_FITL){ // Left
    for(byte i=0;i<4;i++) for(byte j=0;j<3;j++)
    if(fit[i][j] && fit[i][j]==fit[i][j+1]){fit[i][j]++; fit[i][j+1]=0; merges++;}
  }
  if(merges) return(TRUE); else return(FALSE);
}

static void fitmove(byte direction){ // Move
  byte seed=FALSE;
  if(fitcollapse(direction)) seed=TRUE;
  if(fitmerge(direction)) seed=TRUE;
  if(fitcollapse(direction)) seed=TRUE;
  if(seed) fitseed();
}

static void printtile(byte n, byte pos, byte l){ // Print tile at pos and line
  for(byte i=0;i<8;i++) sbuf[X1+pos*8+i+l*SX]=fitfont[n*FFFW+i];
}

static void printfit(void){ // Print GAME
  uint16_t score=0;
  for(byte r=0;r<4;r++) for(byte l=0;l<4;l++){ // Print tiles
    byte n=fit[l][r]; score+=(1<<(n-1)); // 2^(n-1)
    byte pos=((r>1)?8-l:l), line=((r==1||r==2)?0:1);// if(r>1) pos=8-l; if(r==1 || r==2) line=0;
    printtile(n,pos,line);
  }
  llat(score,X2+4*FWW,0); if(score>fithiscore) fithiscore=score; llat(fithiscore,X2+4*FWW,1); // Score
  byte over=TRUE; // Check game over
  for(byte i=0;i<4;i++) for(byte j=0;j<4;j++) if(!fit[i][j]){over=FALSE; break;} // Zeros
  if(over) for(byte i=0;i<3;i++) for(byte j=0;j<4;j++) // Horizontal
    if(fit[i][j]==fit[i+1][j]){over=FALSE; break;}
  if(over) for(byte i=0;i<4;i++) for(byte j=0;j<3;j++) // Vertical
    if(fit[i][j]==fit[i][j+1]){over=FALSE; break;}
  if(over){ // Message
    memset(&sbuf[X1],0,4*FWW); memset(&sbuf[X1+SX],0,4*FWW); // Clear area
    sat("GAME", X1,0); sat("OVER", X1,1);
  }
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
// P R I N T I N G

static void printstatus(void){ // Print stati
  char s[4+1]; sfill(s,' ',4); // Printing string
  byte n=0,h=0,m=0; // Local date variables
  byte isshort=isdate||iscpu||ismark||(istex&&!ises)||isasc||ispt||isdi||issugr; // Short stati (enable more space for app)

  s[3]=FBAT0-batt()/2; // Battery
  if(ismenu){dt_t d; tm_t t; getdate(&d,&t); n=d.day; h=t.hour; m=t.min; i2s20(s,n);} // Date and time
  if(iscalc && fn) s[2]=fn+'A'-1; // FN
  if(isfg) s[2]='f'+isfg-1; else if(ishyp) s[2]='H'+(ishyp-1)*('h'-'H'); // f/g HYP key
  else if(ises){ // Edit mode
    char st[]={"1cq"}; st[1]=FNAV; st[2]=FKBD; s[2]=st[kbdmode]; // Keyboard mode
    if(kbdmode==KMQWERT && isshift) s[1]=FSHIFT; // Shift
  }
  else if(istt) s[2]=ttdec+'0';
  if(mp || isreval || iscpupause) s[2]=FSAND; // Running symbol
  if(isrlink) s[2]=FLINK;
  if(!isplot) sat(s+(isshort?3:0),XS+(isshort?3:0)*FWW,0); // Print 1st line

  sfill(s,' ',4); // 2nd line
  if(ismenu){i2s20(s,h); i2s2(s+2,m);} // Clock
  if(isdict) i2s30(s,dictnr);
  if(ismed){byte n=((memsize()*100L)/MAXMEM+5)/10; s[3]=(n>10?'!':n+'0');} // memsize in deka% (! for >95%)
  if(istex){s[3]=(((texsize()-tex)*100L)/MAXTEX+5)/10+'0';}
  if((iscalc || istt) && ishex) s[3]=(isAF?FIA:FHEX); // HEX
  if(iscalc && isc) s[3]='C'; // CMPLX
  if(israck){cell2s(s+1,selcell);}
  if(!isplot) sat(s+(isshort?3:0),XS+(isshort?3:0)*FWW,1); // Print 2nd line

  if(israck) printlocation();
  if(ispt) printpg(pt[ptnr].pg&0x07,pt[ptnr].pg>>3&0x1f);
}

static byte printscreen(void){ // Print screen
  if(!isrule){ // If isrule: Leave sbuf as it was
    memset(sbuf,0x00,SBYTES); // Clear screen buffer
    ismenu=FALSE;
    if(isinput) printinput();
    else if(isdict) printdict();
    else if(ises || iscmd) printes();
    else if(isset) printset();
    else if(isplot) printplot();
    else if(iscalc) printcalc();
    else if(ismed) printmed();
    else if(israck) printrack();
    else if(ise6b) printe6b();
    else if(istt) printtt();
    else if(iscpu) printcpu();
    else if(istex) printtex();
    else if(isdate) printdate();
    else if(istime) printtime();
    else if(ismark) printmark();
    else if(isfoodselect) printfoodselect();
    else if(issugr) printbol();
    else if(isasc) printasc();
    else if(ispt) printpt();
    else if(isdi) printdi();
    else if(isfit) printfit();
    else{printmenu(); ismenu=TRUE;} // ismenu needed for printstatus

    printstatus();
  }
  sendpage(0); sendpage(1); // Print screenbuffer
  return(FALSE);
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
// K E Y   P R O C E D U R E S

static void kinput(void){ // Input settings
  if(key==KG) isinput=isset=FALSE; // Quit (to main menu)
  else if(setnr==4) isbuzz=!isbuzz; // Buzz (0/1)
  else if(setnr==5){ // Time
    dt_t d; tm_t t; getdate(&d,&t);
    if(key==KSQRT) t.hour=incval(t.hour,24);
    else if(key==KSST) t.hour=decval(t.hour,0);
    else if(key==KEXP) t.min=incval(t.min,60);
    else if(key==KGTO) t.min=decval(t.min,0);
    rtc_write_datetime(&d,&t,0);
  }
  else if(setnr==7){ // Toff (5...240)
    if(key==KSQRT) offtime=incval(offtime,240);
    else if(key==KSST) offtime=decval(offtime,5);
    else if(key==KEXP) for(byte i=0;i<5;i++) offtime=incval(offtime,240);
    else if(key==KGTO) for(byte i=0;i<5;i++) offtime=decval(offtime,5);
  }
  else if(setnr==8){ // Date
    dt_t d; tm_t t; getdate(&d,&t);
    if(key==KSQRT) d.year=incval(d.year,99);
    else if(key==KSST) d.year=decval(d.year,0);
    else if(key==KEXP) d.month=incval(d.month,12);
    else if(key==KGTO) d.month=decval(d.month,0);
    else if(key==KPOW10) d.day=incval(d.day,31);
    else if(key==KSIN) d.day=decval(d.day,0);
    rtc_write_datetime(&d,&t,0);
  }
  else if(setnr==9){ // LCD brightness (0...63) - 0, LCD voltage (1...7) - 5
    if(key==KSQRT) lcd_brightness=incval(lcd_brightness,63);
    else if(key==KSST) lcd_brightness=decval(lcd_brightness,0);
    else if(key==KEXP) lcd_oper_voltage=incval(lcd_oper_voltage,7);
    else if(key==KGTO) lcd_oper_voltage=decval(lcd_oper_voltage,0);
    set_lcd_params();
  }
}
#ifndef SCB_AIRCR
#define SCB_AIRCR (*((volatile uint32_t*)(0xE000ED0C)))
#endif
static void kset(void){ // Settings
  if(key==KG) isset=FALSE; // Quit
  else if(key==K6) SCB_AIRCR=(0x05fa0000UL|0x04UL); // Factory reset
  else if(key>=4 && key<=9){setnr=key; isinput=TRUE;}
}

static void kes(void){ // Edit edit string (es)
  if(iscmd) parseinit(); // Parse edit string (if iscmd flag is set)
  if(key==KG){
    if(isfg==1) dictinit(); // Dict
    else if(isfg==2){ // Quit
      ises=iscmd=isfg=FALSE;
      if(ismed){ // Save edited string
        if(isedname){savename(); isedname=FALSE; sort(); mednr=val2pos(findwordpos(es));}
        else savemem();
        makemeds();
      }
      else if(isedname) savecelltxt(); // Save cell text
      else if(israck){savemem(); reval();} // Save es and calculate cell
      else if(istex) texendedit(); // Save es to tex[]
    }
    else _fkeyg(); // g
  }
  else if(key==KF){if(isfg) kbdmode=_inc(kbdmode,3); _fkeyf();} // Keyboard mode

  else if(key==KSTO && isfg==1){isfg=0; clipsto();}
  else if(key==KRCL && isfg==1){isfg=0; cliprcl();}

  else if(israck && key==KRCL){ // Link to rack formula demanded
    oldshiftleft=shiftleft; oldshiftup=shiftup; oldselcell=selcell; // Save position
    ises=isfg=FALSE; isrlink=TRUE;
  }
  else if(kbdmode==KMNUM){ // Numeric keypad
    byte k=key+isfg*KEYS;
    if(key==KENTER && !isfg){ // !isfg to enable RND and LASTx
      if(israck){savemem(); reval(); ises=FALSE;} // RACK enter
      else scat(es,' ',escurpos++); // Blank
    }
    else if(key==KSST && !isfg) escurleft(); // Cursor left
    else if(key==KGTO && !isfg) escurright(); // Cursor right
    else if(key==KRS && !isfg) for(byte i=0;i<5;i++) escurleft(); // Cursor 5 left
    else if(key==KGSB && !isfg) for(byte i=0;i<5;i++) escurright(); // Cursor 5 right
    else if(key==KBSP){if(isfg==2) esclr(); else esbsp();} // Backspace and clear
    else{inscmdname(key2mpos[k]); isfg=FALSE;}
  }
  else if(kbdmode==KMCURSOR){ // Numpad as cursor
    if(key==K0){if(strlen(es)<MAXGETS) scat(es,' ',escurpos++);} // Blank
    else if(key==K1) asccol=ASCCOLS-1; // End
    else if(key==K2) ascdown(); // Down
    else if(key==K3) for(byte i=0;i<4;i++) ascdown(); // PgDown
    else if(key==K4){if(asccol) asccol--;} // Left
    else if(key==K6){if(asccol<ASCCOLS-1) asccol++;} // Right
    else if(key==K7) asccol=0; // Pos1
    else if(key==K8) ascup(); // Up
    else if(key==K9) for(byte i=0;i<4;i++) ascup(); // PgUp
    else if(key==KBSP){if(isfg==2) esclr(); else esbsp();} // Backspace and clear
    else if(key==KENTER){
      if(israck){savemem(); reval(); ises=FALSE;} // RACK enter
      else ises=FALSE; // (Additional) exit
    }
    else if(key==KSST) escurleft(); // Cursor left
    else if(key==KGTO) escurright(); // Cursor right
    else if(key==KRS) for(byte i=0;i<5;i++) escurleft(); // Cursor 5 left
    else if(key==KGSB) for(byte i=0;i<5;i++) escurright(); // Cursor 5 right
    else if(strlen(es)<MAXGETS){ // Insert selected character by any other key
      scat(es,ascrow*ASCCOLS+asccol+' ',escurpos++);
    }
  }
  else if(kbdmode==KMQWERT){ // QWERT
    if(key==KSUB) isshift=!isshift; // Toggle shift
    else if(key==KMUL){if(isfg==2) esclr(); else esbsp();} // Backspace and clear
    else if(key==KBSP && isfg==2) esclr(); // Clear (standard key combination)
    else if(key==KDOT) escurleft(); // Cursor left
    else if(key==KADD) escurright(); // Cursor right
    else if(key==KSUM) for(byte i=0;i<5;i++) escurleft(); // Cursor 5 left
    else if(key==K3) for(byte i=0;i<5;i++) escurright(); // Cursor 5 right
    else if(key==KENTER && israck){savemem(); reval(); ises=FALSE;} // RACK enter
    else{ // Insert character
      byte c=qwert[key]; if(isshift && c>='a' && c<='z') c-='a'-'A'; // Capitals
      scat(es,c,escurpos++);
    }
  }
}

static void kmenu(void){ // MENU
  if(key==KF) isfg=(isfg==1?0:1); else if(key==KG) isfg=(isfg==2?0:2); // f/g-keys
  else if(isfg==1){
    isfg=0;
    if(key==K4) ismark=TRUE; // MARK
    else if(key==K5) ise6b=TRUE; // E6B
    else if(key==K6) issugr=TRUE; // SUGR
    else if(key==K7) istex=TRUE; // TEX
    else if(key==K8) dateinit(); // DATE
    else if(key==K9) istime=TRUE; // TIME
    else isfg=1;
  }
  else if(isfg==2){
    isfg=0;
    if(key==K4){isrule=TRUE; ruleinit();} // RULE
    else if(key==K5){isfit=TRUE; fitseed();} // FIT
    else if(key==K6) isset=TRUE; // SET
    else if(key==K7) isasc=TRUE; // ASC
    else if(key==K8) ispt=TRUE; // PT
    else if(key==K9) isdi=TRUE; // D&I
  }
  else{
    if(key==K4) ttinit(); // TTOP
    else if(key==K5) iscpu=TRUE; // CPU
    else if(key==K6) medinit(); // MED
    else if(key==K7) calcinit(); // CALC
    else if(key==K8){cmdinit(); isprintscreen=TRUE;} // CMD
    else if(key==K9) rinit(); // RACK
  }
}

static void kplot(void){isplot=FALSE; dwidth=DWIDTH; pop(); pop();} // PLOT

static void kcalc(void){ // CALC
  byte k=key+isfg*KEYS;
  if(isfg==1 && key==KTAN){pts(); isc=!isc; isfg=0;} // Complex operation demanded
  else if(key==KG){if(isfg==1) dictinit(); else if(isfg==2) calcquit(); else _fkeyg();} // Dict, Quit, g
  else if(key==KF) _fkeyf(); // f
  else if(key==KGTO && isfg==1){ishyp=1; isfg=0;} // hyp
  else if(key==KGTO && isfg==2){ishyp=2; isfg=0;} // ahyp
  else if(ishyp==1){ishyp=0; if(key==KSIN) mp=mpos(_SINH); else if(key==KCOS) mp=mpos(_COSH); else if(key==KTAN) mp=mpos(_TANH);} // hyp
  else if(ishyp==2){ishyp=0;if(key==KSIN) mp=mpos(_ASINH); else if(key==KCOS) mp=mpos(_ACOSH); else if(key==KTAN) mp=mpos(_ATANH);} // ahyp
  else if(key==KSST && isfg==1){isbig=!isbig; isfg=0;} // Toggle display
  else if(k<=sizeof(key2mpos)){if(k>KDOT && k!=KBSP) pts(); mp=mpos(key2mpos[k]);} // Standard keys
}

static void kdict(void){ // Dict
  if(key==KG) isdict=FALSE; // Quit
  else if(key==K1) dictnr=namenr-1; // End
  else if(key==K2 || key==K6) dictinc(); // Down
  else if(key==K7) dictnr=0; // Home
  else if(key==K3) for(byte i=0;i<10;i++) dictinc(); // PgDown
  else if(key==K8 || key==K4) dictdec(); // Up
  else if(key==K9) for(byte i=0;i<10;i++) dictdec(); // PgUp
  else if(key==K5 || key==KENTER){ // Execute and exit
    if(!iscmd && !israck) lastselected=namesort[dictnr]; // Set lastselected fo DO loop (not for CMD)
    if(iscalc) mp=mpos(namesort[dictnr]); // Execute calc
    else if(iscmd || ismed || israck){inscmdname(namesort[dictnr]); parseinit();} // Insert command name
    keyrelease(); isdict=isfg=FALSE;
  }
  else if(key==KSQRT) dictnr=val2pos(findwordpos("cA")); // Physical constants
  else if(key>KSQRT && key<=KTAN) dictnr=namenr/10*(key-KSQRT); // Fast decade access
  isprintscreen=TRUE;
}

static void kmed(void){ // MED
  if(key==KG) ismed=FALSE; // Quit
  else if(key==K1) mednr=namenr-1; // End
  else if(key==K2) medinc(); // Up
  else if(key==K3) for(byte i=0;i<10;i++) medinc(); // PgDown
  else if(key==K5 || key==KDIV) medmeminit(); // Edit cmd
  else if(key==KMUL) mednameinit(); // Edit cmd name
  else if(key==K7) mednr=0; // Pos1
  else if(key==K8) meddec(); // Down
  else if(key==K9) for(byte i=0;i<10;i++) meddec(); // PgUp
  else if(key==KSQRT) mednr=val2pos(findwordpos("cA")); // Physical constants
  else if(key>KSQRT && key<=KTAN) mednr=namenr/10*(key-KSQRT); // Fast decade access
  else if(key==KADD){ // New entry (name and mem)
    if(namenr<MAXCORE+MAXBINS+MAXUSR){
      char s[]="NEW"; strcpy(name[namenr],s); uint16_t siz=memsize(); mem[siz+1]=_NOP; mem[siz+2]=END;
      namenr++; sort(); mednr=val2pos(findwordpos(s));
    }
  }
  else if(key==KSUB){ // DEL
    if(val2pos(mednr)>MAXCORE+MAXBINS && namenr>1){ // For usr prgs only, for at least 2 exisiting prgs
      byte n=namesort[mednr]; memdel(n); namedel(n);
      namenr--; mednr--; sort();
    }
  }
  else if(key==KSTO) mednrbuf=mednr; // Copy
  else if(key==KRCL) copyprg(); // Paste
  makemeds();
}

static void krack(void){ // RACK
  if(key==KG){israck=FALSE; dwidth=DWIDTH;} // Quit
  else if(key==KF) israckview=!israckview; // Toggle view
  else if(key==K2) rdown(); // Down
  else if(key==K4) rleft(); // Left
  else if(key==K5 || key==KENTER || key==KDIV){ // Edit cell or select link
    if(isrlink){ // Return to kes with selected link
      if(strlen(es)<MAXGETS-2){char s[2+1]; cell2s(s,selcell); s[2]='\0'; ssinsat(es,s,escurpos); escurpos+=2;}
      shiftleft=oldshiftleft; shiftup=oldshiftup; selcell=oldselcell; // Restore old position
      ises=TRUE; isrlink=FALSE;
    }
    else editcell(); // Edit cell
  }
  else if(key==K6) rright(); // Right
  else if(key==K8) rup(); // Up
  else if(key==KMUL) editcelltxt(); // Edit cell text
  else if(key==KGSB){char s[2+1]={0}; cell2s(s,selcell); sort(); mednrbuf=val2pos(findwordpos(s));} // Copy
  else if(key==KROT){char s[2+1]={0}; cell2s(s,selcell); mednr=val2pos(findwordpos(s)); copyprg(); reval();} // Paste
  else if(key==KBSP){rdel(); reval();} // Delete complete sheet
  else if(key==KRS){iscalc=istos2clip=TRUE;} // Run CALC for side calculation (incl. clip)
}

static void ke6b(void){
  if(key==KG) ise6b=FALSE; // Quit
  else if(key==K8) enr=_dec(enr,9); // Up
  else if(key==K2) enr=_inc(enr,9); // Down
  else if(key==KENTER || key==K5) setrack(); // App1
}

static void ktt(void){ // TTOP
  if(key==KG) istt=FALSE; // Quit
  else if(key==KF && !ishex) ttinc();
  else if(key==KBSP) _tdrop();
  else if(key<=KRCL) tdoit(key);
}

static void kcpu(void){ // CPU
  if(key==KRS){cpup=0; if(iscpupause || iscpuin){cpup=CPUMEMSIZE; iscpupause=iscpuin=FALSE;}} // Run/Stop
  else if(iscpupause){iscpupause=FALSE; cpup=cpupold;} // Pause
  else if(iscpuin){iscpuin=FALSE; if(key<=KDIV) acc=(acc<<4)|(key&0x0f); cpup=cpupold;} // Input
  else if(key==KG){iscpu=FALSE; isfg=0;} // Quit
  else if(key==KBSP) cpuclr(); // Clear
  else if(key==KF) cpucla(); // Clear all
  else if(key==KSQRT) cpuviewdec(); // Memview up
  else if(key==KSST) cpuviewinc(); // Memview down
  else if(key==KEXP) for(byte i=0;i<5;i++) cpuviewdec(); // Memview page up
  else if(key==KGTO) for(byte i=0;i<5;i++) cpuviewinc(); // Memview page down
  else if(key<=KDIV) cpupoke(key); // Poke
}

static void ktex(void){ // TEX
  if(issave){issave=FALSE; if(key>=4 && key<=9) tsave(key-4);} // Save
  else if(isload){isload=FALSE; if(key>=4 && key<=9) tload(key-4);} // Load
  else if(key==KG) istex=FALSE; // Quit
  else if(key==KTAN){islinesplit=FALSE; texinit();} // Delete/New File
  else if(key==K8){islinesplit=FALSE; istexup=FALSE; if(texline) texline--;} // Up
  else if(key==K2){islinesplit=FALSE; istexup=TRUE; if(texline+1<texlines()) texline++;} // Down
  else if(key==K9){islinesplit=FALSE; istexup=FALSE; if(texline>4) texline-=5; else texline=0;} // PgUp
  else if(key==K3){islinesplit=FALSE; istexup=TRUE; if(texline+1+5<texlines()) texline+=5; else texline=texlines()-1;} // PgDown
  else if(key==KBSP || key==KSUB){islinesplit=FALSE; linedel(); if(texline) texline--;} // Delete line
  else if(key==KMUL){islinesplit=FALSE; if(texlines()>1) linejoin();} // Join line
  else if(key==KADD){islinesplit=FALSE; linenewafter();} // New line
  else if(key==KSUM){islinesplit=FALSE; linenewbefore();} // New line
  else if(key==KSTO) issave=TRUE; // Save
  else if(key==KRCL) isload=TRUE; // Load
  else if(key==KDIV){if(islinesplit) linesplit();} // Split line (at escurpos)
  else if(key==KRS){iscalc=istos2clip=TRUE;} // Run CALC for side calculation (incl. clip)
  else{islinesplit=TRUE; texstartedit();}// Edit line
}

static void kdate(void){ // DATE
  if(key==KG) isdate=FALSE; // Quit
  else if(key==K0) ismonfirst=!ismonfirst; // Su/Mo
  else if(key==K1) datemonth=12; // Last month
  else if(key==K2) datemonthinc(); // Month+
  else if(key==K3) dateyearinc(); // Year+
  else if(key==K4) dateweekdec(); // Week-
  else if(key==K5) datetoday(); // Today
  else if(key==K6) dateweekinc(); // Week+
  else if(key==K7) datemonth=1; // First month
  else if(key==K8) datemonthdec(); // Month-
  else if(key==K9) dateyeardec(); // Year-
  if(key!=K4 && key!=K6) dateweek=0; // Always reset calweek (not for week+-)
}

static void ktime(void){ // TIME
  if(key==KG) istime=FALSE; // Quit
  else if(key>=KSQRT && key<=KPOW10) tz[key-KSQRT]=_dec(tz[key-KSQRT],24); // TZ down
  else if(key>=KSST && key<=KSIN) tz[key-KSST]=_inc(tz[key-KSST],24); // TZ up
  else if(key==KRS) tz[0]=GMT; // TZhome reset
  else if(key>=KGSB && key<=KROT) tz[key-KGSB+1]=tz[0]; // TZ reset
}

static void kmark(void){ // Score
  if(key==KG) ismark=FALSE; // Quit
  else if(key==KSQRT) marka=_inc(marka,100); // A+
  else if(key==KSST) marka=_dec(marka,100); // A-
  else if(key==KDIV) markb=_inc(markb,100); // B+
  else if(key==KMUL) markb=_dec(markb,100); // B-
  else if(key==KEXP) markc=_inc(markc,100); // C+
  else if(key==KGTO) markc=_dec(markc,100); // C-
  else if(key==K9) markd=_inc(markd,100); // D+
  else if(key==K6) markd=_dec(markd,100); // D-
  else if(key==KRS) marka=0; // A clr
  else if(key==KSUB) markb=0; // B clr
  else if(key==KGSB) markc=0; // C clr
  else if(key==K3) markd=0; // D clr
  else if(key==KBSP) marka=markb=markc=markd=0; // AB clr
  else if(key==KENTER) ismark4=!ismark4; // 2 or 4 scores
}

static void kfoodselect(void){ // Food select
  if(key==KG) isfoodselect=FALSE; // Quit
  else if(key==K8) foodnr=_dec(foodnr,ibc[sizeof(ibc)-1]); // Food-
  else if(key==K2) foodnr=_inc(foodnr,ibc[sizeof(ibc)-1]); // Food+
  else if(key==K7) foodnr=0; // Food=0
  else if(key==K1) foodnr=ibc[sizeof(ibc)-1]-1; // Food=max
  else if(key==K9) foodnr=ibc[(foodnr2cat()?_dec(foodnr2cat(),sizeof(ibc)):0)]; // Cat-
  else if(key==K3) foodnr=ibc[(foodnr2cat()>=sizeof(ibc)-2?sizeof(ibc)-2:_inc(foodnr2cat(),sizeof(ibc)))]; // Cat+
  else if(key==K5 || key==KENTER || key==KADD) additem(foodnr); // Select/add
}
static void ksugr(void){ // SUGR
  if(key==KG) issugr=FALSE; // Quit
  else if(key==KENTER || key==K5) isfoodselect=TRUE; // Food select
  else if(key==KSQRT) bg_now+=10; // BG+
  else if(key==KSST){if(bg_now) bg_now-=10;} // BG-
  else if(key==KRS) bg_now=0; // Clear BG
  else if(key==KEXP) bg_target+=10; // target+
  else if(key==KGTO){if(bg_target) bg_target-=10;} // target-
  else if(key==KGSB) bg_target=0; // Clear target
  else if(key==KPOW10) isf+=10; // isf+
  else if(key==KSIN){if(isf) isf-=10;} // isf-
  else if(key==KROT) isf=0; // Clear isf
  else if(key==KPOW) last_dose++; // Last+
  else if(key==KCOS){if(last_dose) last_dose--;} // Last-
  else if(key==KSWAP) last_dose=0; // Clear Last
  else if(key==KINV) h_ago++; // h+
  else if(key==KTAN){if(h_ago) h_ago--;} // h-
  else if(key==KBSP) h_ago=0; // Clear h
  else if(key==K0) items=carbs=fpus=0; // Clear collection
}

static void kasc(void){ // ASCII table
  if(key==KG) isasc=FALSE; // Quit
  else if(key==K8) ascnr=_dec(ascnr,ASCLIN); // Up
  else if(key==K2) ascnr=_inc(ascnr,ASCLIN); // Down
}

static void kpt(void){ // PT
  if(key==KG) ispt=FALSE; // Quit
  else if(key==K7) ptnr=0; // Pos1
  else if(key==K1) ptnr=PTMAX-1; // End
  else if(key==K8) ptdec(); // Up
  else if(key==K2) ptinc(); // Down
  else if(key==K9) for(byte i=0;i<10;i++) ptdec(); // PgUp
  else if(key==K3) for(byte i=0;i<10;i++) ptinc(); // PgDown
  else if(key==KSUB) ptnr=nxtprv(TRUE); // Find alphabetically previous element
  else if(key==KADD) ptnr=nxtprv(FALSE); // Find alphabetically next element
  else if(key==KDIV) ptnr=88; // Alphabetically first element (89 Ac)
  else if(key==KMUL) ptnr=39; // Alphabetically last element (40 Zr)
  else if(key==KSUM) ptnr=11; // Alphabetically middle element (12 Mg)
}

static void kdi(void){ // D&I
  if(key==KG) isdi=FALSE; // Quit
  else if(key==K8) didec(); // Up
  else if(key==K2) diinc(); // Down
  else if(key==K9) for(byte i=0;i<5;i++) didec(); // PgUp
  else if(key==K3) for(byte i=0;i<5;i++) diinc(); // PgDown
  else if(key==K7) dinr=0; // Pos1
  else if(key==K1) dinr=MAXFORMULA-1; // END
  else if(key==K4) isdipos1=TRUE; // Left
  else if(key==K6) isdipos1=FALSE; // Right
  else if(key==K5) ises=TRUE; // View formula with es
}

static void krule(void){ // Slide Rule
  if(key==KG) isrule=FALSE; // Quit
  else if(key==KSQRT) ruleleft(1); // Left
  else if(key==KDIV) ruleright(1); // Right
  else if(key==KEXP) ruleleft(5); // Left x5
  else if(key==K9) ruleright(5); // Right x5
  else if(key==KPOW10) ruleleft(10); // Left x10
  else if(key==K8) ruleright(10); // Right x10
  else if(key==KPOW) ruleleft(20); // Left x20
  else if(key==K7) ruleright(20); // Right x20
}

static void kfit(void){ // FIT
  if(key==KG) isfit=FALSE; // Quit
  else if(key==KF) fitinit(); // New
  else if(key==K4 || key==K1) fitmove(_FITL); // Left
  else if(key==K6 || key==K3) fitmove(_FITR); // Right
  else if(key==K8 || key==K5) fitmove(_FITU); // Up
  else if(key==K2) fitmove(_FITD); // Down
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  S E T U P   &   M A I N

static void setup(void){
  systemInit(); init_keyboard_pins(); // Configure cpu and mandatory peripherals
  lcdset(); // Display flip and page offset
  gpioSetPullup(&IOCON_PIO1_11, gpioPullupMode_Inactive);  // Vref pins to idle state
  gpioSetPullup(&IOCON_PIO3_2,  gpioPullupMode_Inactive);
  vref_idle();
  setpin(0,4,1,0); setpin(0,5,1,0); // Configure unused i2c pins for lower energy consumption
  cpuSetClock(0); // Set CPU to 12 MHz (0/1...12/48 MHz)
  memreset(); cpuinit(); // Initialize
}

int main(void){
  setup(); // Setup hardware
  byte keyold=0; // Debouncing key variable
  uint16_t timestamp=timer(); // Get timestamp (in sec)

  for(;;){ // Main loop
    if(isprintscreen) isprintscreen=printscreen(); // Print screen

    if(mp){ // Proceed mem[]
      byte cmd=mem[mp++]; // Grab key, increment mp
      if(cmd==END){ // END found
        if(ap){
          mp=apop(); // End of subroutine - return
          if(israck) pts(); // Enable simple number cells
        }
        else if(isreval){mp=0; pts(); rval[revalnr-revalstart-1]=pop();} // Save stack to cell value
        else{ // Exit
          mp=0;
          if(!isparsees && !issolve && !isint && !isslope && !isplotcalc & !isdo){
            isprintscreen=TRUE; keyrelease();
          }
        }
      }
      else if(cmd<MAXCORE) doit(cmd); // Execute core function
      else{ // Branch to subroutine
        apush(mp); // Save (next) mp
        mp=mpos(cmd); // Set mp to branched subroutine
      }
      if(read_on_key_pin(1)){mp=ap=0; isdo=issolve=isint=isparsees=isreval=FALSE; keyrelease();} // Break
      key=END; // Prevent key execute
    }

    else if(issolve){ // Solve
      if(++runs<3){
        if(runs==2){ // Second run
          _swap(); push(DELTAX); _add(); // x0+DELTAX ... Prepare new x-value
        }
        mp=fnmp; // Set mp to run fn
      }
      else{ // Third run
        _swap(); _div(); push(-1.0); _add(); // f1/f0-1
        push(DELTAX); _swap(); _div(); // diffx=DELTAX/(f1/f0-1)
        double diffx=push(pop()); // Rescue diffx for exit condition
        _sub(); // x1=x0-diffx ... improved x-value
        runs=0;
        if(_abs(diffx)<DELTAX || laps>MAXLAPS){ // Exit
          isprintscreen=TRUE; issolve=FALSE; mp=0;
        }
        else{_dup(); _dup(); laps++;} // 3 x1 on stack
      }
    }
    else if(isint){ // Integrate
      runs++; mp=fnmp; // Set mp to run fn
      if(runs==1){} // First run - f(b)
      else if(runs==2){ // Second run - f(a)
        intf=dadd(intf,pop()); push(limita); // F=F+f(b)
      }
      else if(runs==3){ // Third run - xa
        intf=dadd(intf,pop()); push(dadd(limita,intdelta)); // F=F+f(a)
      }
      else if(runs<=2*STRIPES-1+3){ // 2n-1 stripes
        intf=dadd(intf,dmul((((runs-3)%2)?4:2),pop())); // Multiplyer (2 even, 4 odd)
        push(dadd(limita,dmul((runs-2),intdelta)));
      }
      else{ // Last run
        pop(); push(ddiv(dmul(intf,intdelta),3.0));
        isprintscreen=TRUE; isint=FALSE; mp=0; // Exit
      }
    }
    else if(isslope){ // Slope =(f2- - 8*f1- + 8*f1 - f2 )/12/DELTAX
      runs++; mp=fnmp; // Set mp to run fn
      if(runs==1){} // First run - f2-
      else if(runs==2){ // Second run
        intf=dadd(intf,pop()); slopex=dadd(slopex,DELTAX); push(slopex); // f1-
      }
      else if(runs==3){ // Third run
        intf=dsub(intf,dmul(8.0,pop())); slopex=dadd(slopex,dmul(2.0,DELTAX)); push(slopex); // f1
      }
      else if(runs==4){ // Fourth run
        intf=dadd(intf,dmul(8.0,pop())); slopex=dadd(slopex,DELTAX); push(slopex); // f2
      }
      else{ // Last run
        push(ddiv(ddiv(dsub(intf,pop()),12.0),DELTAX));
        isprintscreen=TRUE; isslope=FALSE; mp=0; // Exit
      }
    }
    else if(isplotcalc){ // Plot
      runs++; mp=fnmp; // Set mp to run fn
      if(laps==0){ // LAP1 - Find min/max
        if(runs==1){}
        else if(runs==2){plotmin=plotmax=pop(); push(limita);} // Init min/max
        else if(runs<=PLOTX+2){
          double y=pop(); if(y<plotmin) plotmin=y; if(y>plotmax) plotmax=y; // Min/Max
          push(dadd(limita,(runs-2)*intdelta));
        }
        else{runs=0; laps++; push(limita);} // Prepare 2nd lap
      }
      else{ // LAP2 - Fill plot[]
        if(runs==1){}
        else if(runs<=PLOTX+1){
          plot[runs-2]=ddiv(dsub(plotmin,pop()),dsub(plotmin,plotmax))*(PLOTY-1);
          push(dadd(limita,dmul((runs-1),intdelta)));
        }
        else{isprintscreen=TRUE; isplotcalc=FALSE;} // Exit
      }
    }

    else if(isdo){if(doi--) mp=mpos(lastselected); else{isdo=FALSE; isprintscreen=TRUE;}} // DO loop

    else if(isparsees){ // Parsing input string
      getnextword(); // Get next esword
      if(strlen(esword)!=0) interpret(esword);
      else{isparsees=FALSE; esparsepos=0; keyrelease(); isprintscreen=TRUE;} // Quit
    }

    else if(isreval){ // Evaluate spreadsheet
      _cla(); mp=mpos(revalnr);
      if(++revalnr>revalend) isreval=FALSE; // Exit
    }

    else if(cpup!=CPUMEMSIZE){ // Proceed CPU
      cpupoldexe=cpup; // For printing last command
      (*cpucmdexe[cmd2exenr(cpucmd=cpumem[cpup++])])(); // Execute cpu function
      //if(read_on_key_pin(1)){cpup=CPUMEMSIZE; keyrelease();} // Break
      if(readonkey()){cpup=CPUMEMSIZE; keyrelease();} // Break
    }

    else{ // Scan key
      sleep_ds(offtime*10, WT_ALL_KEYS); // Wait timespan (in dsec) or interrupt (keypress or RTC)
      key=scankey();
    }

    if(timer()-timestamp>offtime) key=KON; // Timer suspend

    if(key!=END && key!=keyold){ // Evaluate key
      if(isbuzz) buzz(2); // Key click
      if(key==KON){key=END; sleep(); isprintscreen=TRUE;} // Suspend
      else if(isinput) kinput();
      else if(isset) kset();
      else if(isdict) kdict();
      else if(ises || iscmd) kes();
      else if(isplot) kplot();
      else if(iscalc) kcalc();
      else if(ismed) kmed();
      else if(israck) krack();
      else if(ise6b) ke6b();
      else if(istt) ktt();
      else if(iscpu) kcpu();
      else if(istex) ktex();
      else if(isdate) kdate();
      else if(istime) ktime();
      else if(ismark) kmark();
      else if(isfoodselect) kfoodselect();
      else if(issugr) ksugr();
      else if(isasc) kasc();
      else if(ispt) kpt();
      else if(isdi) kdi();
      else if(isrule) krule();
      else if(isfit) kfit();
      else kmenu();
      if(!iscmd) isprintscreen=TRUE; // CMD-exception to prevent printing parse value '_'
      timestamp=timer(); // Reset timestamp
    } // End of key evaluation
    keyold=key; // Debounce
  } // End main loop
}
