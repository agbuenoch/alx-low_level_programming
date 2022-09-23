#include "main.h"
/**
 * reverse_array - print strings in reverse
 *
 * @a: first pointer-to-integer parameter
 * @n: second parameter
*/
void reverse_array(int *a, int n)
{
  int i;
  for (i = n - 1; i >= 0; i--)
    {
      _putchar(a[i] + '0');
      if (i > 0)
	{
	  _putchar(',');
	  _putchar(' ');
	}
    }
  _putchar('\n');
}
