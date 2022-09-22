#include "main.h"
/**
 * *cap_string - capitalised first character of all words
 *
 * @capital: first pointer-to-character parameter
 *
 * Return: returns pointer-to-character 
*/
char *cap_string(char *capital)
{
  int i;
  for(i = 0;  capital[i] != '\0'; i++) {
    if ((i == 0 && capital[i] != ' ') || (capital[i] != ' ' && capital[i-1] == ' ')) {
      if(capital[i] >= 'a' && capital[i] <= 'z') {
	capital[i] = (char)(('A'-'a') + capital[i] );
      }
    } else if (capital[i] >= 'A' && capital[i] <= 'Z') {
      capital[i] = (char)(capital[i] + ('a' - 'A'));
    }
  }
  return (capital);
}
