#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  int r;
  int a;
  int b;
  int e;

 a =  print_last_digit(98);
  b = print_last_digit(0);
  r = print_last_digit(-1024);

  e = print_last_digit(1);
  
  _putchar('0' + a);
  _putchar('\n');

  _putchar('0' + b);
  _putchar('\n');

  _putchar('0' + r);
  _putchar('\n');

  _putchar('e' + e);
  _putchar('\n');


  
  return (0);
}
