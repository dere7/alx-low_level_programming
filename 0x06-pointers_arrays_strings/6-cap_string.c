#include "main.h"

/**
 * cap_string-  capitalizes all words of a string
 * @s: string
 * Return: capitalized string
*/
char *cap_string(char *s)
{
	char *t = s;
	int i;
	char sep[] = {',', ';', '!', '.', '?', '\"', '(', ')', '{', '}', ' ', '\t', '\n'};

	while (*s != '\0')
	{
		for (i = 0; i < 13 ; i++)
		{
			if (*(s - 1) == sep[i] && (*s >= 'a' && *s <= 'z'))
				*s -= 'a' - 'A';
		}
		s++;
	}
	return (t);
}
