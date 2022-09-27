#include "main.h"
/**
 * _strchr -  locates a character in a string
 *
 * @s: first pointer-to-character parameter
 * @c: second parameter
 *
 * Return: pointer-to-parameter s.
*/
char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
return (s);
}
} while (*s++);
return (0);
}
