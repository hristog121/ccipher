
/* *********************************** */
/*            HARDWARE                 */
/* *********************************** */

/*
         ___________  ___________
        |           \/           |
  +5V---|Vdd     16F690       Vss|---GND
 BTN -<-|RA5        RA0/AN0/(PGD)|
        |RA4            RA1/(PGC)|
        |RA3/!MCLR/(Vpp)  RA2/INT|
        |RC5/CCP              RC0|->-D4
        |RC4                  RC1|->-D5
  D7 -<-|RC3                  RC2|->-D6
        |RC6                  RB4|->- RS
        |RC7               RB5/Rx|
        |RB7/Tx               RB6|->- EN
        |________________________| 
*/

/*
           LCD two lines, Line length 16 characters
           Internal ic: HD44780A00		   
           _______________
          |               |
          |         Vss  1|--- GND  
          |         Vdd  2|--- +5V
          |    Contrast  3|-<- Pot
          |          RS  4|-<- RB4
          |      RD/!WR  5|--- 0, GND
          |          EN  6|-<- RB6
          |          D0  7|
          |          D1  8|
          |          D2  9|
          |          D3 10|
          |          D4 11|-<- RC0
          |          D5 12|-<- RC1 
          |          D6 13|-<- RC2
          |          D7 14|-<- RC3 
          |_______________|						  
*/