#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char to be located
 * Return: pointer to first occurance of c in string s
 */

char *_strchr(char *s, int c)
{
	do {
		if (*s == c)
			return ((char *)s);
	} while (*s++);

	return (0);
}
