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
unsigned int i;
unsigned int j;

  j = 0;
  while (s1[j] != '\0')
    {
      j++;
    }

  for (i = 0; i <= n; i++, j++)
    {
      s1[j] = s2[i];
    }
  
  arr = malloc((sizeof(*arr) * (j * n)) + 1);
  if (arr == NULL)
    {
      return (NULL);
    }
  if ( (s1 == NULL || s2 == NULL))
    {
      s1 = s2 = "";
    }
 
  for (i = 0; i < j; i++)
    {
      arr[i] = s1[i];
      }
  /*
  while (*s1 != '\0')
    {
      *arr = *s1;
      arr++;
      s2++;
      }*/
  arr[j] = '\0';

  return (arr);
}
