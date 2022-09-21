#include "main.h"

/**
 * _atoi - convert strings to number
 *
 * @s: first parameter
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
  int val;
  int i;
  for (i = 0; s[i] != '\n'; i++)
    {
      val = _putchar(s[i] + '0');
    }
  return val;
}
