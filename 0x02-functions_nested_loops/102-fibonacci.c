#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int first;
int second;
int next;
int counter;
first = 1;
second = 2;
counter = 0;
printf("1, 2, ");
while (counter <= 50)
{
next = first + second;
printf("%d", next);
if (counter < 50)
{
printf(", ");
}
first = second;
second = next;
counter++;
}
putchar('\n');
return (0);
}
