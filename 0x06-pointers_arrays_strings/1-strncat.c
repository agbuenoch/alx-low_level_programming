#include "main.h"
/**
 * *_strncat - concatenate two string
 *
 * @dest: first pointer-to-character parameter
 * @src: second pointer-to-character parameter
 * @n: third integer parameter
 *
 * Return: returns pointer-to-character.
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int length = 0;
while (dest[length] != '\0')
{
length++;
}
for (i = 0; i < n && src[i] != '\0'; i++, length++)
{
dest[length] = src[i];
}
/*Put a NULL TERMINATOR at the end of the string*/
for ( ; i < n; i++)
{
dest[length] = '\0';
}
return (dest);
}
