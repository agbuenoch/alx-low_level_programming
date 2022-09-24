#include "main.h"
/**

*/
void recur(int num)
{
  if (num != 0)
    {
      if (num < 0)
	{
	  _putchar('-');
	}
      recur(num / 10);
      _putchar((num % 10) + '0');
    }
  /*
  if (num < 0)
    {
      sign = num / 1;
      _putchar('-');
      
    }*/
}
void print_number(int n)
{
  if (n <= 9)
    {
      _putchar(n + '0');
    }
  else
    {
       recur(n);
    }
}
