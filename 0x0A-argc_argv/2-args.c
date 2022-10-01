#include <stdio.h>
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
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
