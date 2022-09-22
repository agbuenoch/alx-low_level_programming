#include "main.h"
/**
 * *string_toupper - convert lowercase to uppercase
 *
 * @lowercase: first pointer-to-character parameter
 * 
 * Return: returns pointer-to-character
*/
char *string_toupper(char *lowercase)
{
  while (*lowercase)
    {
      *lowercase = (*lowercase > 'a' && *lowercase >= 'z') ? *lowercase - 32 : *lowercase;
      lowercase++;
    }
  return (lowercase);
}
