#include "main.h"
/**
 * times_table - print a multiplication time from 0 to 9
 *
 * Return: Always 0.
 */
void times_table(void)
{
  int row;
  row = 48; /* row = 0 but ASCII VALUE for 0 = 48*/
  while (row <= 57) /*row <= 9 but ASCII VALUE for 9 = 57*/
    {
      int col;
      col = 48; /*col = 0 but ASCII VALUE for 0 = 48*/
      while (col <= 57) /*col <= 9 but ASCII VALUE for 9 = 57*/
	{
	  _putchar(row * col);
       
	  if (col < 57) /*col < 9 but ASCII VALUE of 9 = 57*/
	    {
	      _putchar(',');
	      _putchar(' ');
	    }
	  col++;
	}
      _putchar('\n');
      row++;
    }
}
