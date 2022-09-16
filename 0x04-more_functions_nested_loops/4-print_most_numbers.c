#include "main.h"
/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int counter;
counter = 0;
while (counter <= 9)
{
if (counter == 2 && counter == 4)
{
continue;
}
_putchar(counter + '0');
counter++;
}
_putchar('\n');
}
