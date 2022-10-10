#include "dog.h"
#include <stdio.h>
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
struct dog *var = d;
var->name = name;
var->age = age;
var->owner = owner;
}
