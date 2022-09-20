#include "main.h"
/**
 * puts2 - print all the even number
 *
 * @str: first pointer-to-character parameter
*/
void puts2(char *str)
{
  int i;

  for (i = 0; i != '\0'; i++)
    {
      if (str[i] % 2 == 0)
	  _putchar('a');
    }
}
