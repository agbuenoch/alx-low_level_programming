#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant bytes
 *
 * @s: pointer-to-character
 * @b: second parameter
 * @n: third parameter
 *
 * Return: pointer-to-character
*/
char *_memset(char *s, char b, unsigned int n)
{
/* memset() function implemention */
unsigned  int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
