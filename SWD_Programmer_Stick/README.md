# SWD Programmer Stick
The SWD Programmer Stick is a CMSIS-DAP compliant debugging probe with SWD protocol support based on [Free-DAP](https://github.com/ataradov/free-dap) by Alex Taradov. It can be used to program Microchip SAM and other ARM-based microcontrollers.

![SWD_Programmer_Stick_pic1.jpg](https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/SWD_Programmer_Stick/documentation/SWD_Programmer_Stick_pic1.jpg)

# CMSIS-DAP Explanation
CMSIS-DAP provides a standardized way to access the Coresight Debug Access Port (DAP) of an ARM Cortex microcontroller via USB. CMSIS-DAP is generally implemented as an on-board interface chip, providing direct USB connection from a development board to a debugger running on a host computer on one side, and over JTAG (Joint Test Action Group) or SWD (Serial Wire Debug) to the target device to access the Coresight DAP on the other. For more information refer to the [CMSIS-DAP Handbook](https://os.mbed.com/handbook/CMSIS-DAP).

# Compiling and Installing Firmware
Since there is no dedicated header for programming on the board, the microcontroller should be programmed before soldering it on. The [SAMD Programmer Adapter](https://github.com/wagiminator/SAMD-Development-Boards/tree/main/SAMD_Programmer_Adapter) is helpful for this. In order to program the microcontroller after soldering, the solder pads on the underside of the board must be used.

![SWD_Programmer_Stick_pic3.jpg](https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/SWD_Programmer_Stick/documentation/SWD_Programmer_Stick_pic3.jpg)

## Compiling Firmware
- Install [GNU Arm Embedded Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)
- Run "make all" inside the "source" folder
- Use "Makefile_bl" if you want to compile for a 4KB bootloader

## Installing Firmware using a CMSIS-DAP Device
- Install [OpenOCD](http://openocd.org/)
- Connect the programmer to your PC and the target board. Make sure your target board is powered.
- Run "openocd -f cmsis-dap.cfg" inside the "binaries" folder

## Installing Firmware using a SEGGER J-Link Device with OpenOCD
- Install [OpenOCD](http://openocd.org/)
- Connect the programmer to your PC and the target board. Make sure your target board is powered.
- Run "openocd -f jlink.cfg" inside the "binaries" folder

## Installing Firmware using a SEGGER J-Link Device with J-Link Commander
- Install [SEGGER J-Link Commander](http://www.segger.com/download-jlink.html)
- Connect the programmer to your PC and the target board. Make sure your target board is powered.
- Run "JLinkExe -commanderscript flash.jlink" inside the "binaries" folder

## Solving the Chicken and Egg Problem
Unfortunately, you need another programmer to program the programmer. Here are a few cheap ways to do it:

### SEGGER J-Link EDU Mini (Tested)
J-LINK EDU Mini is a version of the J-Link EDU in a reduced form factor with identical functionality as the larger devices. It has been designed to allow students and educational facilities as well as hobbyists access to top of the line debug probe technology. The device is available for around €16, the uploads are fast and it works reliably. It is not approved for commercial use.

![SWD_segger.jpg](https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/SWD_Programmer_Stick/documentation/SWD_segger.jpg)

### nanoDAP (Tested)
Debuggers based on the open source project [nanoDAP](https://github.com/wuxx/nanoDAP) are available on [aliexpress](https://aliexpress.com/wholesale?SearchText=cmsis-dap+daplink) for around €7. As CMSIS-DAP compliant devices, they work reliably and without problems.

![SWD_nanoDAP.jpg](https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/SWD_Programmer_Stick/documentation/SWD_nanoDAP.jpg)

### DAPLink Emulator (Tested)
These CMSIS-DAP compliant devices are available on [aliexpress](https://aliexpress.com/wholesale?SearchText=cmsis-dap+daplink) for around 10 €. They work fine too.

![SWD_DAPLink.jpg](https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/SWD_Programmer_Stick/documentation/SWD_DAPLink.jpg)

### SAMD Development Boards (Not Tested)
There are options to use the EDBG of some development boards for programming an external device, or to program them using a special firmware. Information on this can be found on the following pages:
- https://www.avdweb.nl/arduino/samd21/samd21-programmer
- https://learn.adafruit.com/programming-an-m0-using-an-arduino#
- https://github.com/adafruit/Adafruit_DAP

# References, Links and Notes
1. [Original Free-DAP Project](https://github.com/ataradov/free-dap)
2. [CMSIS-DAP Handbook](https://os.mbed.com/handbook/CMSIS-DAP)
3. [GNU Arm Embedded Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)
4. [OpenOCD](http://openocd.org/)
5. [SEGGER J-Link Commander](http://www.segger.com/download-jlink.html)
6. [nanoDAP](https://github.com/wuxx/nanoDAP)
7. [Adafruit DAP](https://github.com/adafruit/Adafruit_DAP)

![SWD_Programmer_Stick_pic2.jpg](https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/SWD_Programmer_Stick/documentation/SWD_Programmer_Stick_pic2.jpg)
![SWD_Programmer_Stick_pic4.jpg](https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/SWD_Programmer_Stick/documentation/SWD_Programmer_Stick_pic4.jpg)
