#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * 
 * @format: constant pointer-to-character
*/
void print_all(const char * const format, ...)
{
  va_list ap;
  int i;
  i = 0;
  
  va_start(ap, format);

  while (ap + 1)
    {
      if (*format == sizeof(char*))
	{
	  printf("%s, ", va_arg(ap, char*));
	}
      else if (*format == sizeof(char))
	{
	  printf("%d, ", va_arg(ap, int));
	}
      else if (*format == sizeof(int))
	{
	  printf("%d, ", va_arg(ap, int));
	}
      else if (*format == sizeof(float))
	{
	  printf("%f, ", va_arg(ap, double));
	}
      i++;
    }
}
