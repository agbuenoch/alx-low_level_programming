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
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
 for (; i < n; i++)
   {
     dest[i] = '\0';
   }
return (dest);
}
