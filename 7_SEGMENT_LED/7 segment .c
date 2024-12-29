////////////////////////////////////////////////////|
//                                                 ||
// AUTHOR      : MONISH KUMAR.K                    ||
//                                                 ||
// FILE NAME   : 7_Segment                         ||
//                                                 ||
// DESCRIPTION : 7_Segment_to_print_zero_TO_nine   ||
//                                                 || 
// DATE        : 20/01/2024                        ||
////////////////////////////////////////////////////|

#include <htc.h>
__CONFIG(0x1f7a);
#define _XTAL_FREQ 20000000

void main()
{
	TRISB=0;//PORTB IS OUTPUT
	TRISD=0;//PORTD IS INPUT
	int i,j,k,l,m;
	int ar[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};//COMMON ANODE VALUE FROM 0 TO 9 
	while(1)
	{
		RD0=1;
		RD1=1;
		RD2=1;
		RD3=1;
	    for(i=0; i<6; i++)
	    {
	    	for(j=0; j<10; j++)
	   		{
		   	 for(k=0; k<6; k++)
		    	{
			   	 for(l=0; l<10; l++)
			    	{
				   	for(m=0; m<30; m++)
				    	{
					  	 	RD0=1;
					    	__delay_ms(3);
					   		 RD1=0;
					   		 RD2=0;
					   		 RD3=0;
					   		 PORTB=ar[i];
					    
					    	RD1=1;
					   		 __delay_ms(3);
					   		 RD0=0;
					   		 RD2=0;
					   		 RD3=0;
					   		 PORTB=ar[j];
					    
					    	RD2=1;
					   		 __delay_ms(3);
					   		 RD0=0;
					   		 RD1=0;
					   		 RD3=0;
					    	PORTB=ar[k];
					    	
					    	RD3=1;
					    	__delay_ms(3);
					    	RD0=0;
					    	RD1=0;
					    	RD2=0;
					    	PORTB=ar[l];
					   		
					   	}
					}
				}
			}
		}
	}
}					
