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
 if (argc < 1)
   {
     printf("%d\n", sum);
   }
 else
   {
     int j;
     for (i = 1; i < argc; i++)
       {
	 for (j = 0; j < i - 1; j++){
	 if (!(atoi(argv[j]) / 1))
	   {
	     printf("Error\n");
	     return (0);
	   }
	 else
	   {
	     sum += atoi(argv[i]);
	   }}
       }
   }
printf("%d\n", sum);
return (0);
}
