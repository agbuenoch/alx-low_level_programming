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
  i = n;
  while (i > 0)
    {
      if (i != n)
	{
	  _putchar('\n');
	}
      _putchar(a[i]);
      i--;
    }
  
}
