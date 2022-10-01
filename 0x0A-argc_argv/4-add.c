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
int sum = 0;
if (argc > 1 && )
{
for (i = 1; i < argc; i++)
sum += atoi(argv[i]);
printf("%d\n", sum);
}
 else
   {
     printf("%d\n", sum);
   }
return (0);
}
