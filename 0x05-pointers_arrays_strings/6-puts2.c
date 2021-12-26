#include "main.h"

/**
 * puts2 - prints every other character of  a string
 * @s: string
 */
void puts2(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
