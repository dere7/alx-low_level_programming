#include "main.h"
#include <limits.h>

/**
 * _atoi - convert string to an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, val = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (val > INT_MAX / 10 || (val == INT_MAX / 10))
			{
				return (sign == -1 ? INT_MIN : INT_MAX);
			}
			val = val * 10 + s[i] - '0';
		}
		else if (val != 0)
			break;
		i++;
	}

	return (sign * val);
}
