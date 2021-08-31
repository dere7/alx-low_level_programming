#include "holberton.h"

/**
 * _islower - checks if c is lowercase
 * @c: character
 *  Return: 1 if c is lowercase 0 otherwise
 */
int _islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
