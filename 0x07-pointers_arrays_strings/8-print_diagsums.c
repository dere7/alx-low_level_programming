#include <stdio.h>

/**
 * set_string - prints sum of els in diagonals
 * @a: array
 * @size: size of array
 */
void set_string(char **s, char *to)
{
	int i = 0;

	while (to[i] != '\0')
	{
		**(s + i) = to[i];
		i++;
	}
}
