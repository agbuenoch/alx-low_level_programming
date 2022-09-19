#include "main.h"
/**
 * _strlen - check the code
 *
 * @s: first pointer-to-character
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int counter;
for (counter = 0; s[counter] != '\0'; counter++);
return (counter);
}
