#include "main.h"
#include <stdlib.h>
/**
 * print_binary - function that prints the binary
 * representation of a number
 *
 * @n: integer parameter
*/
void print_binary(unsigned long int n)
{
  int i;
  int mask;

  if (n == 1 || n == 0)
    {
      _putchar(n);
    }
  for (i = 8; i >= 0; i--)
    {
      mask = (1 << i);
    
      if (n & mask)
	{
	  _putchar('1');
	}
      else
	{
	  _putchar('0');
	}
    }

  _putchar('\n');
}
