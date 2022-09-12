#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void) /*The main function*/
{
char alphabet;
alphabet = 'z';
while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
