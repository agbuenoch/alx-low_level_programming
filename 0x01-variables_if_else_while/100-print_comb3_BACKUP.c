#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void) /*The main function*/
{
int x, y;
 
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





 
 /** 
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
