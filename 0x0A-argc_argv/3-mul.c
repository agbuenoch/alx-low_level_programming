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
int i;
int mul = 1;
if (argc == 1)
{
printf("Error\n");
}
if (argc > 1)
{
for (i = 1; i < argc; i++)
mul *= atoi(argv[i]);
printf("%d\n", mul);
}
return (0);
}
