#include "main.h"
#include <stdio.h>
/**
 * puts2 - print all the even number
 *
 * @str: first pointer-to-character parameter
*/
void puts2(char *str)
{
  int i;
  for (i = 48; i <= '\0'; i++)
    {
      if (str[i] % 50 == 48)
	{
	  printf("%d\n", str[i]);
	}
    }
}
