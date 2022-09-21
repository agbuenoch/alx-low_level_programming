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
  int array_length;
  while (dest[array_length] != '\0')
    {
      array_length++;
    }

  for (i = 0; src[i] != '\0'; i++)
    {
  
      while (dest[array_length - 1] != '\0')
	{
	  dest[array_length - 1] = src[i];
	  array_length++;
	}

    }
  
  return (dest);
}
