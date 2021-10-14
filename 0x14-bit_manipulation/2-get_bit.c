#include "main.h"

/**
 * get_bit - returns the value of a bit at a givenn index
 * @n: integer
 * @index: index
 * Return: value of the bit at index or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	long int i = 1;

	/* find number of bit needed to reperesent n */
	while (power(2, i) <= n)
		i++;

	for (i = i - 1; i >= 0; i--)
	{
		if (power(2, i) <= n)
		{
			n -= power(2, i);
			if (index == i)
				return (1);
		}
		if (i == index)
			return (0);
	}
	/* if index is out of range */
	return (-1);
}

/**
 * power - return power of a number to exponent e
 * @base: base
 * @exp: exponent
 * Return: base raised to exponent
 */
unsigned long power(int base, unsigned int exp)
{
	int number = 1;
	unsigned int i = 0;

	for (i = 0; i < exp; i++)
		number *= base;
	return (number);
}
