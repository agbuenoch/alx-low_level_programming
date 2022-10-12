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
name = "";
}
else
f(name);
}
