#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void) /*The main function*/
{
int digit_char;
digit_char = 0;
while (digit_char < 10)
{
putchar(digit_char + '0');
putchar(',');
putchar(' ');
digit_char++;
}
putchar('\n');
return (0);
}
