#ifndef VARIANT_H
#define VARIANT_H

#define LED_BUILTIN     PC9
#define LED_GREEN       LED_BUILTIN
#define LED_BLUE        PC8

//On-board user button
#define USER_BTN                    PA0  // 2

#define MOSI PA7
#define MISO PA13
#define SCK PA14
#define SS PA4

#define SDA PB7
#define SCL PB6

#define I2C1_100KHZ_TIMING 0x2000090E
#define I2C2_100KHZ_TIMING 0x2000090E
#define I2C3_100KHZ_TIMING 0x2000090E


#endif
