#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
  int row;
  row = 0;
  while (row <= 10){
    int col;
    col = 0;
    while (col <= 14)
      {
	_putchar(col + '0');
	col++;
      }
    row++;
    _putchar('\n');
  }
}
