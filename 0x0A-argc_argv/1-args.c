#include <stdlib.h>
#include <stdio.h>
/**
 * main - print number of arguement passed to main function
 *
 * @argc: integer parameter
 * @argv: pointer-to-pointer-to-character parameter
 *
 * Return: zero
*/
int main (int argc, char *argv[])
{
  int i;
  for (i = 1; i <= argc; i++)
    ;
printf("%d\n", i);  
return (0);
}
