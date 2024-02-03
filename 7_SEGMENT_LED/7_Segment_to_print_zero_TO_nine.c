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
__CONFIG_(0x1f7a);
#define _XTAL_FREQ 20000000
void main()
{
	TRISB=0;
	TRISD=0;
	int i;
	chararr[9]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80};
	while(1)
	{
		for(i=0; i<9; i++)
		{
			PORTB=0;
			PORTD=arr[i];
			__delay_ms(500);
			portd=0;
			__delsy_ms(500);
		}
	}
}
