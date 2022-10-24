#include <stdio.h>
void __attribute__((constructor)) first(void);
/**
 * first - prints a string
 *
 * Return: always zero
*/
void first(void)
{
printf("You're beat! and yet, you must allow,\nI bore my");
printf("house upon my back!\n");
}
