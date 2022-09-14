#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check the code
 *
 * @n: first parameter
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n < 98)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n > 98)
{
putchar(',');
putchar(' ');
}
n--;
}
putchar('\n');
}
else
{
printf("%d", n);
putchar('\n');
}
}
