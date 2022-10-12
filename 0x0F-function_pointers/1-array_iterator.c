#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  function that executes a function
 * given as a parameter on each element of an array
 *
 * @array: array of pointer-to-integer
 * @size: size_t integer
 * @action: pointer-to-function
 *
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL)
{
exit(EXIT_SUCCESS);
}/*
if (size == 0)
{
exit(EXIT_SUCCESS);
}*/
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
