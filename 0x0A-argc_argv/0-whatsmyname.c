#include <stdio.h>
/**
 * main - print name of the program itself
 *
 * @argc: number of arguement in the command line
 * @argv: array of pointer-to-character
 *
 * Return: zero
*/
int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
