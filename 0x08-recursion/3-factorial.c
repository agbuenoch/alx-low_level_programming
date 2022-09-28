#include "main.h"
/**
 * factorial - returns the factorial of a given number
 *
 * @n: integer parameter
 *
 * Returns: zero
*/
int factorial(int n)
{

  if (n < 0)
    {
      return (-1);
    }
  if (n == 0)
    {
      return 1;
    }
  if (n >= 1)
    {
      return (n = n * factorial(n - 1));
    }
  return (0);
}
