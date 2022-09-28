#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer-to-character parameter
 *
 * Return: zero
*/
int _strlen_recursion(char *s)
{

  int count;
  count = 0;
  if (*s != '\0')
    {
      count++;
      _strlen_recursion(++s);
    }

  return (count);
}
