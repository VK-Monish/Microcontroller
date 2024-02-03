#include <htc.h>
__CONFIG(0x1f7a);
#define _XTAL_FREQ 20000000
void main()
{
	TRISB=0;//PORTB IS OUTPUT
	TRISD=0;//PORTD IS INPUT
	int i,j,k,l,m;
	int ar[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};//COMMON ANODE VALUE FROM 0 TO 9 
	int ar1[10]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};
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
				   	for(m=0; m<65; m++)
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
					   		 PORTB=ar1[j];
					    
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