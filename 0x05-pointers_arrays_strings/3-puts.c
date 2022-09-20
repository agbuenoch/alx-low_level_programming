#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: first pointer-to-character parameter
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
  int i;
  for (i = 0; s[i] != '\0'; i++)
    {
      _putchar(s[i]);
    }
  _putchar('\n');
}
