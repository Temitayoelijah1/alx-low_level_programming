#include "main.h"

/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starting
 * from 00:00 to 23:59, min loop counts mins, hour loop counts hours
 * and resets mins
 * Returns: 0
 */
void jack_bauer(void)
{
	int hours = 0
	int minutes = 0
	int hours_remainder;
	int minutes_remainder;

	while(hours < 23)
	{
	while(minutes < 59)
	{
	hours_remainder = hours % 10;
	minutes_remainder = minutes % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder / 10 + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(minutes_remainder / 10 + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
}
}
