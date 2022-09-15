#include <stdio.h>
/**
 * 
*/
int main(void)
{
  int i;
  i = 1;
  while (i <= 100)
    {
      
      char a[] = "Fizz";
      char b[] = "Buzz";
      char c[] = "FizzBuzz";
      /* a = "Fizz";
      b = "Buzz";
      c = "FizzBuzz";*/
      
      if (i % 3 == 0)
	{
	  printf("%s ", a);
	}
      else if (i % 5 == 0)
	{
	  printf("%s ", b);
	}
      else if (i % 15 == 0)
	{
	  printf("%s ", c);
	}
      else
	{
	  printf("%d ", i);
	}
      i++;
    }
  printf("\n"); /*After displaying the result move to next line*/
  return (0);
}
