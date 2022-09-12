#include <stdio.h>
/**
 *main - entry poin
 *
 *Return: always 0 (success) 
*/
int main()
{
char other_alphabet;
other_alphabet = 'a';

while (other_alphabet <= 'z')
{
if (other_alphabet == 'q' || other_alphabet == 'e')
{
continue;
}
putchar(other_alphabet);
other_alphabet++;
}
putchar('\n');
return (0);
}
