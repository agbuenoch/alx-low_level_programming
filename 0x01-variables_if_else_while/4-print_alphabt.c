#include <stdio.h>
/**
 *main - entry poin
 *
 *Return: always 0 (success) 
*/
int main()
{
char C;
C = 'a';
 for (C = 'a'; C <= 'z'; C++)
{
  if (C != 'e' || C != 'q')
    {
      putchar(C + '0');
}
putchar('\n');
return (0);
}
