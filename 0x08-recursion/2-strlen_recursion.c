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

  int i;
 i = 0;
  if (*s != '\0')
    {
      i++;
      _strlen_recursion(++s);
    }

  return (i);
}
