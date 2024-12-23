#include "stdint.h"
#include "common.h"
#include "GPIO.h"
#include "SYSTICK.h"
#include "RCC.h"
#include "FLASH.h"

void Delay_1_Ms(void);
void Delay_Ms(uint32_t u32Delay);
void clock (void);

void Delay_1_Ms(void)
{
SYSTICK->SYSTICK_LOAD.REG = 72000-1;
SYSTICK->SYSTICK_VAL.REG = 0;
SYSTICK->SYSTICK_CTRL.FIELD.CLKSOURCE = 1;
SYSTICK->SYSTICK_CTRL.FIELD.ENABLE = 1;
while(!SYSTICK->SYSTICK_CTRL.FIELD.COUNTFLAG)
{}

}
void clock (void)
{
//RCC->RCC_CR.FIELD.HSEBYP = 1;
//RCC->RCC_CR.FIELD.HSION = 1;
//while(!RCC->RCC_CR.FIELD.HSIRDY);
//FLASH->FLASH_ACR.FIELD.LATENCY = 1;
//RCC->RCC_CFGR.FIELD.HPRE = 0; //AHB prescaler = 0xxx: SYSCLK not divided
//RCC->RCC_CFGR.FIELD.PPRE2 = 0;  // APB high-speed prescaler (APB2) = 0xx: HCLK not divided
//RCC->RCC_CFGR.FIELD.PPRE1 = 0;  // APB low-speed prescaler (APB1) = 100: HCLK divided by 2
//RCC->RCC_CFGR.FIELD.PPRE1 = 4;
//RCC->RCC_CFGR.FIELD.PLLSRC = 0;
///*PLLSRC: PLL entry clock source
//Set and cleared by software to select PLL clock source. This bit can be written only when 
//PLL is disabled.
// 0: HSI oscillator clock / 2 selected as PLL input clock
// 1: HSE oscillator clock selected as PLL input clock*/
////RCC->RCC_CFGR.FIELD.PLLMUL = 0;
//RCC->RCC_CFGR.FIELD.PLLMUL = 7;
///*PLLMUL: PLL multiplication factor
// These bits are written by software to define the PLL multiplication factor. These bits can be 
//written only when PLL is disabled. 
//Caution: The PLL output frequency must not exceed 72MHz.
// 0000: PLL input clock x 2
// 0001: PLL input clock x 3
// 0010: PLL input clock x 4
// 0011: PLL input clock x 5
// 0100: PLL input clock x 6
// 0101: PLL input clock x 7
// 0110: PLL input clock x 8
// 0111: PLL input clock x 9
// 1000: PLL input clock x 10
// 1001: PLL input clock x 11
// 1010: PLL input clock x 12
// 1011: PLL input clock x 13
// 1100: PLL input clock x 14
// 1101: PLL input clock x 15
// 1110: PLL input clock x 16
// 1111: PLL input clock x 16 */
//RCC->RCC_CR.FIELD.PLLON = 1;
//while(!RCC->RCC_CR.FIELD.PLLRDY);
//RCC->RCC_CFGR.FIELD.SW = 0;
//RCC->RCC_CFGR.FIELD.SW = 2;
//while(!(RCC->RCC_CFGR.FIELD.SWS == 2));

//RCC->RCC_CR.FIELD.HSEBYP = 0;
//RCC->RCC_CR.FIELD.HSEON = 1;
//while(!RCC->RCC_CR.FIELD.HSERDY);
//RCC->RCC_CFGR.FIELD.PLLMUL = 0;
//RCC->RCC_CFGR.FIELD.PLLMUL = 6;
//RCC->RCC_CFGR.FIELD.PPRE1 = 4;
//RCC->RCC_CFGR.FIELD.PLLSRC = 1;
//RCC->RCC_CR.FIELD.PLLON = 1;
//while(!RCC->RCC_CR.FIELD.PLLRDY);
//FLASH->FLASH_ACR.FIELD.LATENCY = 2;
//FLASH->FLASH_ACR.FIELD.PRFTBE = 1;
//RCC->RCC_CFGR.FIELD.SW = 1;
//while(!(RCC->RCC_CFGR.FIELD.SWS == 1));
FLASH->FLASH_ACR.FIELD.PRFTBE = 1;
FLASH->FLASH_ACR.FIELD.LATENCY = 2;
RCC->RCC_CR.FIELD.HSEON = 1;
while(!RCC->RCC_CR.FIELD.HSERDY);


RCC->RCC_CFGR.FIELD.PLLXTPRE = 0;
RCC->RCC_CFGR.FIELD.PLLSRC = 1;
RCC->RCC_CFGR.FIELD.PLLMUL = 5;
RCC->RCC_CFGR.FIELD.HPRE = 8;
RCC->RCC_CFGR.FIELD.PPRE1 &= ~7;
RCC->RCC_CFGR.FIELD.PPRE2 &= ~7;

RCC->RCC_CR.FIELD.PLLON = 1;
while(!RCC->RCC_CR.FIELD.PLLRDY);

RCC->RCC_CFGR.FIELD.SW &= ~3;
RCC->RCC_CFGR.FIELD.SW = 2;
while (!(RCC->RCC_CFGR.FIELD.SWS == 2));

}


void Delay_Ms(uint32_t u32Delay)
{
	while(u32Delay){
		Delay_1_Ms();
		--u32Delay;
	}
	
}
int main(void)	
{
	clock();
	RCC->RCC_APB2ENR.FIELD.IOPCEN = 1;
	GPIO_C->CRH.FIELD.MODE13 = 3;
	GPIO_C->CRH.FIELD.CNF13 = 0;
	while(1)
	{
		GPIO_C->ODR.FIELD.ODR13 =	!GPIO_C->ODR.FIELD.ODR13;
		Delay_Ms(1000);
		
		
		
	}
	
}
