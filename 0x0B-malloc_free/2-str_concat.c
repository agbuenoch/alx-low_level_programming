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
  int i;
  int j;

  int a;
  int b;
  
  char *arr;

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

  arr = malloc(((i + 1) + (j + 1)) * sizeof(*arr));

  for (a = 0; s1[a] != '\0'; a++)
    {
      arr[a] = s1[a];
    }
  arr[a] = '\0';
  for (b = 0; s2[b] != '\0'; b++, i++)
    {
      s1[i] = s2[b];
    }
  arr[b] = '\0';
  return (arr);
}
