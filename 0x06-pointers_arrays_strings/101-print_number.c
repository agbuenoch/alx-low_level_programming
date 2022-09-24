#include "main.h"
/**

*/
void recur(int num)
{
  if (num != 0)
    {
      recur(num / 10);
      _putchar(num % 10 + '0');
    }
}
void print_number(int n)
{
  if (n <= 9)
    {
      _putchar(n + '0');
    }
  else
    {
      /*
      if (n != 0)
	{
	   n = n / 10;
	   _putchar((n % 10) + '0');
	   }  */
      recur(n);
    }
}
