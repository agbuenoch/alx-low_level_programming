#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
long int first;
long int second;
long int next;
int counter;
first = 1;
second = 2;
counter = 3;
printf("%lu, %lu, ", first, second);
while (counter <= 98)
{
next = first + second;
printf("%lu", next);
if (counter < 98)
{
printf(", ");
}
first = second;
second = next;
counter++;
}
printf("\n\n");
return (0);
}
