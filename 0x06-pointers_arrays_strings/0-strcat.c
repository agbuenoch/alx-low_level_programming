#include "main.h"
/**
 * *_strcat - Joins one string to another string
 *
 * @dest: first pointer-to-character parameter
 * @src: second pointer-to-character parameter
 *
 * Return: return a pointer-to-character.
*/
char *_strcat(char *dest, char *src)
{
int i;
int length = 0;
while (dest[length] != '\0')
{
length++;
}
for (i = 0; src[i] != '\0'; i++, length++)
{
dest[length] = src[i];
}
/*Make sure that the string is NULL terminated*/
dest[length] = '\0';
return (dest);
}
