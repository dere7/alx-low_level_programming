#include "holberton.h"

/**
 * print_last_digit - value of last digit
 * @n : int
 * Return: return the value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -1 * last;
	_putchar('0' + last);
	return (last);
}
