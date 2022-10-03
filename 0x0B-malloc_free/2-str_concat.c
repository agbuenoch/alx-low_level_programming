#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first pointer-to-character parameter
 * @s2: second pointer-to-character parameter
 *
 * Return: pointer-to-character parameter
*/
char *str_concat(char *s1, char *s2)
{
  char *arr;
  int i;
  int j;

  int a;
  int index;
  index = 0;

  if (s1 == NULL)
    {
      s1 = "";
    }
  if (s2 == NULL)
    {
      s2 = "";
    }
  
  for (i = 0; s1[i] != '\0'; i++)
    {
      ;
    }
  for (j = 0; s2[j] != '\0'; j++)
    {
      ;
    }
  
  arr = malloc(((i + j) + 1) * sizeof(*arr));
  if (arr == NULL)
    {
      return (NULL);
    }
  for (a = 0; s1[a] != '\0'; a++, index++)
    {
      arr[index] = s1[a];
    }

  for (a = 0; s2[a] != '\0'; a++, index++)
    {
      arr[index] = s2[a];
    }
  arr[index] = '\0';
  return (arr);
}
