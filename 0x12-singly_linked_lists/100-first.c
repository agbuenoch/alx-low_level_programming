#include <stdio.h>
void __attribute__((constructor)) first(void);
/**
 * first - prints a string
 *
 * Return: always zero
*/
void first()
{
printf("You're beat! and yet, you must allow,\nI bore my \
house upon my back!\n");
}
