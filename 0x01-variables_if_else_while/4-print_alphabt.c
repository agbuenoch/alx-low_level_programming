#include <stdio.h>
/**
 *main - entry poin
 *
 *Return: always 0 (success) 
*/
int main()
{
char other_alphabet;

/**
 *char exclude_alphabet_q;
 *
 *char exclude_alphabet_e;
 */

other_alphabet = 'a';
/**
 *exclude_alphabet_q = 'q';
 *
 *exclude_alphabet_e = 'e';
 */ 

while (other_alphabet != 'q' && other_alphabet != 'e')
{
if (other_alphabet <= 'z'){
putchar(other_alphabet);
other_alphabet++;
}
}
putchar('\n');
return (0);
}
