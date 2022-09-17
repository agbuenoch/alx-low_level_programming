#include "main.h"
/**
 * jack_bauer - print 24 hour format clock
 *
 * Return: Always 0.
 * int hour1; first digit of the hour part
 * int hour2; second digit of hour part
 * int min1; first digit of minutes part
 *int min2; second digit of minutes part
* The clock is a 24 Hour clock format,
* for example: 23:59 meaning 11:59 in "12-Hour"
* clock format. The first part i.e 23 is the HOUR
* and the second part i.e 59 is the MINUTES.
* Because "putchar()" function can ONLY print a
* "single or one" character or number
* at a time, therefore you cannot print the hour "23"
* or the minutes "59" at once. On this note, we have
* to loop through zero (0) to the end of each of the digit that
* we want it to appear. EXAMPLE- for us to print the minutes :59
* in the second part of the time, we loop through from
* 0 to 5 and then from 0 to 9 using their ASCII VALUES:
* 0 to 5 is: (48 to 53) and 0 to 9 is: (48 to 57)
* which you can look up from the ASCII TABLE online or
* anywhere you can. The same thing applies to the first part
* of the time 23: by looping from 0 to 2 and then from 0 to 3
* using their ASCII VALUES: 0 to 2 is: (48 to 51)
* and 0 to 3 is: (48 to 53).
*/
void jack_bauer(void)
{
int hour1;
hour1 = 48;
while (hour1 < 51)
{
int hour2;
hour2 = 48;
while (hour2 < 52)
{
int min1;
min1 = 48;
while (min1 < 54)
{
int min2;
min2 = 48;
while (min2 < 58)
{
_putchar(hour1);
_putchar(hour2);
_putchar(':');
_putchar(min1);
_putchar(min2);
min2++;
_putchar('\n');
}
min1++;
}
hour2++;
}
hour1++;
}
}
