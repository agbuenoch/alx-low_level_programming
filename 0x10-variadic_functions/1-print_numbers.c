#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: constant pointer-to-character
 * @n: integer parameter
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
va_start(ap, n);
if (separator == NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
}
}
else
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i < n - 1)
{
printf("%s", separator);
}
}
}
va_end(ap);
putchar('\n');
}
