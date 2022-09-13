#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *main - the entry poin
 *
 *return: alsways return zero
 */
int main(void)
{
  char ch;
  ch = 'a';

  while(ch <= 'z'){
     printf("value: %d\n char: %c\n", ch, ch);
     ch = ch + 1;
  }

  exit(EXIT_SUCCESS);
}
