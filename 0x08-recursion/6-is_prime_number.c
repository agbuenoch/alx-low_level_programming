#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 *
 * @n: integer parameter n
 *
 * Return: one or zero
*/
int is_prime_number(int n)
{

  if (n > 1 && (n % 2 == 0 || n % 3 != 0))
    {
      return (1);
    }
  else
    {
      return (0);
  }

}
