#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void) /*The main function*/
{
int x[10];
int y[10];

 x[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
 y[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
 
 for (countA = x[0]; countA < x.length, countA++)
   {
     for (countB = y[0]; countB < y.length, countB++)
       {
	 if ((x[countA] != y[countB]) || !(x[countA]y[countB] == y[countB]x[countA]))
	   {
	     putchar(x[countA]y[countB]);
	   }
       }
   }

/**
for(x = 0; x < 10; x++)
   {
     for(y = 0; y < 10; y++)
       {
	 if (!(x == y) || (y < x))
	   {
	 putchar(x + '0');
	 putchar(y + '0');
	 if ((x + y) <= 17)
	   {
	     putchar(',');
	     putchar(' ');
	   }
	   }
       }
   }
 putchar('\n');
 return (0);
}







  
while (digit < 10)
{
putchar(digit + '0');
if (digit < 9)
{
putchar(',');
putchar(' ');
}
digit++;
}
putchar('\n');
return (0);
}
 */
