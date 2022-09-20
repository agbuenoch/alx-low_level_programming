#include "main.h"
/**
 * puts2 - print all the even number
 *
 * @str: first pointer-to-character parameter
*/
void puts2(char *str)
{
  int i;
  int counter = 0;
  while (str[counter] != '\0')
    counter++;
  
  for (i = 0; i <= counter; i++)
    {
      if (str[i] % 2 == 0)
	{
	  _putchar(str[i]);
	}
    }
  _putchar('\n');
}
