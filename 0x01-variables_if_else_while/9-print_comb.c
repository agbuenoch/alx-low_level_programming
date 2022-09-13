#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void) /*The main function*/
{
int digit;
digit = 0;
while (digit < 10)
{
putchar(digit + '0');
putchar(',');
putchar(' ');
digit++;
}
putchar('\n');
return (0);
}
