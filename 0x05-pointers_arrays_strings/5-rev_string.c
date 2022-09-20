#include "main.h"
/**
 * rev_string - print strings in reverse order
 *
 * @s: first pointer-to-character parameter
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i;
int array_length = 0;
while (s[array_length] != '\0')
array_length++;
for (i = array_length - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
