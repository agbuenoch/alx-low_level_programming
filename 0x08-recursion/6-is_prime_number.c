#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0
 *
 * @n: integer parameter n
 *
 * Return: one or zero
*/
int is_prime_number(int n)
{
if (n == 0)
{
return (0);
}
if (n == 1)
{
return (0);
}
if (n % 4 == 0)
{
return (0);
}
else
{
if (n >= 9)
{
if ((n % 3 == 0 || n % 5 == 0 || n % 7 == 0))
{
return (0);
}
else
{
return (1);
}
}
}
return (0);
}
