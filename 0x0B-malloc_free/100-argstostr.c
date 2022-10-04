#include "main.h"
#include "stdio.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: innteger parameter
 * @av: pointer-to-pointer-to-character parameter
 *
 * Return: pointer-to-character
*/
char *argstostr(int ac, char **av)
{
  int i;
  char *arr;
  if (ac == 0 || av == NULL)
    {
      return (NULL);
    }
  
  arr = malloc(ac * sizeof(*arr));
  if (arr == NULL)
    {
      return (NULL);
    }

  for (i = 0; i < ac; i++)
    {
      arr[i] = av[i];
	_putchar('\n');
    }
  return (arr);
}
