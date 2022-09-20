#include "main.h"
#include <string.h>
/**
 * print_rev - print strings in reverse order
 *
 * @s: first pointer-to-character parameter
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int length = strlen(s);
int i;
for (i = length - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
