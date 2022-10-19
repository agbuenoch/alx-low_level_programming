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
  int num_arg;
  int i;
  int j;

  j = 0;
  i = 0;
  num_arg = 0;
  va_start(ap, format);

  while (format[i] != '\0')
    {
      num_arg++;
      i++;
    }


  while (j < num_arg && num_arg != '\0')
    {
      if (format[j] == 'i')
	printf("%d", va_arg(ap, int));
      else if (format[j] == 's')
	printf("%s", va_arg(ap, char*));
      else if (format[j] == 'f')
	printf("%f", va_arg(ap, double));
      j++;
    }
  va_end(ap);
}
