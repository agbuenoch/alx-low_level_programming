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
void *arr;
arr = malloc(b);
 if ((arr == NULL))
{
_putchar('9');
_putchar('8');
_putchar('\n');
return (arr);
}
return (arr);
}
