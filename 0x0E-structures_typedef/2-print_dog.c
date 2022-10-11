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
  /* d = malloc(sizeof(struct dog));*/
  if (d == NULL)
    {
      ;
      printf("\n");
    }
  if (&d->name == NULL)
    {
      printf("(nil)\n");
    }
  if (&d->age == NULL)
    {
      printf("(nil)\n");
    }
  if (&d->owner == NULL)
    {
      printf("(nil)\n");
    }
  
printf("Name: %s\n", d->name);
 printf("Age: %.6f\n", d->age);
 printf("Owner: %s\n", d->owner);
    
}
