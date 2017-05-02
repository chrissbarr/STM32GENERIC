#include "stm32_def.h"

void init() {
  HAL_Init();
  
}

void initVariant() {

  #if defined(VECT_TAB_OFFSET)
  	SCB->VTOR = 0x08010000;//(0x08000000 || DVECT_TAB_OFFSET);
  #endif

  SystemClock_Config();
  
  #ifdef STM32F1
  __HAL_RCC_AFIO_CLK_ENABLE();
  #endif
  
}

void SysTick_Handler(void) {
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
}

void Error_Handler() {
    
}
