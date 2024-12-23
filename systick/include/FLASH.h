#ifndef __STM32F103C8T6_FLASH_H__
#define __STM32F103C8T6_FLASH_H__

#include <stdint.h>
#include "common.h"


typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t LATENCY   : 3; 
        RW uint32_t HLFCYA    : 1; 
        RW uint32_t PRFTBE    : 1; 
        RO uint32_t PRFTBS    : 1; 
        RW uint32_t RES       : 26;
    } FIELD;
} FLASH_ACR_t;


typedef union
{
    uint32_t REG;
    struct
    {
        W uint32_t FKEY      : 32; 
    } FIELD;
} FLASH_KEYR_t;


typedef union
{
    uint32_t REG;
    struct
    {
        W uint32_t OPTKEYR      : 32; 
    } FIELD;
} FLASH_OPTKEYR_t;


typedef union
{
    uint32_t REG;
    struct
    {
        RO uint32_t BSY       : 1;  
        RW uint32_t RES       : 1;
        RW uint32_t PGERR     : 1; 
        RW uint32_t RES1      : 1;
        RW uint32_t WRPRTERR  : 1;  
        RW uint32_t EOP       : 1;  
        RW uint32_t RES2      : 26; 
    } FIELD;
} FLASH_SR_t;


typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t PG        : 1;  
        RW uint32_t PER       : 1;  
        RW uint32_t MER       : 1; 
        RW uint32_t RES       : 1; 
        RW uint32_t OPTPG     : 1;  
        RW uint32_t OPTER     : 1;  
        RW uint32_t STRT      : 1;  
        RW uint32_t LOCK      : 1;  
        RW uint32_t RES1      : 1; 
        RW uint32_t OPTWRE    : 1;
        RW uint32_t ERRIE     : 1;
        RW uint32_t RES2      : 1;
        RW uint32_t EOPIE     : 1;
        RW uint32_t RES3      : 19;
    } FIELD;
} FLASH_CR_t;


typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t FAR       : 32; 
    } FIELD;
} FLASH_AR_t;


typedef union
{
    uint32_t REG;
    struct
    {
        RO uint32_t OPTERR    : 1;  
        RO uint32_t RDPRT     : 1;  
        RO uint32_t WDG_SW    : 1;  
        RO uint32_t nRST_STOP : 1;  
        RO uint32_t nRST_STDBY: 1;
        RO uint32_t BFB2      : 1;  
        RO uint32_t Not_used  : 4;
        RO uint32_t Data0     : 8;
        RO uint32_t Data1     : 8;
        RO uint32_t RES       : 6; 
    } FIELD;
} FLASH_OBR_t;


typedef union
{
    uint32_t REG;
    struct
    {
        RO uint32_t WRP       : 32; 
    } FIELD;
} FLASH_WRPR_t;

typedef union
{
    uint32_t REG;
    struct
    {
        W uint32_t FKEY      : 32; 
    } FIELD;
		
} FLASH_KEYR2_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RO uint32_t BSY       : 1;
        RW uint32_t RES       : 1;  
        RO uint32_t PGERR     : 1;  
        RW uint32_t RES1      : 1;
        RO uint32_t WRPRTERR  : 1;  
        RO uint32_t EOP       : 1;  
        RW uint32_t RES2       : 26; 
    } FIELD;
} FLASH_SR2_t;

typedef union
{
    uint32_t REG;
    struct
    {
        RW uint32_t PG         : 1;  
        RW uint32_t PER        : 1;  
        RW uint32_t MER        : 1;  
        RW uint32_t RES        : 1;   
        RW uint32_t STRT       : 1;  
        RW uint32_t LOCK       : 1;  
        RW uint32_t RES1       : 1;
        RW uint32_t ERRIE      : 1;  
        RW uint32_t RES2       : 1;
        RW uint32_t EOPIE      : 1; 
        RW uint32_t RES3       : 20; 
    } FIELD;
} FLASH_CR2_t;

typedef union
{
    uint32_t REG;
    struct
    {
        W uint32_t FAR  : 32;  
    } FIELD;
} FLASH_AR2_t;

typedef struct 
{
    IO FLASH_ACR_t   FLASH_ACR;    
    IO FLASH_KEYR_t  FLASH_KEYR; 
    IO FLASH_OPTKEYR_t FLASH_OPTKEYR;  
    IO FLASH_SR_t    FLASH_SR;     
    IO FLASH_CR_t    FLASH_CR;   
    IO FLASH_AR_t    FLASH_AR;
    DM uint8_t       RES0[4];    
    IO FLASH_OBR_t   FLASH_OBR;    
    IO FLASH_WRPR_t  FLASH_WRPR; 
    DM uint8_t       RES1[128];  
    IO FLASH_KEYR2_t FLASH_KEYR2;
    DM uint8_t       RES2[4];  
    IO FLASH_SR2_t   FLASH_SR2;
    IO FLASH_CR2_t   FLASH_CR2;
    IO FLASH_AR2_t   FLASH_AR2;
} FLASH_t;


#define FLASH_BASE (0x40022000)
#define FLASH      ((FLASH_t*) FLASH_BASE)

#endif 
