#include <stdio.h>
#include <stdlib.h>

struct coll {
  char * name = "Enoch";
  int age = 28;
  char *surname = "Agbu";
  float height = 7.3;
};

int main(void)
{
  struct coll var;

  printf("%s\n", var);

  return (0);
}
