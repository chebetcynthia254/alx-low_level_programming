#include <stdio.h>
/**
* jack_bauer - Prints every minute of the day of Jack Bauer.
*/
void jack_bauer(void)
{
int hours, minutes;
for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
_putchar("%02d:%02d\n", hours, minutes);
}
}
}
