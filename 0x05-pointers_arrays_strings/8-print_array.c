#include "main.h"
#include <stdio.h>
/**
 * print_array - check the code
 *
 * @a: first pointer-to-integer parameter
 * @n: second parameter
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
for (n = 0; a[n] != '\0'; n++)
{
  printf("%d, ", a[n]);
}
 printf("\n");
}
