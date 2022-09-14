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
      col = 0x00;
      while (col <= 9)
	{
	  times = row * col;
	  _putchar(times + '0');
	  _putchar(',');
	  _putchar(' ');
	  col++;
	}
      _putchar('\n');
      row++;
    }
}
