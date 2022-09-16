#include "main.h"
/**
 * print_number - Using the "_putchar() function to print numbers in,
 * Tenth, Hundredth and Thousandth".
 *
 * @n: First parameter
 *
 * Return: Nothing.
 */
void print_number(int n)
{
  /*
  int arr_size[];
  arr_size = "n";
  */
  
    
  char val[4];
  val[4] = "n";
  
  if (n <= 9)
    {
      _putchar(n + 'n');
    }
  else if (n >= 10 && n <= 99)
    {
      _putchar((n / 10) + '0');
      _putchar((n % 10) + '0');
    }
  else if (n >= 100 && n <= 999)
    {
      int i;
      _putchar((n / 100) + '0');
      for (i = 1; i <= 1; i++) /* i != '\0' READS--> i NOT EQUAL TO EOF (End Of File)*/
	{
	  _putchar(val[1]);
	}
      _putchar((n % 10) + '0');
    }
  else
    {
      int i;
      _putchar((n / 1000) + '0');
      for (i = 1; i <= 2; i++)
	{
	  _putchar(val[1]);
	  _putchar(val[2]);
	}
      _putchar((n % 10) + '0');
    }
}
