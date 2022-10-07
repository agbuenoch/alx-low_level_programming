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
 int len;

 i = 0;
 len = max - min;
 
arr = malloc(sizeof(int) * len);
if (arr == NULL)
{
return (NULL);
}
if (min > max)
{
return (NULL);
}

 for (i = 0; i < len; i++)
{
  if (arr[i] <= max)
    {
      arr[i] = min++;
    }
}
/*
 while (i <= max)
   {
     arr[i] = min;
     min++;
     } */
return (arr);
}
