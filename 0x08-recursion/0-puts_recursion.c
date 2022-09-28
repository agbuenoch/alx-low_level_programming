#include "main.h"
/**
 * _puts_recursion - prints a string
 *
 * @s: pointer-to-character parameter
 *
 * Return: zero
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
return;
_putchar(*s);
_puts_recursion(++s);
_putchar('\n');
}
