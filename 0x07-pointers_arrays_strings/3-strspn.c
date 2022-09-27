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
  int j;
  int count;
  count = 0;
  for (i = 0; s[i] != '\0'; i++)
    { 
      for (j = 0; accept[j] != '\0'; j++)
	{
	  if (s[i] == accept[i])
	 {
	   count++;
	   break;
	 }
	}
      if (s[i] != accept[i])
	{
	  continue;
	}
    }

  return (count);
}
