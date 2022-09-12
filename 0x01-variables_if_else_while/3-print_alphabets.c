#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
*/
int main(void)
{
char lower_case;
char upper_case;

lower_case = 'a';
upper_case = 'A';
while (lower_case <= 'z' && upper_case <= 'Z')
{
putchar(lower_case);
lower_case++;
}

while(upper_case <= 'Z')
{
putchar(upper_case);
upper_case++;
}
putchar('\n');
return (0);
}
