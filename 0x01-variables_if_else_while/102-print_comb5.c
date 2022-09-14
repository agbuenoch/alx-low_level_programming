#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void){
  int row;
  row = 0;
  while (row <= 99)
    {
      int col;
      col = 0;
      while (col <= 99)
	{
	  putchar(col + '0');
	  putchar(' ');
	  if (col < 99)
	    {
	      putchar(" ");
	      putchar(",");
	    }
	  col++;
	}
      row++;
    }
}
