#include "main.h"
/**
 * reverse_array - print strings in reverse
 *
 * @a: first pointer-to-integer parameter
 * @n: second parameter
*/
void vv(int val)
{
  if (val != 0)
    {
      vv(val / 10);
      _putchar((val % 10) + '0');
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
	}
      else
	{
	  vv(a[i]);
	}
    }
  _putchar('\n');
}
