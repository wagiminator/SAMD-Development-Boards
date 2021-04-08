# Generic ATsamD11D14AS

```
=====================================  ATsamD11D14AS  ===================================
Other COM   PWM  Analog  INT  Arduino*            Arduino*  Analog  INT  PWM   COM  Other
=========================================================================================
                                   1-------------------
            TCC01    *     *    5  | A5             A4 | 4    *     *   TCC00        REFB
     SS     TCC02    *          6  | A6             A3 | 3    *                      REFA
    MISO    TCC03    *     *    7  | A7             A2 | 2    *     *                 DAC
Xin32/Xin                       8  | A8 (XIN)      Vdd |
Xout32/Xout                     9  | A9 (XOUT)     Gnd |
  MOSI/TX2           *    NMI   14 | A14           A25 | 25                  USB D+
  SCK/RX2   TC11     *     *    15 | A15           A24 | 24                  USB D-
            TC10           *    16 | A16           A31 | 31         *   TC21  RX1   SWDIO
    SDA                    *    22 | A22           A30 | 30             TC20  TX1  SWDCLK
    SCL                         23 | A23       RST/A28 | 28                          BOOT
                                    -------------------

* Most pins can be used for more than one function. When using PIN_MAP_STANDARD, the port
  pin number printed on the chip above is also used in Arduino (but without the 'A') for
  all of the supported functions (ie: digitalRead(), analogRead(), analogWrite(), etc.).
  When using PIN_MAP_COMPACT, the Arduino numbering is sequential starting from 0 at the
  top left pin (A5). PIN_MAP_COMPACT uses less FLASH.
* When USB CDC is enabled, Serial refers to SerialUSB, otherwise it refers to Serial1.
* Tone available on TC2.
* Leave pin A30 floating (or use external pullup) during reset.
* DO NOT connect voltages higher than 3.3V!
```


## Pins descriptions for Generic ATsamD11D14AS

### PIN_MAP_STANDARD
```
============================================================================================================================================
Arduino	| Port	| Alternate Function	| Comments (! means not used with this peripheral assignment)
--------|-------|-----------------------|-------------------------------------------------------------------------------------------
0	| ----	| NOT A PIN		| NOT A PIN
1	| ----	| NOT A PIN		| NOT A PIN
2	| PA02	| DAC			| EIC/EXTINT[2] ADC/AIN[0] PTC/Y[0] DAC/VOUT
3	| PA03	| REFA			| !EIC/EXTINT[3] REF/ADC/VREFA REF/DAC/VREFA ADC/AIN[1] PTC/Y[1]
4	| PA04	| REFB / TCC00		| EIC/EXTINT[4] REF/ADC/VREFB ADC/AIN[4] AC/AIN[0] PTC/Y[2] !SERCOM0/PAD[2] !SERCOM0/PAD[0] !TC1/WO[0] TCC0/WO[0]
5	| PA05	| TCC01			| EIC/EXTINT[5] ADC/AIN[3] AC/AIN[1] PTC/Y[3] !SERCOM0/PAD[3] !SERCOM0/PAD[1] !TC1/WO[1] TCC0/WO[1]
6	| PA06	| SS (unused) / TCC02	| !EIC/EXTINT[6] ADC/AIN[4] AC/AIN[2] PTC/Y[4] SERCOM0/PAD[0] !SERCOM0/PAD[2] !TC2/WO[0] TCC0/WO[2]
7	| PA07	| MISO / TCC03		| EIC/EXTINT[7] ADC/AIN[5] AC/AIN[3] PTC/Y[5] SERCOM0/PAD[1] !SERCOM0/PAD[3] !TC2/WO[1] TCC0/WO[3]
8	| PA08	| Xin32 / Xin		| Xin32
9	| PA09	| Xout32 / Xout		| Xout32
10	| ----	| NOT A PIN             | NOT A PIN
11	| ----	| NOT A PIN             | NOT A PIN
12	| ----	| NOT A PIN		| NOT A PIN
13	| ----	| NOT A PIN		| NOT A PIN
14	| PA14	| MOSI / TX2	        | EIC/NMI ADC/AIN[6] PTC/X[0] PTC/Y[6] SERCOM0/PAD[0] !SERCOM2/PAD[0] !TC1/WO[0] !TCC0/WO[0]
15	| PA15	| SCK / RX2 / TC11      | EIC/EXTINT[1] ADC/AIN[7] PTC/X[1] PTC/Y[7] SERCOM0/PAD[1] !SERCOM2/PAD[1] TC1/WO[1] !TCC0/WO[1]
16	| PA16	| TC10			| EIC/EXTINT[0] PTC/X[4] PTC/Y[10] !SERCOM1/PAD[2] !SERCOM2/PAD[2] TC1/WO[0] !TCC0/WO[6]
17	| ----  | NOT A PIN             | NOT A PIN
18	| ----	| NOT A PIN		| NOT A PIN
19	| ----	| NOT A PIN		| NOT A PIN
20	| ----	| NOT A PIN		| NOT A PIN
21	| ----	| NOT A PIN		| NOT A PIN
22	| PA22	| SDA           	| EIC/EXTINT[6] PTC/X[6] PTC/Y[12] !SERCOM1/PAD[0] SERCOM2/PAD[0] !TC1/WO[0] !TCC0/WO[4]
23	| PA23	| SCL	                | !EIC/EXTINT[7] PTC/X[7] PTC/Y[13] !SERCOM1/PAD[1] SERCOM2/PAD[1] !TC1/WO[1] !TCC0/WO[5]
24	| PA24	| USB_NEGATIVE		| USB/DM
25	| PA25	| USB_POSITIVE		| USB/DP
26	| ----	| NOT A PIN		| NOT A PIN
27	| ----  | NOT A PIN             | NOT A PIN
28	| PA28	| Reset			| Reset, BOOT (double tap bootloader entry)
29	| ----	| NOT A PIN		| NOT A PIN
30	| PA30	| TX1 / TC20 / SWD CLK	| !EIC/EXTINT[2] !SERCOM1/PAD[0] SERCOM1/PAD[2] TC2/WO[0] !TCC0/WO[2] SWD CLK, leave floating during boot
31	| PA31	| RX1 / TC21 / SWD IO	| EIC/EXTINT[3] !SERCOM1/PAD[1] SERCOM1/PAD[3] TC2/WO[1] !TCC0/WO[3] SWD IO
============================================================================================================================================
```

### PIN_MAP_COMPACT
```
============================================================================================================================================
Arduino | Port  | Alternate Function    | Comments (! means not used with this peripheral assignment)
--------|-------|-----------------------|-------------------------------------------------------------------------------------------
0       | PA02  | DAC                   | EIC/EXTINT[2] ADC/AIN[0] PTC/Y[0] DAC/VOUT
1       | PA03  | REFA                  | !EIC/EXTINT[3] REF/ADC/VREFA REF/DAC/VREFA ADC/AIN[1] PTC/Y[1]
2       | PA04  | REFB / TCC00          | EIC/EXTINT[4] REF/ADC/VREFB ADC/AIN[4] AC/AIN[0] PTC/Y[2] !SERCOM0/PAD[2] !SERCOM0/PAD[0] !TC1/WO[0] TCC0/WO[0]
3       | PA05  | TCC01                 | EIC/EXTINT[5] ADC/AIN[3] AC/AIN[1] PTC/Y[3] !SERCOM0/PAD[3] !SERCOM0/PAD[1] !TC1/WO[1] TCC0/WO[1]
4       | PA06  | SS (unused) / TCC02   | !EIC/EXTINT[6] ADC/AIN[4] AC/AIN[2] PTC/Y[4] SERCOM0/PAD[0] !SERCOM0/PAD[2] !TC2/WO[0] TCC0/WO[2]
5       | PA07  | MISO / TCC03          | EIC/EXTINT[7] ADC/AIN[5] AC/AIN[3] PTC/Y[5] SERCOM0/PAD[1] !SERCOM0/PAD[3] !TC2/WO[1] TCC0/WO[3]
6       | PA08  | Xin32 / Xin           | Xin32
7       | PA09  | Xout32 / Xout         | Xout32
8       | PA14  | MOSI / TX2            | EIC/NMI ADC/AIN[6] PTC/X[0] PTC/Y[6] SERCOM0/PAD[0] !SERCOM2/PAD[0] !TC1/WO[0] !TCC0/WO[0]
9       | PA15  | SCK / RX2 / TC11      | EIC/EXTINT[1] ADC/AIN[7] PTC/X[1] PTC/Y[7] SERCOM0/PAD[1] !SERCOM2/PAD[1] TC1/WO[1] !TCC0/WO[1]
10      | PA16  | TC10                  | EIC/EXTINT[0] PTC/X[4] PTC/Y[10] !SERCOM1/PAD[2] !SERCOM2/PAD[2] TC1/WO[0] !TCC0/WO[6]
11      | PA22  | SDA                   | EIC/EXTINT[6] PTC/X[6] PTC/Y[12] !SERCOM1/PAD[0] SERCOM2/PAD[0] !TC1/WO[0] !TCC0/WO[4]
12      | PA23  | SCL                   | !EIC/EXTINT[7] PTC/X[7] PTC/Y[13] !SERCOM1/PAD[1] SERCOM2/PAD[1] !TC1/WO[1] !TCC0/WO[5]
13      | PA24  | USB_NEGATIVE          | USB/DM
14      | PA25  | USB_POSITIVE          | USB/DP
15      | PA28  | Reset                 | Reset, BOOT (double tap bootloader entry)
16      | PA30  | TX1 / TC20 / SWD CLK  | !EIC/EXTINT[2] !SERCOM1/PAD[0] SERCOM1/PAD[2] TC2/WO[0] !TCC0/WO[2] SWD CLK, leave floating during boot
17      | PA31  | RX1 / TC21 / SWD IO   | EIC/EXTINT[3] !SERCOM1/PAD[1] SERCOM1/PAD[3] TC2/WO[1] !TCC0/WO[3] SWD IO
============================================================================================================================================

* Most pins can be used for more than one function. When using PIN_MAP_STANDARD, the port
  pin number printed on the chip above is also used in Arduino (but without the 'A') for
  all of the supported functions (ie: digitalRead(), analogRead(), analogWrite(), etc.).
  When using PIN_MAP_COMPACT, the Arduino numbering is sequential starting from 0 at the
  top left pin (A5). PIN_MAP_COMPACT uses less RAM.
* NOT A PIN means the Arduino pin number is not mapped to a physical pin.
* Pins 24 and 25 are in use by USB (USB_NEGATIVE and USB_POSITIVE).
* The tone library uses TC2.
* Leave pin A30 floating (or use external pullup) during reset.
```


## Board Configuration Notes

* **Crystals**
  * Either a 32.768KHz crystal or a high speed crystal can be used.
  * The bootloader does not use an external crystal by default. Double-tap the reset button to enter manually.

* **GPIO** 
  * All pins (including analog) support INPUT, OUTPUT, INPUT_PULLUP, and INPUT_PULLDOWN.
  * Each pin can source or sink a maximum of 7 mA (when PER_ATTR_DRIVE_STRONG is set for the pin, enabled by default).
  * Internal pull-up and pull-down resistors of 20-60 Kohms (40Kohm typ., disconnected by default).

* **Analog Inputs**
  * 8 pins can be configured as ADC analog inputs.
  * Each pin measures from ground to 3.3 volts by default.
  * Each pin provides 10 bits of resolution (1024 values) by default.
  * 12-bit resolution supported by using the analogReadResolution() function.
  * The upper end of the measurement range can be changed using the analogReference() function.
  * A reference voltage can be connected to REF.

* **DAC**
  * One analog output is available on pin 2.
  * Provides a 10-bit voltage output with the analogWrite() function.

* **PWM**
  * 8 pins can be configured as PWM outputs.
  * Each pin provides 8 bits of resolution (256 values) by default.
  * 12-bit resolution supported by using the analogWriteResolution() function.

* **External Interrupts**
  * 8 pins can be configured with external interrupts.

* **SERCOM**
  * 3 SERCOM are available.
  * Up to 2 UART instances
  * 1 SPI instance
  * 1 WIRE (I2C) instance



## PinDescription table format

### Note that in 1.6.18-beta-b1 a new compact table format was added.
The standard PinDescription table uses 12 bytes per pin. Define PIN_DESCRIPTION_TABLE_SIMPLE
to use a more compact format that uses only 4 bytes per pin (currently only available
for the D11 chips). In this case, the PinType, PinAttribute, and GCLKCCL columns are not used
(they are not required). Additionally, the SetPortPin() and SetExtIntADC() macros are used to
pack Port and Pin into the PortPin column, and ExtInt and ADCChannelNumber into the ExtIntADC
column. Note that external libraries that reference the PinDescription table directly (uncommon)
will no longer work. This define can be combined with the PIN_MAP_COMPACT define, which
is available in variant.h of the D11 variants. This can save from 10's to over 200 bytes.

### Note that a new column (GCLKCCL) was added for 1.6.8-beta-b0.
MATTAIRTECH_ARDUINO_SAMD_VARIANT_COMPLIANCE in variant.h is used to track versions.
If using board variant files with the old format, the new core will still read the
table the old way, losing any new features introduced by the new column. Additionally,
new definitions have been added for D51, L21, and C21 support.

### Each pin can have multiple functions.
The PinDescription table describes how each of the pins can be used by the Arduino
core. Each pin can have multiple functions (ie: ADC input, digital output, PWM,
communications, etc.), and the PinDescription table configures which functions can
be used for each pin. This table is mainly accessed by the pinPeripheral function in
wiring_private.c, which is used to attach a pin to a particular peripheral function.
The communications drivers (ie: SPI, I2C, and UART), analogRead(), analogWrite(),
analogReference(), attachInterrupt(), and pinMode() all call pinPeripheral() to
verify that the pin can perform the function requested, and to configure the pin for
that function. Most of the contents of pinMode() are now in pinPeripheral().

### Pin Mapping
There are different ways that pins can be mapped. Typically, there is no relation
between the arduino pin number used, and the actual port pin designator. Thus, the 
pcb must be printed with the arduino numbering, otherwise, if the port pin is printed,
a cross reference table is needed to find the arduino pin number. However, this results
in the least amount of space used by the table. Another method, used by default by the
MT-D21E and MT-D11, maps Arduino pin numbers to the actual port pin number (ie: Arduino
pin 28 = Port A28). This works well when there is only one port (or if the PORTB pins
are used for onboard functions and not broken out). PIO_NOT_A_PIN entries must be added
for pins that are used for other purposes or for pins that do not exist (especially the
D11), so some FLASH space may be wasted. For an example of both types, see variant.cpp
from the MT-D11 variant. The Xeno combines both methods, using the actual port pin 
designators from both PORTA and PORTB for arduino numbers 0-31 (ie: B1=1, A2=2), then
using arduino numbering only above 31. For 0-31 only one pin from PORTA or PORTB can be
used, leaving the other pin for some number above 31.

**See [WVariant.h](https://github.com/mattairtech/ArduinoCore-samd/tree/master/cores/arduino/WVariant.h) for the definitions used in the table.**

### Port
This is the port (ie: PORTA). Not used with PIN_DESCRIPTION_TABLE_SIMPLE.

### Pin
This is the pin (bit) within the port. Valid values are 0-31. Not used with
PIN_DESCRIPTION_TABLE_SIMPLE.

### SetPortPin()
When PIN_DESCRIPTION_TABLE_SIMPLE is defined, Port and Pin are combined into one column
using the SetPortPin() packing macro: SetPortPin(PORTA, 2). If the pin is not usable,
use SetPortPin(NOT_A_PORT, 0).

### PinType
This indicates what peripheral function the pin can be attached to. In most cases,
this is PIO_MULTI, which means that the pin can be anything listed in the PinAttribute
field. It can also be set to a specific peripheral. In this case, any attempt to
configure the pin (using pinPeripheral or pinMode) as anything else will fail (and
pinPeripheral will return -1). This can be used to prevent accidental re-configuration
of a pin that is configured for only one function (ie: USB D- and D+ pins). If a pin
is not used or does not exist, PIO_NOT_A_PIN must be entered in this field. See
WVariant.h for valid entries. These entries are also used as a parameter to
pinPeripheral() with the exception of PIO_NOT_A_PIN and PIO_MULTI. The pinMode function
now calls pinPeripheral() with the desired mode. Note that this field is not used to
select between the different peripherals possible with each of the SERCOM and TIMER
functions. PeripheralAttribute is now used for this. When PIN_DESCRIPTION_TABLE_SIMPLE
is defined, PinType is not used (the pin is treated as PIO_MULTI).

### PeripheralAttribute
This is an 8-bit bitfield used for various peripheral configuration. It is primarily
used to select between the different peripherals possible with each of the SERCOM and
TIMER functions. TIMER pins are individual, while SERCOM uses a group of two to four
pins. This group of pins can span both peripherals. For example, pin 19 (SPI1 SCK) on
the MT-D21E uses PER_ATTR_SERCOM_ALT while pin 22 (SPI1 MISO) uses PER_ATTR_SERCOM_STD.
Both TIMER and SERCOM can exist for each pin. This bitfield is also used to set the
pin drive strength and the input buffer configuration (ie: totem-pole, open-drain,
buskeeper, etc.). Starting with 1.6.8, the ADC instance on the D51 and C21 (there are
two) is also selected here. Note that the D51 adds a third timer attribute and
requires consultation of the datasheet IOSET tables. See WVariant.h for valid entries.

### PinAttribute
This is a 32-bit bitfield used to list all of the valid peripheral functions that a
pin can attach to. This includes GPIO functions like PIN_ATTR_OUTPUT. Certain
attributes are shorthand for a combination of other attributes. PIN_ATTR_DIGITAL
includes all of the GPIO functions, while PIN_ATTR_TIMER includes both
PIN_ATTR_TIMER_PWM and PIN_ATTR_TIMER_CAPTURE (capture is not used yet).
PIN_ATTR_ANALOG is an alias to PIN_ATTR_ANALOG_ADC. This bitfield is useful for
limiting a pin to only input related functions or output functions. This allows a pin
to have a more flexible configuration, while restricting the direction (ie: to avoid
contention). See WVariant.h for valid entries. Not used with PIN_DESCRIPTION_TABLE_SIMPLE.

### TCChannel
This is the TC/TCC channel (if any) assigned to the pin. Some TC channels are available
on multiple pins. In general, only one pin should be configured in the pinDescription
table per TC channel. Starting with 1.6.8, the timer type is now encoded in this column
to support the D51, L21 and C21, which use TC numbers starting at 0 (rather than 3 as on
the D21). See WVariant.h for valid entries.

### ADCChannelNumber
This is the ADC channel (if any) assigned to the pin. The D51 and C21 each have two ADC
instances, which are selected in the PeripheralAttribute column. See WVariant.h for
valid entries. Not used with PIN_DESCRIPTION_TABLE_SIMPLE.

### ExtInt
This is the interrupt (if any) assigned to the pin. Some interrupt numbers are
available on multiple pins. In general, only one pin should be configured in the
pinDescription table per interrupt number. Thus, for example, if an interrupt was
needed on pin 2, EXTERNAL_INT_2 can be moved from pin 18. See WVariant.h for valid
entries. Not used with PIN_DESCRIPTION_TABLE_SIMPLE.

### SetExtIntADC()
When PIN_DESCRIPTION_TABLE_SIMPLE is defined, ExtInt and ADCChannelNumber are combined
into one column using the SetExtIntADC() packing macro: SetExtIntADC(EXTERNAL_INT_4,
ADC_Channel2). If the pin is not usable, use SetExtIntADC(EXTERNAL_INT_NONE, No_ADC_Channel).

### GCLKCCL
This column was added in 1.6.8-beta-b0. It is not yet used. It will eventually support
the Analog Comparators (AC), the Configurable Custom Logic (CCL) peripherals of the D51,
L21 and C21, and the GCLK outputs (inputs) of all of the MCUs. Not used with
PIN_DESCRIPTION_TABLE_SIMPLE.
