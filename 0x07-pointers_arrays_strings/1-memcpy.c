#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: first pointer-to-character
 * @src: second pointer-to-character
 * @n: third parameter
 *
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return dest;
}
