#include "main.h"
/**
 * *_strcpy - copy from one string to another
 *
 * @*dest: first pointer-to-character parameter
 * @*src: second pointer-to-character parameter
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
  int i;
  for (i = 0; src[i] <= '\0'; i++)
    {
      dest[i] = src[i];
    }
  dest[i] = '\0';
  return (dest);
}
