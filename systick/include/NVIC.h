#ifndef __STM32F103C8T6_NVIC_H__
#define __STM32F103C8T6_NVIC_H__

#include <stdint.h>
#include "common.h"


typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t SETENA : 32;  // Interrupt Set-Enable Registers
    } FIELD;
} NVIC_ISER_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t CLRENA : 32;  // Interrupt Clear-Enable Registers
    } FIELD;
} NVIC_ICER_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t SETPEND : 32;  // Interrupt Set-Pending Registers
    } FIELD;
} NVIC_ISPR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t CLRPEND : 32;  // Interrupt Clear-Pending Registers
    } FIELD;
} NVIC_ICPR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RO uint32_t ACTIVE : 32;   // Interrupt Active Bit Registers
    } FIELD;
} NVIC_IABR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t PRI : 32;  // Interrupt Priority Registers (Each field is 4 bits for priority levels)
    } FIELD;
} NVIC_IPR_t;


typedef union {
    uint32_t REG;  
    struct {
        RW uint32_t INTID  : 9;   
        RW uint32_t RES    : 23;  
    } FIELD;
} NVIC_STIR_t;


typedef struct
{
    IO NVIC_ISER_t NVIC_ISER[3];  
    DM uint8_t RES0[116]; 
    IO NVIC_ICER_t NVIC_ICER[3];  
    DM uint8_t RES1[116]; 
    IO NVIC_ISPR_t NVIC_ISPR[3];
    DM uint8_t RES2[116];
    IO NVIC_ICPR_t NVIC_ICPR[3];
    DM uint8_t RES3[116];
    IO NVIC_IABR_t NVIC_IABR[3];  
    DM uint8_t RES4[244];
    IO NVIC_IPR_t NVIC_IPR[20];
    DM uint8_t RES5[2780];
    IO NVIC_STIR_t NVIC_STIR;
} NVIC_t;

#define NVIC_BASE (0xE000E100)
#define NVIC ((NVIC_t*) NVIC_BASE)

#endif


