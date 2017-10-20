#ifndef VARIANT_H
#define VARIANT_H

#define LED_BUILTIN PB0

#define MOSI PA7
#define MISO PA13
#define SCK PA14
#define SS PA4

#define SDA PA10
#define SCL PA9

#define I2C1_100KHZ_TIMING 0x2000090E

#define VARIANT_PIN_LIST \
   PIN(A,0 ), /* D0 */ \
   PIN(A,1 ), /* D1 */ \
   PIN(A,2), /* D2 */ \
   PIN(A,3 ), /* D3 */ \
   PIN(A,4 ), /* D4 */ \
   PIN(A,5 ), /* D5 */ \
   PIN(A,6), /* D6 */ \
   PIN(A,7 ), /* D7 */ \
   PIN(A,8 ), /* D8 */ \
   PIN(A,9 ), /* D9 */ \
   PIN(A,10 ), /* D10 */ \
   PIN(A,11 ), /* D11 */ \
   PIN(A,12 ), /* D12 */ \
   PIN(A,13 ), /* D13 */ \
   PIN(A,14 ), /* D14 */ \
   PIN(A,15 ), /* D15 */ \
   PIN(B,0 ), /* D16 / A0 */ \
   PIN(F,0 ), /* D17 / A1 */ \
   PIN(F,1 ), /* D18 / A2 */ 

#endif
