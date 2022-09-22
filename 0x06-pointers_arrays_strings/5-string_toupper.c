#include "main.h"
/**
 * *string_toupper - convert lowercase to uppercase
 *
 * @lcase: first pointer-to-character parameter
 *
 * Return: returns pointer-to-character
*/
char *string_toupper(char *lcase)
{
int i;
for (i = 0; lcase[i] != '\0'; i++)
{
if (lcase[i] >= 'a' && lcase[i] <= 'z')
{
lcase[i] = lcase[i] - 32;
}
}
return (lcase);
}
