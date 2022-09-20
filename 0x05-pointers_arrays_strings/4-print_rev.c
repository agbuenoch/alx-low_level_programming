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
  for (i = '\0'; i >= 0; i--)
    {
      _putchar(s[i]);
    }
  _putchar('\n');
}
