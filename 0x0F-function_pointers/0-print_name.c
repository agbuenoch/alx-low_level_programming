#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 *
 * @name: pointer-to-character parameter
 * @f: pointer-to-function parameter
 *
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
{
exit(EXIT_SUCCESS);
}
else if (*name >= '0' && *name <= '9')
{
exit(EXIT_SUCCESS);
}
else
f(name);
}
