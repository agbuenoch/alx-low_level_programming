#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * 
 * @name: pointer-to-character
 * @age: float parameter
 * @owner: pointer-to-character
 *
 * Return: pointer-to-dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t val;
  dog_t *ptr = &val;
  if (ptr == NULL)
    {
      return NULL;
    }
  else
    {
      ptr->name = name;
      ptr->age = age;
      ptr->owner = owner;
    }
  return (ptr);
}
