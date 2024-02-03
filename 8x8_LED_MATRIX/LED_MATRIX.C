////////////////////////////////////////////////////////////|
//                                                         ||
// AUTHOR      : MONISH KUMAR.K                            ||
//                                                         ||
// FILE NAME   : 8X8 LED MATRIX                            ||
//                                                         ||
// DESCRIPTION : BY USEING 8X8 LED MATRIX DOING PATTERNS   ||
//                                                         || 
// DATE        : 24/01/2024                                ||
////////////////////////////////////////////////////////////|
#include <htc.h>
__CONFIG(0x1f7a);
#define _XTAL_FREQ 20000000
void main()
{
	TRISC=0;
	TRISD=0;
	int i,j;
	while(1)
	{
		for(i=0 ;i<5000; i++)
		{
			PORTC=0x01;
			PORTD=0xff;
			__delay_ms(0.1);
			
			PORTC=0x02;
			PORTD=0x02;
			__delay_ms(0.1);
			
			PORTC=0x04;
			PORTD=0x04;
			__delay_ms(0.1);	
			
			PORTC=0x08;
			PORTD=0x08;
			__delay_ms(0.1);
			
			PORTC=0x10;
			PORTD=0x08;
			__delay_ms(0.1);
			
			PORTC=0x20;
			PORTD=0x04;
			__delay_ms(0.1);	
			
			PORTC=0x40;
			PORTD=0x02;
			__delay_ms(0.1);
			
			PORTC=0x80;
			PORTD=0xff;
			__delay_ms(0.1);
		}
		PORTC=0;
		PORTD=0;
		for(i=0 ;i<5000; i++)
		{
			PORTC=0xff;
			PORTD=0x01;
			__delay_ms(0.1);
			
			PORTC=0x01;
			PORTD=0xff;
			__delay_ms(0.1);
			
			PORTC=0xff;
			PORTD=0x80;
			__delay_ms(0.1);
			
			PORTC=0x80;
			PORTD=0xff;
			__delay_ms(0.1);
		}	
		PORTC=0;
		PORTD=0;			
		for(i=0 ;i<5000; i++)
		{
			PORTC=0x01;
			PORTD=0xff;
			__delay_ms(0.1);
			
			PORTC=0x01;
			PORTD=0x01;
			__delay_ms(0.1);
		
			PORTC=0x02;
			PORTD=0x02;
			__delay_ms(0.1);
			
			PORTC=0x04;
			PORTD=0x04;
			__delay_ms(0.1);	
			
			PORTC=0x08;
			PORTD=0x08;
			__delay_ms(0.1);
			
			PORTC=0x10;
			PORTD=0x10;
			__delay_ms(0.1);
		
			PORTC=0x20;
			PORTD=0x20;
			__delay_ms(0.1);
			
			PORTC=0x40;
			PORTD=0x40;
			__delay_ms(0.1);
			
			PORTC=0x80;
			PORTD=0x80;
			__delay_ms(0.1);
			
			PORTC=0x80;
			PORTD=0xff;
			__delay_ms(0.1);	
		}
		PORTC=0;
		PORTD-0;
		for(i=0 ;i<5000; i++)
		{
			PORTC=0xff;
			PORTD=0x01;
			__delay_ms(0.1);
			
			PORTC=0x18;
			PORTD=0xff;
			__delay_ms(0.1);
			
			PORTC=0xff;
			PORTD=0x80;
			__delay_ms(0.1);	
		}
		PORTC=0;
		PORTD=0;
		
		for(i=0 ;i<5000; i++)
		{
			PORTC=0xff;
			PORTD=0x01;
			__delay_ms(0.1);
			
			PORTC=0x01;
			PORTD=0x0f;
			__delay_ms(0.1);
			
			PORTC=0xff;
			PORTD=0x10;
			__delay_ms(0.1);
			
			PORTC=0x80;
			PORTD=0xf0;
			__delay_ms(0.1);	
			
			PORTC=0xff;
			PORTD=0x80;
			__delay_ms(0.1);			
		}
		PORTC=0;
		PORTD=0;
		
		for(i=0 ;i<5000; i++)
		{
			PORTC=0x01;
			PORTD=0xff;
			__delay_ms(0.1);
			
			PORTC=0xff;
			PORTD=0x18;
			__delay_ms(0.1);
			
			PORTC=0x80;
			PORTD=0xff;
			__delay_ms(0.1);	
		}
		PORTC=0;
		PORTD=0;
		
		for(i=; i<5000; i++)
		{
			PORTC=0x23;
			PORTD=0x01;
			__delay_ms(0.1);
			
			PORTC=0x13;
			PORTD=0x02;
			__delay_ms(0.1);
			
			PORTC=0x38;
			PORTD=0x03;
			__delay_ms(0.1);
			
			PORTC=0x23;
			PORTD=0x01;
			__delay_ms(0.1);
			
			PORTC=0x13;
			PORTD=0x02;
			__delay_ms(0.1);
			
			PORTC=0x38;
			PORTD=0x03;
			__delay_ms(0.1);	
			
		}
		for(i=; i<5000; i++)
		{
			PORTC=0x01;
			PORTD=0xff;
			__delay_ms(0.1);
			
			PORTC=0xff;
			PORTD=0x80;
			__delay_ms(0.1);
			
			PORTC=0x80;
			PORTD=0xff;
			__delay_ms(0.1);
		}										
	}				
}	
