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
    
  va_start(ap, format);

  while (ap != NULL)
    {
      if (*ap == char*)
	  printf("%s, ", va_arg(ap, char*));
      else if (ap == int*)
	  printf("%d, ", va_arg(ap, int));
      else if (ap == double*)
	  printf("%f, ", va_arg(ap, double));
    }
}
