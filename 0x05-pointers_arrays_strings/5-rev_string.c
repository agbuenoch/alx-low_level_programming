#include "main.h"
/**
 * rev_string - print a string in reverse
 *
 * @s: first pointer-to-character parameter
 *
 * Return: always 0.
*/
void rev_string(char *s)
{
  int i;
  int counter = 0;
  while (s[counter] != '\0')
    {
      counter++;
    }

  for (i = counter - 1; i >= 0; i--)
    {
      _putchar(s[i]);
    }
}
