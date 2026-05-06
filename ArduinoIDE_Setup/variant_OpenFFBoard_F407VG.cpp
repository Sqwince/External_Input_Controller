/******************************************************************************
 *  Variant Pin mapping File for the OpenFFBoard designed by Ultrawipf
 *  https://github.com/Ultrawipf/OpenFFBoard/wiki/Pinouts-and-peripherals
 *  Version: 1.2.4
 *  Author: Sqwince
 *  Date: 2026-05-03
 ******************************************************************************/

#if defined(ARDUINO_OPENFFBOARD_F407VG)

#include "pins_arduino.h"

// Pin number
const PinName digitalPin[] = {
  PA_0,   // D0 / PIN_GPIO_6
  PA_1,   // D1 / PIN_GPIO_5
  PA_2,   // D2 / AIN_2
  PA_3,   // D3 / AIN_1
  PA_4,   // D4 / PIN_SPI1_CS1
  PA_5,   // D5 / PIN_SPI1_SCK
  PA_6,   // D6 / PIN_SPI1_MISO
  PA_7,   // D7 / PIN_SPI1_MOSI
  PA_8,   // D8
  PA_9,   // D9
  PA_10,  // D10
  PA_11,  // D11
  PA_12,  // D12
  PA_13,  // D13
  PA_14,  // D14
  PA_15,  // D15 / PIN_SPI3_CS1
  PB_0,   // D16 / PIN_SPI1_CS2
  PB_1,   // D17 / PIN_SPI1_CS3
  PB_2,   // D18
  PB_3,   // D19 / PIN_GPIO_4 / SWO
  PB_4,   // D20 / PIN_GPIO_2
  PB_5,   // D21 / PIN_GPIO_3
  PB_6,   // D22 / PIN_USART1_TX
  PB_7,   // D23 / PIN_USART1_RX
  PB_8,   // D24 / PIN_I2C_SCL
  PB_9,   // D25 / PIN_I2C_SDA
  PB_10,  // D26 / PIN_GPIO_7
  PB_11,  // D27 / PIN_GPIO_8
  PB_12,  // D28 / PIN_SPI2_CS1
  PB_13,  // D29 / PIN_SPI2_SCK
  PB_14,  // D30 / PIN_SPI2_MISO
  PB_15,  // D31 / PIN_SPI2_MOSI
  PC_0,   // D32 / AIN_6
  PC_1,   // D33 / AIN_5
  PC_2,   // D34 / AIN_4
  PC_3,   // D35 / AIN_3
  PC_4,   // D36 / PIN_V_EXT
  PC_5,   // D37 / PIN_V_INT
  PC_6,   // D38 / PIN_ENC_A
  PC_7,   // D39 / PIN_ENC_B
  PC_8,   // D40
  PC_9,   // D41
  PC_10,  // D42 / PIN_SPI3_SCK
  PC_11,  // D43 / PIN_SPI3_MISO
  PC_12,  // D44 / PIN_SPI3_MOSI
  PC_13,  // D45 / DIN_3
  PC_14,  // D46 / DIN_2
  PC_15,  // D47 / DIN_1
  PD_0,   // D48
  PD_1,   // D49
  PD_2,   // D50 / PIN_SPI3_CS2
  PD_3,   // D51 / PIN_SPI3_CS3
  PD_4,   // D52
  PD_5,   // D53 / PIN_ESTOP
  PD_6,   // D54 / PIN_GPIO_1
  PD_7,   // D55
  PD_8,   // D56 / PIN_SPI2_CS2
  PD_9,   // D57 / PIN_SPI2_CS3
  PD_10,  // D58
  PD_11,  // D59
  PD_12,  // D60
  PD_13,  // D61
  PD_14,  // D62
  PD_15,  // D63 / PIN_ENC_Z
  PE_0,   // D64
  PE_1,   // D65
  PE_2,   // D66 / DIN_8
  PE_3,   // D67 / DIN_7
  PE_4,   // D68 / DIN_6
  PE_5,   // D69 / DIN_5
  PE_6,   // D70 / DIN_4
  PE_7,   // D71 / PIN_DRV_ENABLE
  PE_8,   // D72 / PIN_DRV_FLAG
  PE_9,   // D73 / PIN_PWM1
  PE_10,  // D74 / PIN_DRV_BRAKE
  PE_11,  // D75 / PIN_PWM2
  PE_12,  // D76 / PIN_DRV_GP
  PE_13,  // D77 / PIN_PWM3
  PE_14,  // D78 / PIN_PWM4
  PE_15   // D79
  //PH_0, // OSC+
  //PH_1  // OSC-
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  0,  // A0,  PA0
  1,  // A1,  PA1
  2,  // A2,  PA2 / AIN_2
  3,  // A3,  PA3 / AIN_1
  4,  // A4,  PA4
  5,  // A5,  PA5
  6,  // A6,  PA6
  7,  // A7,  PA7
  16, // A8,  PB0
  17, // A9,  PB1
  32, // A10, PC0 / AIN_6
  33, // A11, PC1 / AIN_5
  34, // A12, PC2 / AIN_4
  35, // A13, PC3 / AIN_3
  36, // A14, PC4
  37  // A15, PC5
};

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  *         The system Clock is configured as follow :
  *            System Clock source            = PLL (HSE)
  *            SYSCLK(Hz)                     = 168000000
  *            HCLK(Hz)                       = 168000000
  *            AHB Prescaler                  = 1
  *            APB1 Prescaler                 = 4
  *            APB2 Prescaler                 = 2
  *            HSE Frequency(Hz)              = 8000000
  *            PLL_M                          = 8
  *            PLL_N                          = 336
  *            PLL_P                          = 2
  *            PLL_Q                          = 7
  *            VDD(V)                         = 3.3
  *            Main regulator output voltage  = Scale1 mode
  *            Flash Latency(WS)              = 5
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void)
{
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};
  RCC_OscInitTypeDef RCC_OscInitStruct = {};

  /* Enable Power Control clock */
  __HAL_RCC_PWR_CLK_ENABLE();

  /* The voltage scaling allows optimizing the power consumption when the device is
     clocked below the maximum system frequency, to update the voltage scaling value
     regarding system frequency refer to product datasheet.  */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /* Enable HSE Oscillator and activate PLL with HSE as source */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    Error_Handler();
  }

  /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
     clocks dividers */
  RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK |
                                 RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK) {
    Error_Handler();
  }

  /* STM32F405x/407x/415x/417x Revision Z devices: prefetch is supported  */
  if (HAL_GetREVID() == 0x1001) {
    /* Enable the Flash prefetch */
    __HAL_FLASH_PREFETCH_BUFFER_ENABLE();
  }

  /* Ensure CCM RAM clock is enabled */
  __HAL_RCC_CCMDATARAMEN_CLK_ENABLE();

}

#ifdef __cplusplus
}
#endif

#endif /* ARDUINO_OPENFFBOARD_F407VG */
