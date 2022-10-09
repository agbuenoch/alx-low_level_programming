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
unsigned int i;
unsigned int j;

  j = 0;
  while (s1[j] != '\0')
    {
      j++;
    }
  for (i = 0; i < n; i++, j++)
    {
      s1[j] = s2[i];
    }
  s1[j] = '\0';  
  return (s1);
}

int main()
{
  char *col;

  col = string_nconcat("Agbu", "Enoch", 3);

  printf("%s\n", col);
}
