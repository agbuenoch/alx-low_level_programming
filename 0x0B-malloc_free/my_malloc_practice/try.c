#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n;
  char *ar;

  n = 5;
  ar = malloc(n * sizeof(char));

  printf("size of array-ar[]: %ld\n", sizeof(ar));
}
