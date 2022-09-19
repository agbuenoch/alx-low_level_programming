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
int counter = 0;
while (s[counter] != '\0')
{
counter++;
}
return (counter);
}
