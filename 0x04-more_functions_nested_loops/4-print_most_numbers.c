#include "main.h"

/**
 * print_most_numbers - prints number from 0 to 9 exept 2 & 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == '2' || i == '4')
			continue;

		_putchar(i);
	}

	_putchar('\n');
}
