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
 i = 0;
 
arr = malloc(sizeof(*arr) * max);
if (arr == NULL)
{
return (NULL);
}
if (min > max)
{
return (NULL);
}

 for (i = min; arr[i] <= (max - min); i++)
{
  arr[i] = i;
}
/*
 while (i <= max)
   {
     arr[i] = min;
     min++;
     } */
return (arr);
}
