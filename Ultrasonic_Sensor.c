#include <htc.h>
#define _XTAL_FREQ 20000000
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_ON & LVP_OFF);

#define RS RD0
#define RW RD1
#define EN RD2

void lcd_cmd(unsigned char cmd)
{
	RS = 0;
	RW = 0;
	EN = 1;
	PORTC = cmd;
	__delay_ms(10);
	EN = 0;
}

void lcd_print(unsigned char data)
{
	RS = 1;
	RW = 0;
	EN = 1;
	PORTC = data;
	__delay_ms(10);
	EN = 0;
}

void lcd_init()
{
	TRISC = 0X00;
	lcd_cmd(0X38);				 
	lcd_cmd(0X01);           
  	lcd_cmd(0X0F); 
	lcd_cmd(0X0C);
	lcd_cmd(0X02);          
	lcd_cmd(0X06);        
	lcd_cmd(0X80);                //set DDRAM
}

void lcd_write(unsigned char *s)
{
	while(*s)
	{
		lcd_print(*s++);
	}
}

int main()
{ 
  int a,b,c,d,f,g,h,i=1;
  TRISC = 0X00;
  TRISB = 0b00010000;         	        //RB4 as Input PIN (ECHO)
  TRISD = 0X00;               		//LCD Pins as Output
  TRISA0 = 0;

  lcd_init();
  
  T1CON = 0X10;               		//Initialize Timer Module

  while(1)
  { 
    TMR1H = 0;                		//Sets the Initial Value of Timer
    TMR1L = 0;                		//Sets the Initial Value of Timer

    RB0 = 1;                  		//TRIGGER HIGH
    __delay_us(10);           		//10uS means micro seconds Delay 
    RB0 = 0;                 		//TRIGGER LOW

    while(!RB4);              		//Waiting for Echo
    TMR1ON = 1;                 	//Timer Starts 1 means timer on 
    while(RB4);                	        //Waiting for Echo goes LOW
    TMR1ON = 0;                 	//Timer Stops  0 means timer off

    a = (TMR1L | (TMR1H<<8));   	//Reads Timer Value
    b = a/156.71;               	//Converts Time to Distance
    c = b +1;                   	//Distance Calibration
    if(c>=0 && c<=30)           	//Check whether the result is valid or not
    { 
      lcd_cmd(0X80);
      lcd_write("Distance = ");
     
      lcd_cmd(0X8D);
      lcd_print(c%10 + 48);


      lcd_cmd(0X8C);
      d = c/10;
      lcd_print(d%10 + 48);

      
      lcd_cmd(0X8B);
      f = d/10;
      lcd_print(f%10 + 48);	
 

      lcd_cmd(0X8E);
      lcd_write("cm");
    }  
    else
    {
      lcd_cmd(0X01);
      lcd_cmd(0X80);
      lcd_write("Out of Range");
    }
    __delay_ms(400);
  }
}
