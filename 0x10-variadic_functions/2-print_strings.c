#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: constant pointer-to-character
 * @n: integer parameter
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *val;
unsigned int i;
va_list ap;
 
va_start(ap, n);
val = "(nil)";
 
for (i = 0; i < n; i++)
{
  if (ap != NULL)
    {
      if (separator != NULL)
	{
	  printf("%s", va_arg(ap, char*));
	  if (i < n - 1)
	    {
	      printf("%s", separator);
	    }
	}
      else
	{
	  printf("%s", va_arg(ap, char*));
	}
    }
  else
    {
      if (separator != NULL)
	{
	  printf("%d", *val);
	  if (i < n - 1)
	    {
	      printf("%s", separator);
	    }
	}
      else
	{
	  printf("%d", *val);
	}
    }
 }
va_end(ap);
putchar('\n');
}
