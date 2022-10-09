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

  unsigned int i;
  
  int *arr;

  arr = malloc(nmemb * size);
  if (arr == NULL)
    {
      return (NULL);
    }
  else
    {
      for (i = 0; i < nmemb; i++)
	  arr[i] = 0;
    }
  if (nmemb == 0 || size == 0)
      return (NULL);
  for (i = 0; i < nmemb; i++)
      arr[i] = i+1;
  return (arr);
}
