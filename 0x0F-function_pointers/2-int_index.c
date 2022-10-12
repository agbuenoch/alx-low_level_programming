#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer.
 *
 * @array: pointer-to-integer
 * @size: integer parameter
 * @cmp: pointer-to-function parameter
 *
 * Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
  int i;
  int val;
  
  if (size <= 0)
    {
      return (-1);
    }
  else
    {
      for (i = 0; i < size; i++)
	{
	 val =  cmp(array[i]);
	}
    }
  return (val);
}
