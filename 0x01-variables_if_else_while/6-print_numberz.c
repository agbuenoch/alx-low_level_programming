#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void) /*The main function*/
{
char digit_char;
digit_char = '0';
while (digit_char < '10')
{
putchar(digit_char);
digit_char++;
}
putchar('\n');
return (0);
}
