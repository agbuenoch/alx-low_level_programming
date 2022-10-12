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

  
      for (i = 0; i < size; i++)
	{
	  if (cmp(array[i]))
	    {
	      val = i;
	    }
	  else
	    {
	      return (-1);
	    }
	}
   
  return (val);
}
