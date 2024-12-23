#ifndef __STM32F103C8T6_GPIO_H__
#define __STM32F103C8T6_GPIO_H__

#include <stdint.h>
#include "common.h"

typedef union 
{
    uint32_t REG;
    struct 
    {   
        RW uint32_t MODE0  : 2;
        RW uint32_t CNF0   : 2;
        RW uint32_t MODE1  : 2;
        RW uint32_t CNF1   : 2;
        RW uint32_t MODE2  : 2;
        RW uint32_t CNF2   : 2;
        RW uint32_t MODE3  : 2;
        RW uint32_t CNF3   : 2;
        RW uint32_t MODE4  : 2;
        RW uint32_t CNF4   : 2;
        RW uint32_t MODE5  : 2;
        RW uint32_t CNF5   : 2;
        RW uint32_t MODE6  : 2;
        RW uint32_t CNF6   : 2;
        RW uint32_t MODE7  : 2;
		    RW uint32_t CNF7   : 2;
    } FIELD;
}GPIO_CRL_t;

typedef union 
{
    uint32_t REG; 
    struct 
    {   
        RW uint32_t MODE8  : 2;
        RW uint32_t CNF8   : 2;
        RW uint32_t MODE9  : 2;
        RW uint32_t CNF9   : 2;
        RW uint32_t MODE10 : 2;
        RW uint32_t CNF10  : 2;
        RW uint32_t MODE11 : 2;
        RW uint32_t CNF11  : 2;
        RW uint32_t MODE12 : 2;
        RW uint32_t CNF12  : 2;
        RW uint32_t MODE13 : 2;
        RW uint32_t CNF13  : 2;
        RW uint32_t MODE14 : 2;
        RW uint32_t CNF14  : 2;
        RW uint32_t MODE15 : 2;
        RW uint32_t CNF15  : 2;
     
    } FIELD;
}GPIO_CRH_t;

 
 typedef union 
 {
    uint32_t REG;
    struct 
    {
        RO uint32_t IDR0  : 1;
        RO uint32_t IDR1  : 1;
        RO uint32_t IDR2  : 1;
        RO uint32_t IDR3  : 1;
        RO uint32_t IDR4  : 1;
        RO uint32_t IDR5  : 1;
        RO uint32_t IDR6  : 1;
        RO uint32_t IDR7  : 1;
        RO uint32_t IDR8  : 1;
        RO uint32_t IDR9  : 1;
        RO uint32_t IDR10 : 1;
        RO uint32_t IDR11 : 1;
        RO uint32_t IDR12 : 1;
        RO uint32_t IDR13 : 1;
        RO uint32_t IDR14 : 1;
        RO uint32_t IDR15 : 1;
        RO uint32_t RES   : 16;
    } FIELD;
    
 }GPIO_IDR_t;

 
 typedef union 
 {
    uint32_t REG;
    struct 
    {
        RW uint32_t ODR0  : 1;
        RW uint32_t ODR1  : 1;
        RW uint32_t ODR2  : 1;
        RW uint32_t ODR3  : 1;
        RW uint32_t ODR4  : 1;
        RW uint32_t ODR5  : 1;
        RW uint32_t ODR6  : 1;
        RW uint32_t ODR7  : 1;
        RW uint32_t ODR8  : 1;
        RW uint32_t ODR9  : 1;
        RW uint32_t ODR10 : 1;
        RW uint32_t ODR11 : 1;
        RW uint32_t ODR12 : 1;
        RW uint32_t ODR13 : 1;
        RW uint32_t ODR14 : 1;
        RW uint32_t ODR15 : 1;
        RW uint32_t RES   : 16;
    } FIELD;
    
 }GPIO_ODR_t;
 
 
typedef union 
{
    uint32_t REG;
    struct 
    {
        W uint32_t BS0  : 1;
        W uint32_t BS1  : 1;
        W uint32_t BS2  : 1;
        W uint32_t BS3  : 1;
        W uint32_t BS4  : 1;
        W uint32_t BS5  : 1;
        W uint32_t BS6  : 1;
        W uint32_t BS7  : 1;
        W uint32_t BS8  : 1;
        W uint32_t BS9  : 1;
        W uint32_t BS10 : 1;
        W uint32_t BS11 : 1;
        W uint32_t BS12 : 1;
        W uint32_t BS13 : 1;
        W uint32_t BS14 : 1;
        W uint32_t BS15 : 1;
        W uint32_t BR0  : 1;
        W uint32_t BR1  : 1;
        W uint32_t BR2  : 1;
        W uint32_t BR3  : 1;
        W uint32_t BR4  : 1;
        W uint32_t BR5  : 1;
        W uint32_t BR6  : 1;
        W uint32_t BR7  : 1;
        W uint32_t BR8  : 1;
        W uint32_t BR9  : 1;
        W uint32_t BR10 : 1;
        W uint32_t BR11 : 1;
        W uint32_t BR12 : 1;
        W uint32_t BR13 : 1;
        W uint32_t BR14 : 1;
        W uint32_t BR15 : 1;
       
    } FIELD;
} GPIO_BSRR_t;

typedef union 
 {
    uint32_t REG;
    struct 
    {
        W uint32_t BR0  : 1;
        W uint32_t BR1  : 1;
        W uint32_t BR2  : 1;
        W uint32_t BR3  : 1;
        W uint32_t BR4  : 1;
        W uint32_t BR5  : 1;
        W uint32_t BR6  : 1;
        W uint32_t BR7  : 1;
        W uint32_t BR8  : 1;
        W uint32_t BR9  : 1;
        W uint32_t BR10 : 1;
        W uint32_t BR11 : 1;
        W uint32_t BR12 : 1;
        W uint32_t BR13 : 1;
        W uint32_t BR14 : 1;
        W uint32_t BR15 : 1;
        W uint32_t RES  : 16;
    } FIELD;
    
 }GPIO_BRR_t;


 typedef union 
 {
    uint32_t REG;
    struct 
    {
        RW uint32_t LCK0  : 1;
        RW uint32_t LCK1  : 1;
        RW uint32_t LCK2  : 1;
        RW uint32_t LCK3  : 1;
        RW uint32_t LCK4  : 1;
        RW uint32_t LCK5  : 1;
        RW uint32_t LCK6  : 1;
        RW uint32_t LCK7  : 1;
        RW uint32_t LCK8  : 1;
        RW uint32_t LCK9  : 1;
        RW uint32_t LCK10 : 1;
        RW uint32_t LCK11 : 1;
        RW uint32_t LCK12 : 1;
        RW uint32_t LCK13 : 1;
        RW uint32_t LCK14 : 1;
        RW uint32_t LCK15 : 1;
        RW uint32_t LCKK  : 1;
        RW uint32_t RES   : 15;
    } FIELD;
    
 }GPIO_LCKR_t;


typedef struct {

	IO   GPIO_CRL_t    CRL;
	IO   GPIO_CRH_t    CRH;
	IO   GPIO_IDR_t    IDR;
	IO   GPIO_ODR_t    ODR;
	IO   GPIO_BSRR_t   BSRR;
	IO   GPIO_BRR_t    BRR;
	IO   GPIO_LCKR_t   LCKR;
}GPIO_t;


#define GPIO_A_BASE      0x40010800      
#define GPIO_B_BASE      0x40010C00     
#define GPIO_C_BASE      0x40011000      

#define GPIO_A              ((GPIO_t *) GPIO_A_BASE)
#define GPIO_B              ((GPIO_t *) GPIO_B_BASE)
#define GPIO_C              ((GPIO_t *) GPIO_C_BASE)

#endif 
