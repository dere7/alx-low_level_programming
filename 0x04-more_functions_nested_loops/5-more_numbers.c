#include "main.h"

/**
 * more_numbers - prints number from 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			int ones = i % 10;
			int tens = i / 10;

			if (tens != 0)
				_putchar('0' + tens);

			_putchar('0' + ones);
		}

		_putchar('\n');
	}

}
