#include "main.h"
/**
 * *_strncpy - A function that copies string
 *
 * @dest: first pointer-to-character parameter
 * @src: second pointer-to-character parameter
 * @n: third integer parameter
 *
 * Return: returns pointer-to-character
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] < n; i++)
{
dest[i] = src[i];
}
return (dest);
}