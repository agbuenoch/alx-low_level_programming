#include "main.h"
/**
 * print_rev - print strings in reverse order
 *
 * @s: first pointer-to-character parameter
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
int array_length = 0;
while (s[array_length] != '\0')
{
array_length++;
}
for (i = array_length - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
