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
	char sep[] = {',', ';', '!', '.', '?', '\"', '(', ')', '{', '}'};

	while (*s != '\0')
	{
		for (i = 0; i < 10 ; i++)
		{
			if (*(s - 1) == sep[i] && (*s >= 'a' && *s <= 'z'))
				*s -= 'a' - 'A';
		}
		s++;
	}
	return (t);
}
