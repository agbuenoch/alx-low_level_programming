#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two positive numbers.
 *
 * @mul: first integer parameter
 * @num1: second integer parameter
 * @num2: third integer parameter
*/
int rec(int val)
{
  int res;  
  rec(val / 10);
  res = val % 10;

  return (res);
}
int main(int argc, char **argv)
{
  int n;
  int i;
  int mul;
  mul = 1;
  char msg[] = "Error\n";

  if (atoi(*argv + 1) >= '0' && atoi(*argv + 1) <= 9)
    {
    while (atoi(*argv + 1) <= 9)
    {
      mul *= atoi(*argv + 1);
      while (atoi(*argv + 1) > 9)
	{
	  n = rec(atoi(*argv + 1));
	    mul *= n; 
	    }
      
    }
    }
  else
    {
      for (i = 0; msg[i] != '\0'; i++)
	{
	  _putchar(msg[i]);
	}
      _putchar('\0');
    }
  return (mul);
}
