#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer-to-struct dog 
*/
void print_dog(struct dog *d)
{
  d = malloc(sizeof(struct dog));
  if (d == NULL)
    {
      ;
    }
  if ((*d).name == NULL || d->owner == NULL)
    {
      printf("nill");
    }

  printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, (*d).age, d->owner);
}
