#include <stdio.h>
#include <stdlib.h> /*the constant 'EXIT_SUCCESS is found here'*/
int main (int argc, char *argv[])
{
  int count;

  printf("This program was called with: \"%s\"\n\n", argv[0]);
  
  for (count = 1; count <= argc; count++)
    {
      printf("argv[%d] = %s\n", count, argv[count]);
    }

  return (EXIT_SUCCESS);
}
