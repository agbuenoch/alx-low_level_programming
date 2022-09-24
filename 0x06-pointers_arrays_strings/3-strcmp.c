#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: first pointer-to-character parameter
 * @s2: second pointer-to-character parameter
 *
 * Return: returns an integer
*/
int _strcmp(char *s1, char *s2)
{
int i;
 for (i = 0; s2[i] != '\0' && s1[i] != '\0'; i++)
{
if (s1[i] < s2[i])
{
  _putchar(i);
 }
else if (s1[i] > s2[i])
{
  _putchar(i);
}
else
{
  _putchar(0);
}
 }
 return (0);
}
