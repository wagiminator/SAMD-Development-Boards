# SAMD11C Development Board
Development board for the ATSAMD11C14A 32-bit ARM Cortex-M0+ microcontroller with native USB, 3.3V voltage regulator and support for Arduino IDE.

# Features of the SAMD11C
The SAMD11C14A is a low-power microcontroller using the 32-bit ARM Cortex-M0+ processor with 16KB Flash and 4KB of SRAM. The SAM D11C14A operates at a maximum frequency of 48MHz and reaches 2.46 Coremark/MHz. It includes intelligent and flexible peripherals, Event System for inter-peripheral signaling, and support for capacitive touch button, slider and wheel user interfaces. The SAM D11C14A is compatible to the other product series in the SAM D family, enabling easy migration to larger device with added features.

- ARM Cortex-M0+ CPU running at up to 48MHz
- 16KB of flash memory and 4KB of SRAM
- Single-cycle hardware multiplier
- Idle and standby sleep modes, SleepWalking peripherals
- External Interrupt Controller (EIC) with 8 external interrupts and one Non-maskable Interrupt (NMI)
- 6-channel Direct Memory Access Controller (DMAC)
- 6-channel Event System
- Two 16-bit configurable Timer/Counters (TC)
- One 24-bit Timer/Counters for Control (TCC), with extended functions
- 32-bit Real Time Counter (RTC) with clock/calendar function
- Watchdog Timer (WDT)
- One full-speed (12Mbps) Universal Serial Bus (USB) 2.0 interface with embedded device function
- Two Serial Communication Interfaces (SERCOM), each configurable to operate as either:
  - USART with full-duplex and single-wire half-duplex configuration
  - I2C Bus up to 3.4MHz
  - SMBUS/PMBUS
  - SPI
  - LIN slave
- 12-bit, 350ksps Analog-to-Digital Converter (ADC) with up to 5 channels
  - Differential and single-ended input
  - 1/2x to 16x programmable gain stage
  - Automatic offset and gain error compensation
  - Oversampling and decimation in hardware to support 13-, 14-, 15- or 16-bit resolution
- 10-bit, 350ksps Digital-to-Analog Converter (DAC)
- Two Analog Comparators (AC) with window compare function
- Peripheral Touch Controller (PTC): 72-channel capacitive touch and proximity sensing
- Two-pin Serial Wire Debug (SWD) programming, test and debugging interface
- 12 GPIO pins
- Operating Voltage: 1.62V – 3.63V
- I/O Pin Current: max 7mA

# Pinout
![SAMD11C_DevBoard_pinout.png](https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/SAMD11C_DevBoard/documentation/SAMD11C_DevBoard_pinout.png)

# Preparing Arduino IDE and Installing Bootloader
- [Install SAMD Core](https://github.com/wagiminator/SAMD-Development-Boards/tree/main/ArduinoCore-samd)
- Open the Arduino IDE
- Go to **Tools -> Board -> SAMD DevBoards** and select **SAMD11C DevBoard**
- Go to **Tools -> Bootloader** and select 4kB Bootloader
- Go to **Tools -> Programmer** and select your programmer
- Connect your programmer to the corresponding pins of the board und to a USB port of your PC
- Power the board
- Go to **Tools** and select **Burn bootloader**
- Disconnect the programmer

If a sketch with CDC support is installed on the board, the bootloader is activated automatically when a sketch is uploaded via the Arduino IDE. Otherwise you have to enter the bootloader manually before uploading. This can be done either by pressing the RESET button twice in quick succession or by pressing and holding the RESET button while connecting the board to the USB port of your PC. The activated bootloader mode can be recognized by the fading of the built-in LED.

If you want to install a bootloader without the Arduino IDE, refer to the readme.txt inside the bootloader folder.

# References, Links and Notes
1. [SAM D11 Family Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-42363-SAM-D11_Datasheet.pdf)
2. [Arduino SAMD Core](https://github.com/arduino/ArduinoCore-samd)
3. [MattairTech SAMD Core](https://github.com/mattairtech/ArduinoCore-samd)

![SAMD11C_DevBoard_pic1.jpg](https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/SAMD11C_DevBoard/documentation/SAMD11C_DevBoard_pic1.jpg)
![SAMD11C_DevBoard_pic2.jpg](https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/SAMD11C_DevBoard/documentation/SAMD11C_DevBoard_pic2.jpg)
![SAMD11C_DevBoard_pic3.jpg](https://raw.githubusercontent.com/wagiminator/SAMD-Development-Boards/main/SAMD11C_DevBoard/documentation/SAMD11C_DevBoard_pic3.jpg)

# License
![license.png](https://i.creativecommons.org/l/by-sa/3.0/88x31.png)

This work is licensed under Creative Commons Attribution-ShareAlike 3.0 Unported License. 
(http://creativecommons.org/licenses/by-sa/3.0/)
