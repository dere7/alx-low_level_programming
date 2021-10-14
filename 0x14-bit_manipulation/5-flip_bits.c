#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits needed to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = n ^ m;
	unsigned int num_of_bit = 0;
	long int i = 1;

	/* find number of bit needed to reperesent n */
	while (power(2, i) <= bits)
		i++;

	for (i = i - 1; i >= 0; i--)
	{
		if (power(2, i) <= bits)
		{
			num_of_bit++;
			bits -= power(2, i);
		}
	}

	return (num_of_bit);
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
