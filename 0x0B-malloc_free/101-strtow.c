#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - function that splits a string into words
 *
 * @str: pointer-to-character parameter
 *
 * Return: pointer-to-pointer-character parameter
*/
char **strtow(char *str)
{
  char **arr;
  int count;
  count = 0;
  while (*str != '\0')
    {
      count++;
    }

  arr = malloc((count + 1) * sizeof(*arr));
  if (arr == NULL)
    {
      return (NULL);
    }
  
  return (arr);
}
