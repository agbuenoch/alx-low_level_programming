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
len = (max - min) + 1;
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
arr[i] = min++;
}
return (arr);
}
