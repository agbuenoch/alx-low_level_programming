#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: first integer parameter
 * @size: second integer parameter
 *
 * Return: nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
  int *arr;
  

  arr = malloc(nmemb * size);
  if (arr == NULL)
    {
      return (NULL);
    }
  else
    {
      while (*arr != '\0')
	{
	  *arr++ = 0;
	}
    }
  if (nmemb == 0 || size == 0)
    {
      return (NULL);
    }
  while (nmemb--)
    {
      *arr++ = nmemb;
    }
  return (arr);
}
