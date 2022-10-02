#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguement passed to main function
 *
 * @argc: integer parameter
 * @argv: pointer-to-pointer array parameter
 *
 * Return: zero
*/
int main(int argc, char **argv)
{
if (argc > 1)
{
int i;
long int mul;
mul = 1;
for (i = 1; i < argc; i++)
mul *= atoi(argv[i]);
printf("%d\n", mul);
}
else
{
printf("Error\n");
}
return (0);
}
