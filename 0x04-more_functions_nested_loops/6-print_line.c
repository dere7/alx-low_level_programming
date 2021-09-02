#include "main.h"

/**
 * print_line - prints n lines
 * @n: width of line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
		if (i == n)
			_putchar('\n');
	}

}
