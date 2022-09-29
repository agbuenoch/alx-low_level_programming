#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 if the
 * strings can be considered identical, otherwise return 0
 *
 * @s1: first pointer-to-character
 * @s2: second pointer-to-character
 *
 * Return: zero
*/
int wildcmp(char *s1, char *s2)
{
  int j;
  
 if (*s2 != '\0')
    {
      j++;
    }
  if (*s1 == s2[j] && *s1 != '\0')
    {
      s1 + 1;
      j--;
      return (1);
    }
  else
    {
      return (0);
    }
}
