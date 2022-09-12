#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void)
{
char digits;
digits = 0;
while (digits < 10)
{
printf("%d", digits);
digits++;
}
printf("\n");
return (0);
}
