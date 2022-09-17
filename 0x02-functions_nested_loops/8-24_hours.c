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
  
  hour1 = 48;
  while (hour1 <= 50)
    {
     
      hour2 = 48;
      while (hour2 <= 51)
	{
	 min1 = 48;
	 while (min1 <= 53)
	    {
	    
	    min2 = 48;
	    while (min2 <= 57)
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
      _putchar('\n');
      hour1++;
    }

}
