#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 *
 * @min: first integer parameter
 * @max: second integer parameter
 *
 * Return: zero
*/
int *array_range(int min, int max)
{

  int *arr;
  int i;
  
  arr = malloc(sizeof(*arr) * max);

  for (i = min; i < max; i++)
    {
      arr[i] = i;
    }
  return (arr);    
}
