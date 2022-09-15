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
            
      if (i % 3 == 0)
	{
	  printf("Fizz ");
	}
      else if (i % 5 == 0)
	{
	  printf("Buzz ");
	}
      else if (i % 15 == 0)
	{
	  printf("FizzBuzz ");
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
