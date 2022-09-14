#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
  
  if (n < 98)
    {
      while (n <= 98)
	{
	  printf("%d", n);
	  if (n < 98)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	  n++;
	}
    }
  else if (n > 98)
    {
      while (n >= 98)
	{
	printf("%d", n);
	if (n > 98)
	  {
	    putchar(',');
	    putchar(' ');
	  }
	n--;
      }
    }
  else {
    printf("%d", n);
  }
}
