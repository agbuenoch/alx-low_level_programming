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
int main (int argc, char **argv)
{
  (void) argv;
  printf("%d\n", argc);
  return (0);
}
