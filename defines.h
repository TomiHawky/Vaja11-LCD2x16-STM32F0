/* 4 bit mode */
/* Control pins, can be overwritten */
// SAMO pini PB11, PB12, PB13, PA11, PC7 in PC6 so 5V tolerant!!! (za ST32F0Discovery)
/* RS - Register select pin */
#ifndef HD44780_RS_PIN
#define HD44780_RS_PORT				GPIOD
#define HD44780_RS_PIN				GPIO_PIN_11
#endif
/* E - Enable pin */
#ifndef HD44780_E_PIN
#define HD44780_E_PORT				GPIOD
#define HD44780_E_PIN				GPIO_PIN_13
#endif
/* Data pins */
/* D4 - Data 4 pin */
#ifndef HD44780_D4_PIN
#define HD44780_D4_PORT				GPIOD
#define HD44780_D4_PIN				GPIO_PIN_14
#endif
/* D5 - Data 5 pin */
#ifndef HD44780_D5_PIN
#define HD44780_D5_PORT				GPIOD
#define HD44780_D5_PIN				GPIO_PIN_12
#endif
/* D6 - Data 6 pin */
#ifndef HD44780_D6_PIN
#define HD44780_D6_PORT				GPIOD
#define HD44780_D6_PIN				GPIO_PIN_10
#endif
/* D7 - Data 7 pin */
#ifndef HD44780_D7_PIN
#define HD44780_D7_PORT				GPIOD
#define HD44780_D7_PIN				GPIO_PIN_8
#endif
