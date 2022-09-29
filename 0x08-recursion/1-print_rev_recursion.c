#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print a string in reverse
 *
 * @s: pointer-to-character parameter
 *
 * Return: zero
*/
void _print_rev_recursion(char *s)
{
  
  int count;
  count = 0;
  char *c;

  *c = *s;
  
  if (*s != '\0')
    {
      count++;
    }
  *s = *(s + count);
  *(s + count) = *c;
  
  if (*(s + count) < 0)
    {
      _putchar('\n');
      return;
    }
  if (*(s + count))
    {
      _putchar(*(s + count));
      count--;
      _print_rev_recursion(s + count);
 }
}
