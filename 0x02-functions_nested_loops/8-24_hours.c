#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hour, minute, i, j, k, l;

	for (hour = 0; hour < 24; hour++)
	{
		i = hour / 10;
		j = hour % 10;
		for (minute = 0; minute < 60; minute++)
		{
			k = minute / 10;
			l = minute % 10;
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar('\n');
		}
	}
}
