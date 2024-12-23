#ifndef __STM32F103C8T6_SYSTICK_H__
#define __STM32F103C8T6_SYSTICK_H__

#include <stdint.h>
#include "common.h"

// SysTick Control and Status Register (STK_CTRL)
typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t ENABLE    : 1;  // SysTick enable
        RW uint32_t TICKINT   : 1;  // SysTick exception request enable
        RW uint32_t CLKSOURCE : 1;  // Clock source (0: external, 1: processor clock)
        RW uint32_t RES       : 13;    
        RW uint32_t COUNTFLAG : 1;  // Count flag (returns 1 if timer counted to 0 since last read)
        RW uint32_t RES1      : 15; 
    } FIELD;
} SYSTICK_CTRL_t;

// SysTick Reload Value Register (STK_LOAD)
typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t RELOAD : 24;    // Reload value (determines period of the timer)
        RW uint32_t RES    : 8;     // Reserved bits
    } FIELD;
} SYSTICK_LOAD_t;

// SysTick Current Value Register (STK_VAL)
typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t CURRENT : 24;    // Current counter value
        RW uint32_t RES     : 8;     // Reserved bits
    } FIELD;
} SYSTICK_VAL_t;

// SysTick Calibration Value Register (STK_CALIB)
typedef union
{
    uint32_t REG;
    struct
    {
        RO uint32_t TENMS : 24;    // Calibration value for 10ms interval
        RO uint32_t RES   : 6;     // Reserved bits
        RO uint32_t SKEW  : 1;     // Indicates whether the calibration value is exact
        RO uint32_t NOREF : 1;     // Indicates if reference clock is not available
    } FIELD;
} SYSTICK_CALIB_t;

// SysTick Registers Structure
typedef struct
{
    IO SYSTICK_CTRL_t  SYSTICK_CTRL;   // SysTick Control and Status Register
    IO SYSTICK_LOAD_t  SYSTICK_LOAD;   // SysTick Reload Value Register
    IO SYSTICK_VAL_t   SYSTICK_VAL;    // SysTick Current Value Register
    RO SYSTICK_CALIB_t SYSTICK_CALIB;  // SysTick Calibration Value Register
} SYSTICK_t;

// SysTick Base Address
#define SYSTICK_BASE  (0xE000E010)
#define SYSTICK       ((SYSTICK_t*) SYSTICK_BASE)

#endif
