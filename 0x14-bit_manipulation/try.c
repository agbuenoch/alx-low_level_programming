#include <stdio.h>
#include <stdlib.h>
int powa(int n)
{
  int i;
  int mult;

  mult = 1;

  if (n == 0)
    {
      return (mult);
    }
  else
    {
      for (i = 0; i < n; i++)
	{
	  mult = mult * 2;
	}
    }
  return (mult);
}
int main(void)
{
  int count;
  int i;
  int ans;
  int j;

  j = 0;
  ans = 0;
  count = 0;
  
  char *b = "101";

  while (*b)
    {
      j++;
      b++;
    }
  
  for (i = 0; b[i] != '\0'; i++)
    {
      ans = ans + (b[i] * (powa(j--)));
    }

  printf("Answer: %d\n", ans);
}
