#include "main.h"
/**
 * _puts - print character to standard output
 *
 * @s: pointer-to-character
 *
 * Return: nothing
*/
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
}
