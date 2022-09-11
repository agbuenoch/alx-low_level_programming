#include <stdio.h>
/**
 *main - The entry point
 *
 *Return: Always return 0 for (Success)
*/
int main(void)
{
  char c;
  int i;
  long int li;
  long long int lli;
  float f;
  printf("Size of a char: %s bytes(s)", sizeof(c));
  printf("Size of an int: %d bytes(s)", sizeof(i));
  printf("Size of a long int: %d bytes(s)", sizeof(li));
  printf("Size of long long int: %d bytes(s)", sizeof(lli));
  printf("Size of a float: %f bytes(s)", sizeof(f))
  return (0)
}
