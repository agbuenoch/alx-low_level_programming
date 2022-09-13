#include <stdio.h>
/**
 *main - The entry poin of the program execution
 *
 *Return: Always return zero i.e success
 */
int main(void)
{
char myvalues[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int counter = 0;

int len = sizeof(myvalues)/sizeof(myvalues[0]);
 
for (counter = 0; counter < len; counter++){
putchar(myvalues[counter]);
}

putchar('\n');
  
return (1);
}
