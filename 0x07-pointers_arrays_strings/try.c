#include <stdio.h>
#include <string.h>

  int main () {
    int len;
    const char str1[] = "ABC EFDD EFG 019874";
    const char str2[] = "ABCD";

    len = strspn(str1, str2);

    printf("Length of initial segment matching %d\n", len );

    return(0);
  }
