// LCD module connections
sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D4 at RB0_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D7 at RB3_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;
// End LCD module connections

typedef unsigned char uint_8;

void main() {
     char temp[16];                                          //matrix in one dim.
     uint_8 temp1;
     lcd_init();                                          // lcd initialization
     lcd_cmd(_lcd_clear);                                 //clearing lcd screen
     lcd_cmd(_lcd_cursor_off);                            //shutting cursor off
     adc_init();
     Uart1_init(9600);                                          //ADC intialization
     while(1){                                            //infinite loop
              temp1=adc_read(0);                          //reading temperature samples at adc pin 0
              temp1=(temp1*500)/1024;                     //getting the true value of temperature
              delay_ms(10);                               //delay 10 ms
              FloatToStr(temp1,temp ) ;                   //converting temp. data type from int to string to write on lcd
              lcd_out(1,1,"temperature :");               //write "temperature : " at 1st row & 1st column
              lcd_out(1,14,temp);                         //writing the value of temp.
              lcd_out(1,16,"c  ");                        //writing the unit of temp in c
              Uart1_write_text(temp);                      //send temp. to esp8266
              delay_ms(1000);                               //wait 1 sec
     }
}