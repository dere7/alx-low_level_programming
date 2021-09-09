#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: string
 * @s2:  string
 * Return: difference between values of first pair of character
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}

	return ((int)(*s1) - (int)(*s2));
}
