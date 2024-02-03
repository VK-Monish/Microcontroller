////////////////////////////////////////////////////|
//                                                 ||
// AUTHOR      : MONISH KUMAR.K                    ||
//                                                 ||
// FILE NAME   : 7_Segment                         ||
//                                                 ||
// DESCRIPTION : 7_Segment_to_print_00 to 99       ||
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
	int i,j,k;
	char arr[10]={0x40,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x10};
	while(1)
	{
		for(i=0; i<10; i++)
		{
			RD2=0;
			RD3=0;
			for(j=0; j<10; j++)
			{
				RD3=1;
				RD2=0;
				PORTB=arr[i];
				__delay_ms(20);
				PORTB=arr[j];
				__delay_ms(500);
			}	
		}	
	}
}
