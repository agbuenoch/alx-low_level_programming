#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of the array
 * @c: parameter that holds character
 *
 * Return: pointer-to-character
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned  int i;
if (size == 0)
{
return (NULL);
}
arr = malloc(size * sizeof(*arr));
if (arr == NULL)
{
return (NULL);
}
if (c == sizeof(int))
{
c = 'c';
}
for (i = 0; i < size - 1; i++)
{
arr[i] = c;
}
return (arr);
}
