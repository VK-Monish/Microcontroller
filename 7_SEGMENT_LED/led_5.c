////////////////////////////////////////////////////|
//                                                 ||
// AUTHOR      : MONISH KUMAR.K                    ||
//                                                 ||
// FILE NAME   : 7_Segment                         ||
//                                                 ||
// DESCRIPTION : 7_Segment_to_print_0000 to 9999   ||
//                                                 || 
// DATE        : 20/01/2024                        ||
////////////////////////////////////////////////////|
#include <htc.h>
__CONFIG(0x1f7a);
#define _XTAL_FREQ 20000000
void main()
{
	TRISB=0;
	TRISD=0;
	int i,j,k,l,m;
	int ar[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x82,0xf8,0x80,0x90};
	while(1)
	{
		RD0=1;
		RD1=1;
		RD2=1;
		RD3=1;
	    for(i=0; i<10; i++)
        {
	    	for(j=0; j<10; j++)
	   		{
		   	 for(k=0; k<10; k++)
		    	{
			   	 for(l=0; l<10; l++)
			    	{
				   	for(m=0; m<50; m++);
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
					   		__delay_ms(3);
					   		
					   	}
					}
				}
			}
		}
	}
}					
					   			
