#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string
 * Return: uppercase string
*/
char *string_toupper(char *s)
{
	char *t = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 'a' - 'A';
		s++;
	}
	return (t);
}
