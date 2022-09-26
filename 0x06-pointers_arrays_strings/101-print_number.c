#include "main.h"
/**

*/
/*
void recur(int num)
{
  if (num < 0)
    {
      _putchar('-');
      num = -num;
    }
  if (num != 0)
    {
      recur(num / 10);
      _putchar((num % 10) + '0');
    }

    } */


void print_number(int n)
{
  if (n < 0)
    {
      _putchar('-');
      n = -n;
    }
  
  if (n <= 9)
    {
      _putchar(n + '0');
    }
  else
    {
      if (n / 10)
	print_number(n / 10);
      _putchar((n % 10) + '0');
    }
}
