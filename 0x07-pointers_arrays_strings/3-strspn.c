#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: first pointer-to-character
 * @accept: second pointer-to-character
 *
 * Return: Zero.
*/
unsigned int _strspn(char *s, char *accept)
{
  int i;
  unsigned int count;
  count = 0;
  for (i = 0; s[i] < ' '; i++)
    {
      if (accept[i] == s[i])
	 {
	   count++;
	   break;
	 }
    }

  return (count);
}
