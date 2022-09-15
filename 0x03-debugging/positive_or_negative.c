#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more headers goes there */
/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void) /*This is the main function*/
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
