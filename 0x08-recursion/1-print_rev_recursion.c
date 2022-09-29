#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print a string in reverse
 *
 * @s: pointer-to-character parameter
 *
 * Return: zero
*/
void _print_rev_recursion(char *s)
{
  if (*s < 0){
    _putchar('\n');
    return;
  }
  if (*s == '\0'){
    printf("%c", *s);
  _print_rev_recursion(s--);
  }
}
