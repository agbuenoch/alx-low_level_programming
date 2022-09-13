#include "main.h"
/**
 * main - check the code.
 *
 * c parameter is used during
 * function call.
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
  if (n > 0)
    {
      _putchar('+');
      _putchar(',');
      _putchar(' ');
      _putchar('1');
    }
  if (n == 0)
    {
      _putchar('0');
      _putchar(',');
      _putchar(' ');
      _putchar('0');
    }
  if (n < 0)
    {
      _putchar('-');
      _putchar('1');
      _putchar(',');
      _putchar(' ');
      _putchar('-');
    }
}
