#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
  int i = 0;
  if (n < 98)
    {
      for (i = 0; i <= 98; i++)
	{
	  printf("%d, ", i);
	}
    }
  else if (n > 98)
    {
      for (i = n; i >= 98; i--){
	printf("%d, ", i);
      }
    }
  else {
    printf("%d, ", n);
  }
}
