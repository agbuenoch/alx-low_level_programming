#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 *
 * @str: pointer-to-character parameter
 *
 * Return: pointer-to-character
*/
char *_strdup(char *str)
{
  char *arr;
  int i;  
 
  int j;
  for (j = 0; str[j] != '\0'; j++)
    {
      ;
    }
  if (str == NULL)
    {
      return (NULL);
    }
  if (j < 0)
    {
      return (NULL);
    }
  arr = malloc((j + 1) * sizeof(*arr));
  if (arr == NULL)
    {
      return (NULL);
    }
  
  for (i = 0; str[i] != '\0'; i++)
    {
      arr[i] = str[i];
    }
  return (arr);
}
