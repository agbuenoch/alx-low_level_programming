#include <main.h>
/**
 * main - entry point
 *
 * Return: On success 1.
 */
int main(void)
{
char val[] = "_putchar";
int i;
int len = sizeof(val) / sizeof(val[0]);
for (i = 0; i < len - 1; i++)
{
_putchar(val[i]);
}
_putchar('\n');
return (0);
}
