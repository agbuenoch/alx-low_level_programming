#include "main.h"
/**
 * rev_string - Printing string in reverse order.
 *
 * @s: first pointer-to-character parameter.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
  int i;
  int length;
  length = 10;

  /* Traverse string from end */
  for (i = length - 1; i >= 0; i--) {
    if (s[i] == ' ') {

      /* putting the NULL character at the */
      /* position of space characters for */
      /* next iteration. */
      s[i] = '\0';

      /* Start from next character */
      _putchar(s[i]);
    }
  }
  
  _putchar('\n');
}
