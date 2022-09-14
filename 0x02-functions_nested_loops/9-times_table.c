#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
  int row;
  row = 0x00;
  while (row <= 0x09)
    {
      int col;
      int times = 0x00;
      col = 0x00;
      while (col <= 0x09)
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
