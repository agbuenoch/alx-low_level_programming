#include "main.h"
/**
 * reverse_array - print strings in reverse
 *
 * @a: first pointer-to-integer parameter
 * @n: second parameter
*/
/*A Function to print long string of integer using `putchar`*/
void vv(long val)
{
  if (val != 0)
    {
      vv(val / 10);
      _putchar((val % 10) + '0');
    }
}
/*A Function for inserting `comma and space`*/
void comma(int len)
{
  int i = 0;
  if (i < len - 1)
    {
      _putchar(',');
      _putchar(' ');
    }
}
void reverse_array(int *a, int n)
{
  int i;
  for (i = n - 1; i >= 0; i--)
    {
      if (i <= 9)
	{
	  _putchar(a[i] + '0');
	  comma(n); /*Put comma follow by space after each number except the last number*/
	}
      else
	{
	  vv(a[i]);
	  comma(n);
	}
    }
  _putchar('\n');
}
