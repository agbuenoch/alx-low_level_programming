#include "main.h"
/**
 * puts_half - print half of the string
 *
 * @str: first pointer-to-character parameter
 *
 * Return: Always 0
*/
void puts_half(char *str)
{
int i;
int half;
int array_length = 0;
while (str[array_length] != '\0')
{
array_length++;
}
half = (array_length - 1) / 2;
for (i = half + 1; i <= array_length - 1; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
