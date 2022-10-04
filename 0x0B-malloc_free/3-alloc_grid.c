#include "main.h"
#include "stdio.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 *
 * @width: first integer parameter
 * @height: second integer parameter
 *
 * Return: pointer-to-integer
*/
int **alloc_grid(int width, int height)
{
  int **arr;
  
  int i;
  int j;
  
  if (width <= 0 || height <= 0)
    {
      return (NULL);
    }
  arr = malloc(width * height * 8);
  if (arr == NULL)
    {
      return (NULL);
    }
  /*
  else
    {
      for (i = 0; i < (width * height); i++)
	{
	  arr[i] = 0;
	}
    }
  */
  for (i = 0; i < width; i++)
    {
      for (j = 0; j < height; j++)
	{
	  *arr = 0;
	}
    }
  return (arr);
}
