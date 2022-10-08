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
  int i;
  int j;

  j = 0;
  while (s1[j] != '\0')
    {
      j++;
    }

  arr = malloc(sizeof(*arr) * n);
  if (arr == NULL)
    {
      return (NULL);
    }
  if ( (s1 == NULL || s2 == NULL))
    {
      s1 = s2 = "";
    }
  
  for (i = 0; s2[i] != '\0'; i++, j++)
    {
      s1[j] = s2[i];
    }
  for (i = 0; i < j; i++)
    {
      arr[i] = s1[i];
    }
  arr[j] = '\0';

  return (arr);
}
