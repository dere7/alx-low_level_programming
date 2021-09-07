#include "main.h"

/**
 * _atoi - convert string to an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, len = 0, neg = 1, val = 0;

	while (s[i] != '\0')
	{
		if (val == 0)
		{
			if (s[i] == '-')
				neg *= -1;
			else if (s[i] >= '0' && s[i] <= '9')
				val = val * 10 + s[i] - '0';
		}
		else if (s[i] >= '0' && s[i] <= '9')
			val = val * 10 + s[i] - '0';
		else
			break;
		len++;
		i++;
	}

	return (neg * val);
}
