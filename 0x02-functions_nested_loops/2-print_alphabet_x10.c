#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int counter = 0;
while (counter < 10)
{
char val = 'a';
while (val <= 'z')
{
_putchar(val);
val++;
}
_putchar('\n');
counter++;
}
return;
}
