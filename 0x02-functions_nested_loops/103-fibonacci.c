#include <stdio.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{

  long int coll;
  coll = fib(13);
    printf(coll);
  return (0);
}

long int fib(int num)
{
  long int first;
  long int second;
  int counter;
  long int res[num];
  
  first = 1;
  second = 2;
  counter = 3;
  res[] = {'1', '2'};
  
  while (counter <= num)
    {
      long int next;
      next = first + second;
      res[] = printf("%lu, ", next);

      first = second;
      second = next;
      counter++;
    }
    return res;
}
