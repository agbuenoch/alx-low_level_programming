#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc 
 *
 * @b: integer parameter
 *
 * Return: noting
*/
void *malloc_checked(unsigned int b)
{
  
  char *c;
  int *i;
  float *f;
  double *d;
    
  if (b == sizeof(char))
    {
      c = malloc(sizeof(char) * b);
      if ( c == NULL)
	{
	  _putchar('9');
	  _putchar('8')
	    -putchar('\0')
	}
      return (c);
    }
  else if (b == sizeof(int))
    {
      i = malloc(sizeof(int) * b);
      if (i == NULL)
	{
	  _putchar('9');
	}
      return (i);
    }
  else if (b == sizeof(float))
    {
      f = malloc(sizeof(float) * b);
      if (f == NULL)
	{
	  printf("98\n");
	}
      return (f);
	
    }
  else
    {
      d = malloc(sizeof(double) * b);
      if (d == NULL)
	{
	  printf("98");
	}
      return (d);
    }
}
