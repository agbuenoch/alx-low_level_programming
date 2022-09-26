#include "main.h"
/**
 * print_number - prints integers like: 7, -7, 63, -987
 *
 * @n: first parameter
 *
 * Return: zero.
*/

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n <= 9)
{
_putchar(n + '0');
}
else
{
if (n / 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}
}
