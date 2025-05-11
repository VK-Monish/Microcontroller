#include<htc.h>
#define _XTAL_FREQ 20000000
__CONFIG(0X1F7A);

unsigned char uart_rx(void);
void uart_init(void);

void uart_init()
{
	TRISC6 = 1;         
	TRISC7 = 0;        
	TXSTA = 0X00;      
	RCSTA = 0X00;       
	SPBRG = 31;         
	TXEN = 1;          
	SPEN = 1;          
	TXIF = 0;
	RCIF = 0;
}

void uart_tx(unsigned char val)
{
	TXREG = val;
	while(TXIF == 0); 
	TXIF = 0;
}

void main()
{
	uart_init();
	uart_tx('S');
	__delay_ms(100);
	uart_tx('L');
	__delay_ms(100);
	uart_tx(' ');
	__delay_ms(100);
	uart_tx('D');
	__delay_ms(100);
	uart_tx('P');
	__delay_ms(100);
	uart_tx('I');
	__delay_ms(100);
	
	while(1);
}
