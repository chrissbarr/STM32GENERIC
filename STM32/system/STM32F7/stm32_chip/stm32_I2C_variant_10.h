
const stm32_af_pin_list_type chip_af_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_6  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_8  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_10 , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOF, GPIO_PIN_1  , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOH, GPIO_PIN_4  , GPIO_AF4_I2C2  }, 
//I2C3
    { I2C3  , GPIOA, GPIO_PIN_8  , GPIO_AF4_I2C3  }, 
//I2C4
    { I2C4  , GPIOB, GPIO_PIN_6  , GPIO_AF11_I2C4 }, 
    { I2C4  , GPIOB, GPIO_PIN_8  , GPIO_AF1_I2C4  }, 
    { I2C4  , GPIOD, GPIO_PIN_12 , GPIO_AF4_I2C4  }, 
    { I2C4  , GPIOF, GPIO_PIN_14 , GPIO_AF4_I2C4  }, 
    { I2C4  , GPIOH, GPIO_PIN_11 , GPIO_AF4_I2C4  }, 
}; 

const stm32_af_pin_list_type chip_af_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_7  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_9  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_11 , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOF, GPIO_PIN_0  , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOH, GPIO_PIN_5  , GPIO_AF4_I2C2  }, 
//I2C3
    { I2C3  , GPIOC, GPIO_PIN_9  , GPIO_AF4_I2C3  }, 
    { I2C3  , GPIOH, GPIO_PIN_8  , GPIO_AF4_I2C3  }, 
//I2C4
    { I2C4  , GPIOB, GPIO_PIN_7  , GPIO_AF11_I2C4 }, 
    { I2C4  , GPIOB, GPIO_PIN_9  , GPIO_AF1_I2C4  }, 
    { I2C4  , GPIOD, GPIO_PIN_13 , GPIO_AF4_I2C4  }, 
    { I2C4  , GPIOF, GPIO_PIN_15 , GPIO_AF4_I2C4  }, 
    { I2C4  , GPIOH, GPIO_PIN_12 , GPIO_AF4_I2C4  }, 
}; 
