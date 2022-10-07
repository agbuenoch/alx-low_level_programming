#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc 
 *
 * @b: integer parameter
 *
 * Return: noting
*/
void *malloc_checked(unsigned int b)
{
  void *arr;

  arr = malloc(b);

  if (arr == NULL)
    {
      printf("98");
    }
  
  return arr;
}
