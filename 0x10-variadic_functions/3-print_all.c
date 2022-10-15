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

  while (1)
    {
	  printf("%s, ", va_arg(ap, char*));
	  printf("%d, ", va_arg(ap, int));
	  printf("%f, ", va_arg(ap, double));
    }
}
