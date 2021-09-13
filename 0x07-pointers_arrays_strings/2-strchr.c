#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char to be located
 * Return: pointer to first occurance of c in string s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (c == *(s + i))
			return (s + i);
		i++;
	}

	return (NULL);
}
