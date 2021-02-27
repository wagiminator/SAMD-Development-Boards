# Arduino Core for SAMD DevBoards
This Arduino Core is based on the [MattairTech SAMD Core](https://github.com/mattairtech/ArduinoCore-samd), which is a fork from the original [Arduino Core](https://github.com/arduino/ArduinoCore-samd) for SAMD microcontrollers. It is used to add Arduino support for the SAMD Development Boards as well as support for Generic CMSIS-DAP and SEGGER J-Link programmers.

## Supported Boards
- SAMD11C Development Board
- SAMD21E Development Board

## Supported Bootloaders
- SAM-BA (CDC) for all chips
- [UF2-SAMDX1](https://github.com/microsoft/uf2-samdx1) (CDC & MSC) for SAMD21E18A only

## Supported Programmers
- Generic CMSIS-DAP (Atmel mEDBG and EDBG, Atmel-ICE, LPC-Link2, IBDAP and Free-DAP)
- SEGGER J-Link

# Installation
- Open Arduino IDE
- Go to **File -> Preferences**
- Enter the following URL in **Additional Boards Manager URLs**:
    ```
    https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/packages/package_wagiminator_samd_index.json
    ```
- Separate the URLs using a comma ( **,** ) if you have more than one URL
- Go to **Tools -> Board -> Boards Manager...**
- Wait for the platform indexes to finish downloading
- Scroll down until you see the **Arduino SAMD Boards (32-bits ARM Cortex-M0+)** entry and click on it
- Click **Install**.
- Scroll until you see the **SAMD Development Boards** entry and click on it
- Click **Install**.
- After installation is complete close the **Boards Manager** window

# Burning Bootloader
- Open Arduino IDE
- Go to **Tools -> Board -> SAMD DevBoards** and select your board
- Go to **Tools -> Microcontroller** and select the MCU of the board (SAMD21E DevBoard only)
- Go to **Tools -> Bootloader** and select 4kB or 8kB Bootloader (depending on the board)
- Go to **Tools -> Programmer** and select your programmer
- Connect your programmer to the board und to a USB port of your PC
- Power the board
- Go to **Tools** and select **Burn bootloader**

If a sketch with CDC support is installed on the board, the bootloader is activated automatically when a sketch is uploaded via the Arduino IDE. Otherwise you have to enter the bootloader manually before uploading. This can be done either by pressing the RESET button twice in quick succession or by pressing and holding the RESET button while connecting the board to the USB port of your PC. The activated bootloader mode can be recognized by the fading of the built-in LED.

With the uf2 bootloader (SAMD21E18A only) the board also appears in the file manager as a USB mass storage device. A compiled sketch can therefore also be transferred to the board by drag and drop.

# Board Options
## Microcontroller Menu
This menu will appear with boards that have multiple microcontroller options. The microcontroller installed on the board is selected here.

## Clock Source Menu
There are up to four clock source choices, depending on board variant and microcontroller.

## Bootloader Menu
Selection of whether a bootloader is used to upload the sketch. If no bootloader has been selected, an external programmer is used.

## Serial Config Menu
This menu is used to select different combinations of serial peripherals. It adds additional UART, SPI and WIRE instances. This is also useful for the D11, which has a reduced pin count and number of SERCOMs. When USB CDC is enabled, Serial refers to SerialUSB, otherwise it refers to Serial1 (TX1/RX1).

## USB Config Menu
Choose an option that best matches your code and library usage. Each option results in a different USB PID. Choose an option with CDC if you want auto-reset to function, or the serial monitor over USB. If CDC is not enabled, Serial will refer to Serial1 instead of SerialUSB. These options can be used to optimize FLASH and SRAM usage by allowing CDC to be disabled (or USB completely disabled).

## Timer PWM Frequency
This menu allows selection of the PWM frequency used by all timers. When using a timer in 16-bit mode, calls to analogWrite() are made with 8-bit resolution by default. For 16-bit writes, call analogWriteResolution(16) first.

## Floating Point
By default, when using the Print or String classes to print or convert floating point numbers to character arrays, singles are automatically promoted to doubles. This consumes a lot of code space. Use the options in this menu to make use of single floating point versions of Print and String, which will reduce code space and increase performance.

## Build Options (config.h)
This menu will appear with all microcontrollers. It is currently used to enable or disable including config.h, which contains several defines that are used primarily to reduce code space. config.h should be edited first. Please see [config.h](https://github.com/mattairtech/ArduinoCore-samd/tree/master/config.h) for documentation on the defines.

# Further Information
Visit [Mattairtech's Github page](https://github.com/mattairtech/ArduinoCore-samd) for a more detailed description.
