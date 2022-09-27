#include "main.h"
/**
 * _strchr -  locates a character in a string
 *
 * @s: first pointer-to-character parameter
 * @c: second parameter
 *
 * Return: pointer-to-parameter s.
*/
char *_strchr(char *s, char c)
{
  int i;
  for (i = 0; s[i] != '\0'; i++)
    {
      if (c == s[i])
	{
	  ;
	}
    }
  return (s);
}
