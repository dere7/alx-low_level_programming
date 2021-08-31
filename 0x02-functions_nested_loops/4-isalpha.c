#include "holberton.h"

/**
 * _isalpha- checks if c is alphabet
 * @c: character
 *  Return: 1 if c is alphabet 0 otherwise
 */
int _isalpha(char c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
