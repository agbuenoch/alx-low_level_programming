#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function that frees dogs.
 *
 * @d: pointer-to-dog_t
 *
 * Return: nothing
*/
void free_dog(dog_t *d)
{
dog_t val;
d = &val;
if (d != NULL)
{
free(d);
}
}
