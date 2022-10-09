#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first pointer-to-character
 * @s2: second pointer-to-character
 * @n: integer parameter
 *
 * Return: pointer-to-character
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

  char *arr;
  unsigned int j;
  unsigned int i;
  j = 0;
  i = 0;

  while (*s1 != '\0')
    {
      j++;
      s1++;
    }
  while (*s2 != '\0')
    {
      i++;
      s2++;
    }
  
  arr = malloc(sizeof(*arr) * (j + 1 + n));
  if (arr == NULL)
    {
      return (NULL);
    }
  if ((s1 == NULL && s2 == NULL))
    {
      s1 = s2 = "";
    }
  while (*s1 != '\0')
    {
      *arr = *s1;
      arr++;
      s1++;
      }
  if (n >= (i))
    {
      *arr = *s2;
      arr++;
      s2++;
    }
  else
    {
      while (n--)
	{
	  *arr = *s2;
	  arr++;
	  s2++;
	}
    }
  *arr = '\0';

  return (arr);
}
