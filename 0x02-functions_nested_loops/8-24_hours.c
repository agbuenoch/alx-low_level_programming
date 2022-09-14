#include "main.h"
/**
 * jack_bauer - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void){
  int hour;
  hour = 0x0;
 
  while (hour <= 23)
    {
      int min;
      min = 0x0;
      while (min <= 59)
	{
	  _putchar(hour + '0');
	  _putchar(':');
	  _putchar(min + '0');
	  _putchar('\n');
	  min++;
	}
      hour++;
    }
}
