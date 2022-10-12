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
 * In previous example, I "typedef struct dog" to just "dog_t"
 * That is why the below code is using data type: "dog_t"
 * Return: pointer-to-dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *ptr;
  ptr = malloc(sizeof(dog_t));
  if (ptr == NULL)
      return (NULL);
  ptr->name = name;
  ptr->age = age;
  ptr->owner = owner;
  return (ptr);
}
