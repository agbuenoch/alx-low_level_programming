#include "main.h"
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
  dog_t *val;
  val = malloc(sizeof(dog_t));
  if (val == NULL)
    {
      return NULL;
    }

  val->name = name;
  val->age = age;
  val->owner = owner;

  return (val);
}
