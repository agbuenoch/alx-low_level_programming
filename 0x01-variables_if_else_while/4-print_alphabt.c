#include <stdio.h>
/**
 * main - entry poin
 *
 * Return: always 0 (success) 
*/
int main(void)
{
int letter;
 for (letter = 'a'; letter <= 'z'; letter++)
{
  if (letter == 'e' || letter == 'q')
    {
      continue;
      putchar(letter + '0');
}
putchar('\n');
return (0);
}
