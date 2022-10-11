#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: first parameter of type - pointer-to-struct dog
 * @name: second parameter - pointer-to-character
 * @age: third parameter of type - float
 * @owner: fourth parameter of type - pointer-to-character
 *
 * Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
  struct dog val;
  d = &val;
  /*d = malloc(sizeof(struct dog));*/
  if (d->name == NULL)
    {
      printf("(nil)\n");
    }
  else
    {
      d->name = name;
    }

  if (&d->age == NULL)
    {
      printf("(nil)\n");
    }
  else
    {
      d->age = age;
    }

  if (d->owner == NULL)
    {
      printf("(nil)\n");;
    }
  else
    {
      d->owner = owner;
    }
}
