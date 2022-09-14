#include <stdio.h>
/**
 * clock_program - check the code (MY WORK)
 *
 * Return: Always 0.
 */
void clock_program(void){
  int hour;
  hour = 00;  
  
  while (hour <=23)
    {
      int min;
      min = 00;
      while (min <= 59)
	{
	  printf("%d:%d\n", hour, min);
	  min++;
	}
      hour++;
    }
}

int main(void){
  clock_program();
  return (0);
}
