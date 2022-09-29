#include "main.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: first pointer-to-character
 *
 * Return: zero
*/
int is_palindrome(char *s)
{
  int i;
  int j;
  i = 0;
  j = 0;
  
 if (s[i] != '\0')
    {
      j++;
      i++;
    }
  if (s[i] == s[j])
    {
      return (1);
      j++;
      i--;
      is_palindrome(s);
    }
  else
    {
      return (0);
    }
}
