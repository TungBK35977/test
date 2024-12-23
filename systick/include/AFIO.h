#ifndef __STM32F103C8T6_AFIO_H__
#define __STM32F103C8T6_AFIO_H__

#include <stdint.h>
#include "common.h"

typedef union 
{
    uint32_t REG;
    struct 
    {   
        RW uint32_t PIN   : 4; 
        RW uint32_t PORT  : 3; 
        RW uint32_t EVOE  : 1; 
        RW uint32_t RES   : 24;
    } FIELD;
} AFIO_EVCR_t;

typedef union 
{
    uint32_t REG;
    struct 
    {
        RW uint32_t SPI1_REMAP     : 1;
        RW uint32_t I2C1_REMAP     : 1;
        RW uint32_t USART1_REMAP   : 1;
        RW uint32_t USART2_REMAP   : 1;
        RW uint32_t USART3_REMAP   : 2;
        RW uint32_t TIM1_REMAP     : 2;
        RW uint32_t TIM2_REMAP     : 2;
        RW uint32_t TIM3_REMAP     : 2;
        RW uint32_t TIM4_REMAP     : 1;
        RW uint32_t CAN_REMAP      : 2;
        RW uint32_t PD01_REMAP     : 1;
        RW uint32_t TIM5CH4_IREMAP : 1;
        RW uint32_t ADC1_ETRGINJ_REMAP : 1;
        RW uint32_t ADC1_ETRGREG_REMAP : 1;
        RW uint32_t ADC2_ETRGINJ_REMAP : 1;
        RW uint32_t ADC2_ETRGREG_REMAP : 1;
        RW uint32_t RES            : 3;
        RW uint32_t SWJ_CFG        : 3; 
        RW uint32_t RES1            : 5; 
    } FIELD;
} AFIO_MAPR_t;

typedef union 
{
    uint32_t REG;
    struct 
    {   
        RW uint32_t EXTI0  : 4; 
        RW uint32_t EXTI1  : 4; 
        RW uint32_t EXTI2  : 4; 
        RW uint32_t EXTI3  : 4; 
        RW uint32_t RES    : 16;
    } FIELD;
} AFIO_EXTICR1_t;

typedef union 
{
    uint32_t REG;
    struct 
    {   
        RW uint32_t EXTI4  : 4; 
        RW uint32_t EXTI5  : 4; 
        RW uint32_t EXTI6  : 4; 
        RW uint32_t EXTI7  : 4; 
        RW uint32_t RES    : 16;
    } FIELD;
} AFIO_EXTICR2_t;

typedef union 
{
    uint32_t REG;
    struct 
    {   
        RW uint32_t EXTI8  : 4; 
        RW uint32_t EXTI9  : 4; 
        RW uint32_t EXTI10 : 4; 
        RW uint32_t EXTI11 : 4; 
        RW uint32_t RES    : 16;
    } FIELD;
} AFIO_EXTICR3_t;

typedef union 
{
    uint32_t REG;
    struct 
    {   
        RW uint32_t EXTI12 : 4; 
        RW uint32_t EXTI13 : 4; 
        RW uint32_t EXTI14 : 4; 
        RW uint32_t EXTI15 : 4; 
        RW uint32_t RES    : 16;
    } FIELD;
} AFIO_EXTICR4_t;




typedef union 
{
    uint32_t REG;
    struct 
    {   
        RW uint32_t RES            : 5; 
        RW uint32_t TIM9_REMAP    : 1;  
        RW uint32_t TIM10_REMAP   : 1;  
        RW uint32_t TIM11_REMAP   : 1;
        RW uint32_t TIM13_REMAP   : 1;
        RW uint32_t TIM14_REMAP   : 1;
        RW uint32_t FSMC_NADV     : 1;
        RW uint32_t RES1          : 21; 
    } FIELD;
} AFIO_MAPR2_t;

typedef struct
{
    IO AFIO_EVCR_t    EVCR;     
    IO AFIO_MAPR_t    MAPR;     
    IO AFIO_EXTICR1_t EXTICR1;  
    IO AFIO_EXTICR2_t EXTICR2;  
    IO AFIO_EXTICR3_t EXTICR3;  
    IO AFIO_EXTICR4_t EXTICR4;
    DM uint8_t RES[4];
    IO AFIO_MAPR2_t   MAPR2;    
} AFIO_t;

#define AFIO_BASE     (0x40010000)
#define AFIO        ((AFIO_t*) AFIO_BASE)

#endif 

