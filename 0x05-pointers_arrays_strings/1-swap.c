#include "main.h"
/**
 * swap_int - check the code
 *
 * @a: first pointer-to-integer parameter
 * @b: second pointer-to-integer parameter
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
