/******************************************************************************
 *  Variant Pin mapping File for the OpenFFBoard designed by Ultrawipf
 *  https://github.com/Ultrawipf/OpenFFBoard/wiki/Pinouts-and-peripherals
 *  Version: 1.2.4
 *  Author: Sqwince
 *  Date: 2026-04-26
 ******************************************************************************/

#pragma once

/*----------------------------------------------------------------------------
 * OpenFFboard Header / STM32 Pin Definitions
 *----------------------------------------------------------------------------*/

// On-board LEDs
#define LED_BLU         55  //Blue   (Sys)
#define LED_RED         65  //Red    (Error)
#define LED_YEL         64  //Yellow (Clip)
#ifndef LED_BUILTIN
#define LED_BUILTIN           LED_BLU
#endif

// On-board user button
#define BUTTON_A        0   //Wake Up
#ifndef USER_BTN
#define USER_BTN        BUTTON_A
#endif
 
/*Digital Inputs*/
#define DIN_1           47
#define DIN_2           46
#define DIN_3           45
#define DIN_4           70
#define DIN_5           69
#define DIN_6           68
#define DIN_7           67
#define DIN_8           66

/*Analog Inputs*/
#define AIN_1           3
#define AIN_2           2
#define AIN_3           35
#define AIN_4           34
#define AIN_5           33
#define AIN_6           32

/* SPI2 Header */
#define PIN_SPI2_SCK    29  //Clock
#define PIN_SPI2_MISO   30  //Data In from last shift register in chain
#define PIN_SPI2_MOSI   31  //Data out for driving RGB LED String (WS2812B)
#define PIN_SPI2_CS1    28  //Chip Select #1 (Main) / Data Latch Spi Buttons
#define PIN_SPI2_CS2    56  //Chip Select #2
#define PIN_SPI2_CS3    57  //Chip Select #3

/* ENC Header */
#define PIN_ENC_A 38
#define PIN_ENC_B 39
#define PIN_ENC_Z 63

/* EXT Header */
#define PIN_SPI3_SCK    42  //Clock
#define PIN_SPI3_MISO   43  //Data In from last shift register in chain
#define PIN_SPI3_MOSI   44  //Data out
#define PIN_SPI3_CS1    15  //Chip Select #1 (Main) / Data Latch Spi Buttons
#define PIN_SPI3_CS2    50  //Chip Select #2
#define PIN_SPI3_CS3    51  //Chip Select #3
#define PIN_I2C_SCL     24  //I2C clock
#define PIN_I2C_SDA     25  //I2C Data
#define PIN_UART1_TX    22  //Serial TX (OUT)
#define PIN_UART1_RX    23  //Serial RX (IN)
#define PIN_GPIO_1      54          
#define PIN_GPIO_2      20          
#define PIN_GPIO_3      21          
#define PIN_GPIO_4      19  //SWO
#define PIN_SWO         19  //SWO
#define PIN_ESTOP       53  //E-STOP

/* PWM Header (JP7) */
#define PIN_PWM1        73  // PWM Pins are on TIM1
#define PIN_PWM2        75
#define PIN_PWM3        77
#define PIN_PWM4        78

/* Driver Connector (JP8) */
#define PIN_SPI1_SCK    5   //Clock
#define PIN_SPI1_MISO   6   //Data In from last shift register in chain
#define PIN_SPI1_MOSI   7   //Data out
#define PIN_SPI1_CS1    4   //Chip Select #1 (Main) / Data Latch Spi Buttons
#define PIN_SPI1_CS2    16  //Chip Select #2
#define PIN_SPI1_CS3    17  //Chip Select #3
#define PIN_DRV_GP      76
#define PIN_DRV_ENABLE  71
#define PIN_V_EXT       36
#define PIN_V_INT       37
#define PIN_DRV_FLAG    72
#define PIN_DRV_BRAKE   74

/* GPIO Header (JP11) */
#define PIN_GPIO_5      1
#define PIN_GPIO_6      0   //WAKE UP
#define PIN_GPIO_7      26
#define PIN_GPIO_8      27

/*******************************************************************************
* END OF PIN HEADERS 
*******************************************************************************/

#define NUM_DIGITAL_PINS        80
#define NUM_ANALOG_INPUTS       16

// SPI Definitions (SPI2 Default header)
#ifndef PIN_SPI_SS
  #define PIN_SPI_SS          28   //PB12/SPI2 CS1 PB12
#endif
#ifndef PIN_SPI_SS1
  #define PIN_SPI_SS1         28   //PB12/SPI2 CS1 PB12
#endif
#ifndef PIN_SPI_SS2
  #define PIN_SPI_SS2         56   //PD8/SPI2 CS2
#endif
#ifndef PIN_SPI_SS3
  #define PIN_SPI_SS3         57  //PD9/SPI2 CS3
#endif
#ifndef PIN_SPI_MOSI
  #define PIN_SPI_MOSI        31 //PB15/SPI2 MOSI
#endif
#ifndef PIN_SPI_MISO
  #define PIN_SPI_MISO        30  //PB14/SPI2 MISO
#endif
#ifndef PIN_SPI_SCK
  #define PIN_SPI_SCK         29  //PB13/SPI2 CLOCK
#endif

// I2C Definitions
#ifndef PIN_WIRE_SDA
  #define PIN_WIRE_SDA        25  //PB9
#endif
#ifndef PIN_WIRE_SCL
  #define PIN_WIRE_SCL        24  //PB8
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
  #define TIMER_TONE            TIM6
#endif
#ifndef TIMER_SERVO
  #define TIMER_SERVO           TIM7
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  1 //USART 1
#endif

// Default pin used for 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         23 //PB7/USART1_RX
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         22 //PB6/USART1_TX
#endif

/* Extra HAL modules */
#if !defined(HAL_DAC_MODULE_DISABLED)
  #define HAL_DAC_MODULE_ENABLED
#endif
#if !defined(HAL_SD_MODULE_DISABLED)
  #define HAL_SD_MODULE_ENABLED
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #ifndef SERIAL_PORT_MONITOR
    #define SERIAL_PORT_MONITOR   Serial
  #endif
  #ifndef SERIAL_PORT_HARDWARE
    #define SERIAL_PORT_HARDWARE  Serial
  #endif
  #ifndef SERIAL_PORT_HARDWARE_OPEN
    #define SERIAL_PORT_HARDWARE_OPEN  Serial
  #endif
#endif
