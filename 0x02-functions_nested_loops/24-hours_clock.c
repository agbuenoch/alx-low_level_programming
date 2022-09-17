#include "main.h"
/**
 * jack_bauer - print 24 hour format clock
 *
 * Return: Always 0.
 */
void jack_bauer(void){
  int hour1;
  int hour2;
  
  int min1;
  int min2;

  /**
   *                     WHAT THE CODE DOES.
   * The clock is a "24-Hour" clock format, for example: 23:59 meaning 11:59 in "12-Hour" clock format.
   * The first part i.e 23 is the HOUR and the second part i.e 59 is the MINUTES.
   * Because "putchar()" function can ONLY print a "single or one" character or number 
   * at a time, therefore you cannot print the hour "23" or the minutes "59" at once.
   * On this note, we have to loop through zero (0) to the end of each of the digit that
   * we want it to appear.
   * EXAMPLE- for us to print the minutes :59 in the second part of the time, we loop through from 
   * 0 to 5 and then from 0 to 9 using their ASCII VALUES: 0 to 5 is: (48 to 53) and 0 to 9 is: (48 to 57)
   * which you can look up from the ASCII TABLE online or anywhere you can. The same thing applies to the first part
   * of the time 23: by looping from 0 to 2 and then from 0 to 3 using their ASCII VALUES: 0 to 2 is: (48 to 51)
   * and 0 to 3 is: (48 to 53).
   */
  hour1 = 48; /*ASCII value of 0 is: 48*/
  while (hour1 <= 50) /*ASCII value of 2 is: 50*/
    {
     
      hour2 = 48;
      while (hour2 <= 51) /*ASCII value of 3 is: 51*/
	{
	 min1 = 48;
	 while (min1 <= 53) /*ASCII value of 5 is: 53*/
	    {
	    
	    min2 = 48;
	    while (min2 <= 57) /*ASCII value of 9 is: 57*/
	      {
		_putchar(hour1);
		_putchar(hour2);
		_putchar(':');
		_putchar(min1);
		_putchar(min2);
		min2++;
		_putchar('\n');
	      }
	    min1++;
	    }
	  hour2++;
	}
      
      hour1++;
    }
}
