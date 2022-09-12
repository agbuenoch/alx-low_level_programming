#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void)
{
char alphabeth;
alphabeth = 'a';
while(alphabeth <= 'z')
{
putchar(alphabeth);
alphabeth++;
}
return (0);
}
