#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
  char row;
  row = 0x00;
  while (row <= 0x09)
    {
      char col;
      char times = 0x00;
      col = 0x0;
      while (col <= 0x9)
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
