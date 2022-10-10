#ifndef DOG_H
#define DOG_H
/**
 * struct dog - attributes of a dog
 *
 * @name: first pointer-to-character parameter
 * @age: second parameter
 * @owner: second pointer-to-character parameter
 *
 * DESCRIPTION: Dogs have four legs and it is a
 * friendly domestic animal.
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*#ifndef DOG_H*/
