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
  int j;
  j = 0;
  
 if (*s != '\0')
    {
      j++;
      s++;
    }
  if (*s == s[j - 1])
    {
      j--; 
      is_palindrome(s + 1);
      return (1);
    }
  else
    {
      return (0);
    }
}
