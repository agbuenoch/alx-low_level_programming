#include "main.h"

/**
 * _puts - check the code
 *
 * @s: first pointer-to-character parameter
 *
 * Return: Always 0.
 */
void _puts(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
