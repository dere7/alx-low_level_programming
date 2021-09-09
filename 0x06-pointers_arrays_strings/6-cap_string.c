#include "main.h"

/**
 * cap_string-  capitalizes all words of a string
 * @s: string
 * Return: capitalized string
*/
char *cap_string(char *s)
{
	char *t = s;

	while (*s != '\0')
	{
		if ((*(s - 1) == ' ' || *(s - 1) == '\t' ||
			*(s - 1) == '\n' || *(s - 1) == ',' ||
			*(s - 1) == '.' || *(s - 1) == '!' ||
			*(s - 1) == '?' || *(s - 1) == '\"' ||
			*(s - 1) == '(' || *(s - 1) == ')' ||
			*(s - 1) == '{' || *(s - 1) == '}') &&
			(*s >= 'a' && *s <= 'z'))
			*s -= 'a' - 'A';
		s++;
	}
	return (t);
}
