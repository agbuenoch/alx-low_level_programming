#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void)
{
char digits;
digits = 0x0;
while (digits < 16)
{
printf("%x", digits);
digits++;
}
printf("\n");
return (0);
}
