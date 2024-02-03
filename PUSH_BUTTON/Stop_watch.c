////////////////////////////////////////////////////|
//                                                 ||
// AUTHOR      : MONISH KUMAR.K                    ||
//                                                 ||
// FILE NAME   : STOP_WATCH                        ||
//                                                 ||
// DESCRIPTION : STOP_WATCH IN 7 SEGMENT           ||
//                                                 || 
// DATE        : 22/01/2024                        ||
////////////////////////////////////////////////////|

#include <htc.h>
__CONFIG(0x1f7a);
#define _XTAL_FREQ 20000000
void main()
{
	TRISB=0; // led port
	TRISC=0; // led port
	TRISD0=1; // switch
	int arr[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
	int i,j,k;
	while(1)
	{
		for(i=0; i<10; i++)
		{
			for(j=0; j<10; j++)
			{
				for(k=0; k<50; k++)
				{
					if(RD0==0)
					{
						while(1)
						{
							RC0=1;
							__delay_ms(3);
							RC1=0;
							PORTB=arr[i];
							
							RC1=1;
							__delay_ms(3);
							RC0=0;
							PORTB=arr[j];
							if(RD0==1)
							{
								break;
							}	
						 }
					 }	 
						 else
						 {
							 RC0=1;
							__delay_ms(3);
							RC1=0;
							PORTB=arr[i];
							
							RC1=1;
							__delay_ms(3);
							RC0=0;
							PORTB=arr[j];
						 }
				}
			}
		}
	}
}						 
			
