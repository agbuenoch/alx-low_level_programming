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
  int this_char, comma, period;
  comma = period = 0;

  printf("Enter a COMMA or FULL-STOP symbol: ");
  this_char = getchar();
  while(this_char != EOF){
    if(this_char == ','){
      comma += 1;
    }
    
    if(this_char == '.'){
      period += 1;
    }
    /* printf("Enter a COMMA or FULL-STOP symbol: "); */
    this_char = getchar();
  }

  printf("Total Number of Comma: %d\n Total Number of Period: %d\n", comma, period);
  
  exit(EXIT_SUCCESS);
}
