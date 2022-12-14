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
  
unsigned int i;
va_list ap;
 
va_start(ap, n);
 
 for (i = 0; i < n; i++)
   {

     if (separator == NULL)
       {
	 if (va_arg(ap, char*) == NULL)
	   {
	     printf("(nil)");
	   }
	 else
	   {
	     printf("%s", va_arg(ap, char*));
	   }
       }
     else
       {
	 if (va_arg(ap, char*) == NULL)
	   {
	     printf("(nil)");
	   }
	 else
	   {
	     printf("%s", va_arg(ap, char*));
	   }
	 if (i < (n - 1))
	   {
	     printf("%s", separator);
	   }
       }
   }
 printf("\n");

}
