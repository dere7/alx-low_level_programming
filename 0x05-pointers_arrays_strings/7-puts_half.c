#include "main.h"

/**
 * puts_half - prints half of  a string
 * @s: string
 */
void puts_half(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = len / 2 + len % 2; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
