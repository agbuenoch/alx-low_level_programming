#include <stdlib.h>
#include <limits.h>

/**
 * main - Demonstrating segmentation fault
 *
 * Return: 0.
 */
int main(void)
{
  char *val;
    while (1)
      {
	val = malloc(INT_MAX);  /*This memory allocation will not allocate*/
	val[0] = 'H';
      }
  return (0);
}
