#include "main.h"
/**
 * print_square - check the code
 *
 * @size: first parameter
 *
 * Return: Always 0.
 */
void print_square(int size)
{
if (size > 0)
{
int i;
for (i = 1; i <= size; i++)
{
int j;
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
