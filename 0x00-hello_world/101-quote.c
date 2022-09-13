#include <stdio.h>
/**
 *main - The entry poin of the program execution
 *
 *Return: Always return zero i.e success
 */
int main(void)
{
char myval[] ="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int counter = 0;
int len = sizeof(myval) / sizeof(myval[0]);
for (counter = 0; counter < len; counter++)
{
putchar(myval[counter]);
}
putchar('\n');
return (1);
}
