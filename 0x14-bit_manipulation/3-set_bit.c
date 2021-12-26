#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer to be changed
 * @index: index of bit
 * Return: 1 if success -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	long int i = power(2, index);

	*n = *n | i;
	return (1);
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
