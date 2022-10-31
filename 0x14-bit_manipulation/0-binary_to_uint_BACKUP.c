#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 *
 * @b: constant character-pointer
 *
 * Return: unsigned integer
*/
int powa(int n)
{
  int i;
  static int mult;
  mult = 1;;
  if (n == 0)
    {
      return (mult);
    }
  else
    {
      for (i = 0; i < n; i++)
	{
	  mult *= 2;
	}
    }
  return (mult);
}

unsigned int binary_to_uint(const char *b)
{
  int i;
  int j;
  int ans;

  ans = 0;
  j = 0;

  if (b == NULL)
    {
      return (0);
    }
  
  while (*b)
    {
      if (*b != '0' || *b != '1')
	{
	  return (0);
	}
      j++;
      b++;
    }
  
  for (i = 0; b[i] != '\0'; i++)
    {
      ans = ans + (b[i] * (powa(j--)));
    }
  return (ans);
}
