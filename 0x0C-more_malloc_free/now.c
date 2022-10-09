#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *my_strncat(char *s1, char *s2, unsigned int n)
{
  /*Pointer should not null pointer*/
  if((s1 == NULL) && (s2 == NULL))
    return NULL;
  /*Create copy of s1*/
  char *dest = s1;
  /*Find the end of the destination string*/
  while(*dest != '\0')
    {
      dest++;
    }
  /*Now append the source string characters*/
  /*until not get null character of s2 or n != 0*/
  while (n--)
    {
      if (!(*dest++ = *s2++))
	{
	  return s1;
	}
    }
  /*Append null character in the last*/
  *dest = '\0';
  return s1;
}

int main()
{

  char *arr;
  arr = my_strncat("Agbu", "Enoch", 3);

  printf("%s\n", arr);
}
