#include "main.h"
/**
 * *_strcat - Joins one string to another string
 *
 * @dest: first pointer-to-character parameter
 * @src: second pointer-to-character parameter
 *
 * Return: return a pointer-to-character.
*/
char *_strcat(char *dest, char *src)
{
  int i;
  int length = 0;
  while (dest[length] != '\0')
    {
      length++;
    }

  for (i = 0; src[i] != '\0'; i++)
    {
      while (dest[length] != '\0')
	{
	  dest[length] = src[i];
	}
    }
  return (dest);
}
