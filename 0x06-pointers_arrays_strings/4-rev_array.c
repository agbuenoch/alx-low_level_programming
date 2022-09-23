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
  for (i = n; i >= 0; i--)
    {
      _putchar(a[i] + '0');
    }
  _putchar('\n');
}
