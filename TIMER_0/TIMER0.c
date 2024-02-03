/////////////////////////////////////////////////////|
//                                                  ||
// AUTHOR      : MONISH KUMAR.K                     ||
//                                                  ||
// FILE NAME   : TIMER_0                            ||
//                                                  ||
// DESCRIPTION : BY USING TIMER DELAY IS CALCULATED ||
//                                                  || 
// DATE        : 28/01/2024                         ||
/////////////////////////////////////////////////////|

#include<htc.h>
# define __XTAL_FREQ 20000000
void delay();
void main()
{
	INTCON=0x00;
	OPTION_REG=0x00;
	TMR0=0x00;
	TRISA=0;
	while(1)
	{
		PORTA=0xff;
		delay();
		PORTA=0x00;
		delay();
	}
	return;
}
void delay()
{
	OPTION_REG=0x04;
	TMR0=100;
	TMR0IE=1;
	while(TMR0IF!=1);
	TMR0IE=0;
	TMR0IF=0;
}
