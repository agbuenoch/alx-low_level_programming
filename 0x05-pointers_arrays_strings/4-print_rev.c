#include "main.h"

/**
 * print_rev - check the code
 *
 * @s: first pointer-to-character parameter
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
  int i;
  for (i = ('\0' - 1); s[i] >= 0; i--) {
    _putchar(s[i]); /* or newString = newString + str[i]; */
  }
  _putchar('\n');
}
