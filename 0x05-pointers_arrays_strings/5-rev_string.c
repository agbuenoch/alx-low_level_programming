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
  int array_length = 0;
  while (s[array_length] != '\0')
    {
      array_length++;
    }

  for (i = array_length - 1; i >= 0; i--)
      _putchar(s[i]);
}
