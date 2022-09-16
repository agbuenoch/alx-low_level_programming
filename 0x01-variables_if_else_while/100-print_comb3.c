#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void){

  int num1, num2;
  /*ASCII code for 0*/
  num1 = 48;

  while (num1 <= 57)
    {
      num2=48;
      while (num2 <= 57)
	{
	  putchar(num1);
	  putchar(num2);
	  if (num2 < 57)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	  num2++;
	}
      num1++;
    }
  putchar('\n');
  return (0);

}
