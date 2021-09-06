#include "main.h"

/**
 * puts_half - prints half of  a string
 * @s: string
 */
void puts_half(char *s)
{
	int i = 0, len = 0, n;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	n = len % 2 == 0 ? len / 2 : (len - 1) / 2;

	for (i = n; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
