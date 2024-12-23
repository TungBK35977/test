#ifndef __STM32F103C8T6_RCC_H__
#define __STM32F103C8T6_RCC_H__

#include <stdint.h>
#include "common.h"

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t HSION  : 1;
        RO uint32_t HSIRDY : 1;
        RW uint32_t RES    : 1;
        RW uint32_t HSITRIM : 5;
        RO uint32_t HSICAL : 8;
        RW uint32_t HSEON : 1;
        RO uint32_t HSERDY : 1;
        RW uint32_t HSEBYP : 1;
        RW uint32_t CSSON : 1;
        RW uint32_t RES1 : 4;
        RW uint32_t PLLON : 1;
        RO uint32_t PLLRDY : 1;
		  	RW uint32_t PLL2ON : 1;
			  RO uint32_t PLL2RDY : 1;
			  RW uint32_t PLL3ON : 1;
			  RO uint32_t PLL3RDY : 1;
			  RW uint32_t RES2 : 2;
    }FIELD;
}RCC_CR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t SW  : 2;
        RO uint32_t SWS : 2;
        RW uint32_t HPRE : 4;
        RW uint32_t PPRE1 : 3;
        RW uint32_t PPRE2 : 3;
        RW uint32_t ADCPRE : 2;
        RW uint32_t PLLSRC : 1;
        RW uint32_t PLLXTPRE : 1;
        RW uint32_t PLLMUL : 4;
        RW uint32_t OTGFSPRE : 1;
        RW uint32_t RES : 1;
        RW uint32_t MCO : 4;
        RW uint32_t RES1 : 4;
    }FIELD;
}RCC_CFGR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RO uint32_t LSIRDYF : 1;
        RO uint32_t LSERDYF : 1;
        RO uint32_t HSIRDYF : 1;
        RO uint32_t HSERDYF : 1;
        RO uint32_t PLLRDYF : 1;
			  RO uint32_t PLL2RDYF : 1;
			  RO uint32_t PLL3RDYF : 1;
        RO uint32_t CSSF : 1;
        RW uint32_t LSIRDYIE : 1;
        RW uint32_t LSERDYIE : 1;
        RW uint32_t HSIRDYIE : 1;
        RW uint32_t HSERDYIE : 1;
        RW uint32_t PLLRDYIE : 1;
			  RW uint32_t PLL2RDYIE : 1;
			  RW uint32_t PLL3RDYIE : 1;
			  RW uint32_t RES : 1;
        W  uint32_t LSIRDYC : 1;
        W  uint32_t LSERDYC : 1;
        W  uint32_t HSIRDYC : 1;
        W  uint32_t HSERDYC : 1;
        W  uint32_t PLLRDYC : 1;
        W  uint32_t PLL2RDYC : 1;
        W  uint32_t PLL3RDYC : 1;
        W  uint32_t CSSC : 1;
        RW uint32_t RES3 : 8;
    }FIELD;
}RCC_CIR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t AFIORST   : 1;
        RW uint32_t RES       : 1;
        RW uint32_t IOPARST   : 1;
        RW uint32_t IOPBRST   : 1;
        RW uint32_t IOPCRST   : 1;
        RW uint32_t IOPDRST   : 1;
        RW uint32_t IOPERST   : 1;
        RW uint32_t RES1       : 2;
        RW uint32_t ADC1RST   : 1;
        RW uint32_t ADC2RST   : 1;
        RW uint32_t TIM1RST   : 1;
        RW uint32_t SPI1RST   : 1;
			  RW uint32_t RES2      : 1;
        RW uint32_t USART1RST : 1;
        RW uint32_t RES3      : 17;
     
    } FIELD;
} RCC_APB2RSTR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t TIM2RST   : 1;
        RW uint32_t TIM3RST   : 1;
        RW uint32_t TIM4RST   : 1;
        RW uint32_t TIM5RST   : 1;
        RW uint32_t TIM6RST   : 1;
        RW uint32_t TIM7RST   : 1;
        RW uint32_t RES       : 5;
        RW uint32_t WWDGRST   : 1;
        RW uint32_t RES1      : 2;
        RW uint32_t SPI2RST   : 1;
        RW uint32_t SPI3RST   : 1;
        RW uint32_t RES2      : 1;
        RW uint32_t USART2RST : 1;
        RW uint32_t USART3RST : 1;
        RW uint32_t UART4RST  : 1;
        RW uint32_t UART5RST  : 1;
        RW uint32_t I2C1RST   : 1;
        RW uint32_t I2C2RST   : 1;
        RW uint32_t RES3      : 2;
        RW uint32_t CAN1RST    : 1;
        RW uint32_t CAN2RST    : 1;
        RW uint32_t BKPRST    : 1;
        RW uint32_t PWRRST    : 1;
        RW uint32_t DACRST    : 1;
        RW uint32_t RES4      : 2;
    } FIELD;
} RCC_APB1RSTR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t DMA1EN  : 1;
        RW uint32_t DMA2EN  : 1;
        RW uint32_t SRAMEN  : 1;
        RW uint32_t RES     : 1;
        RW uint32_t FLITFEN : 1;
        RW uint32_t RES1    : 1;
        RW uint32_t CRCEN   : 1;
        RW uint32_t RES2    : 5;
        RW uint32_t OTGFSEN  : 1;
        RW uint32_t RES3    : 1;
        RW uint32_t ETHMACEN  : 1;
        RW uint32_t ETHMACTXEN    : 1;
			  RW uint32_t ETHMACRXEN  : 1;
			  RW uint32_t RES4 : 15;
    } FIELD;
} RCC_AHBENR_t;

typedef union RCC_APB2ENR_Type
{
    uint32_t REG;
    struct RCC_APB2ENR_FIELD_Type
    {
        RW uint32_t AFIOEN   : 1;
        RW uint32_t RES      : 1;
        RW uint32_t IOPAEN   : 1;
        RW uint32_t IOPBEN   : 1;
        RW uint32_t IOPCEN   : 1;
        RW uint32_t IOPDEN   : 1;
        RW uint32_t IOPEEN   : 1;
        RW uint32_t RES1     : 2;
        RW uint32_t ADC1EN   : 1;
        RW uint32_t ADC2EN   : 1;
        RW uint32_t TIM1EN   : 1;
        RW uint32_t SPI1EN   : 1;
			  RW uint32_t RES2     : 1;
        RW uint32_t USART1EN : 1;
        RW uint32_t RES3     : 17;
    } FIELD;
} RCC_APB2ENR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t TIM2EN   : 1;
        RW uint32_t TIM3EN   : 1;
        RW uint32_t TIM4EN   : 1;
        RW uint32_t TIM5EN   : 1;
        RW uint32_t TIM6EN   : 1;
        RW uint32_t TIM7EN   : 1;
        RW uint32_t RES      : 5;
        RW uint32_t WWDGEN   : 1;
        RW uint32_t RES1     : 2;
        RW uint32_t SPI2EN   : 1;
        RW uint32_t SPI3EN   : 1;
        RW uint32_t RES2     : 1;
        RW uint32_t USART2EN : 1;
        RW uint32_t USART3EN : 1;
        RW uint32_t UART4EN  : 1;
        RW uint32_t UART5EN  : 1;
        RW uint32_t I2C1EN   : 1;
        RW uint32_t I2C2EN   : 1;
        RW uint32_t RES3     : 2;
        RW uint32_t CAN1EN    : 1;
        RW uint32_t CAN2EN    : 1;
        RW uint32_t BKPEN    : 1;
        RW uint32_t PWREN    : 1;
        RW uint32_t DACEN    : 1;
        RW uint32_t RES4     : 2;
    } FIELD;
} RCC_APB1ENR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t LSEON   : 1;
        RO uint32_t LSERDY  : 1;
        RW uint32_t LSEBYP  : 1;
        RW uint32_t RES     : 5;
        RW uint32_t RTCSEL  : 2;
        RW uint32_t RES1    : 5;
        RW uint32_t RTCEN   : 1;
        RW uint32_t BDRST   : 1;
        RW uint32_t RES2    : 15;
    } FIELD;
} RCC_BDCR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t LSION     : 1;  
        RO uint32_t LSIRDY    : 1;  
        RW uint32_t RES       : 22; 
        RW uint32_t RMVF      : 1;  
        RW uint32_t RES1      : 1;
        RW uint32_t PINRSTF   : 1;  
        RW uint32_t PORRSTF   : 1;  
        RW uint32_t SFTRSTF   : 1;  
        RW uint32_t IWDGRSTF  : 1;  
        RW uint32_t WWDGRSTF  : 1;  
        RW uint32_t LPWRRSTF  : 1;  
    } FIELD;
} RCC_CSR_t;
typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t RES   : 12;  
        RW uint32_t OTGFSRST : 1;  
			  RW uint32_t RES1     : 1;  
        RW uint32_t ETHMACRST  : 1;  
        RW uint32_t RES2   : 17;  
    } FIELD;
} RCC_AHBRSTR_t;
typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t PREDIV1   : 4; 
			  RW uint32_t PREDIV2   : 4;
			  RW uint32_t PLL2MUL   : 4;
			  RW uint32_t PLL3MUL   : 4;
        RW uint32_t PREDIV1SRC : 1;  
        RW uint32_t I2S2SR : 1;
        RW uint32_t I2S3SR : 1;  			
        RW uint32_t RES : 13; 
    } FIELD;
} RCC_CFGR2_t;


typedef struct 
{
    IO RCC_CR_t RCC_CR;
    IO RCC_CFGR_t RCC_CFGR;
    IO RCC_CIR_t RCC_CIR;
    IO RCC_APB2RSTR_t RCC_APB2RSTR;
    IO RCC_APB1RSTR_t RCC_APB1RSTR;
    IO RCC_AHBENR_t RCC_AHBENR;
    IO RCC_APB2ENR_t RCC_APB2ENR;
    IO RCC_APB1ENR_t RCC_APB1ENR;
    IO RCC_BDCR_t RCC_BDCR;
    IO RCC_CSR_t RCC_CSR;
	  IO RCC_AHBRSTR_t RCC_AHBRSTR;
	  IO RCC_CFGR2_t RCC_CFGR2;
}RCC_t;



#define RCC_BASE   (0x40021000)
#define RCC         ((RCC_t*) RCC_BASE)

#endif
