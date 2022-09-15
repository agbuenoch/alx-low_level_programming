#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
  int row;
  row = 0;
  while (row <= 9)
    {
      int col;
      int times = 0;
      col = 0;
      while (col <= 9)
	{
	  times = row * col;
	  if ( row <= 9 && col <= 9)
	    {
	      _putchar(times + '0');
	    }
	  else
	    {
	      /*	_putchar((row / 10) + '0'); */
	      _putchar((col % 10) + '0');
	    }
	  _putchar(',');
	  _putchar(' ');
	  col++;
	}
      _putchar('\n');
      row++;
    }
}
