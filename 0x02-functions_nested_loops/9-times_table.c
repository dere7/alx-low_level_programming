#include "main.h"

/**
 * times_table - prints time table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int r;

			r = (i * j) / 10;

			_putchar(' ');
			if (r == 0)
				_putchar(' ');
			else
				_putchar('0' + r);
			_putchar('0' + i * j % 10);
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
