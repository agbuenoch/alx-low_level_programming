#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more headers goes there */
/**
 *positive_or_negative - entry point
 *
 *@n: first parameter
 *
 *Return: always 0 (success)
 */
int positive_or_negative(int n) /*This is the main function*/
{
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
