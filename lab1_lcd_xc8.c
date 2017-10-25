#define _XTAL_FREQ 4000000//4MHz

#define RS RD1//this ensures that the pins on the lcd are matched to the correct oport pins on the pic18
#define EN RD0
#define D4 RD4
#define D5 RD5
#define D6 RD6
#define D7 RD7

#include <xc.h>//checks default, this is in compiler manual
#include "lcd.h";//checks local project folder for header file

// BEGIN CONFIG
/*#pragma config FOSC = HS // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON // Brown-out Reset Enable bit (BOR enabled)*/
#pragma config LVP = OFF // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
/*#pragma config WRT = OFF // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF // Flash Program Memory Code Protection bit (Code protection off)*/
//END CONFIG

int main()
{
  unsigned int a;
  TRISD = 0x00;
  Lcd_Init();
  
  
  
    Lcd_Set_Cursor(2,4);
    Lcd_Write_String("Hello World");
    Sleep();
  
  
  return 0;}
