#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print all arguement passed to main function
 *
 * @argc: integer parameter
 * @argv: pointer-to-pointer array parameter
 *
 * Return: zero
*/
int main(int argc, char *argv[])
{
int *integer_array;
 int sum;
 sum = 0;
 integer_array = malloc(argc * sizeof(int));
 /* int j;
 int count;
 count = 0;
 int i;*/
if (argc < 1)
  {
    printf("%d\n", sum);
  }
else
  {
    int i;
    int j;
    int count;
    /*int sum;
      sum = 0;*/
    count = 0;
    
    for (i = 1; i < argc; i++)
      {
	integer_array[i] = atoi(argv[i]);
      }
    
    while (*integer_array)
      {
	count++;
	integer_array++;
      }

    for (j = 0; j < count; j++)
      {
	sum += integer_array[j];
      }
  }
    printf("%d\n", sum);
return (0);
}
