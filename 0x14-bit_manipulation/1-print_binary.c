#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: integer to be printed
 */
void print_binary(unsigned long int n)
{
	long int i = 1;

	/* find number of bit needed to reperesent n */
	while (power(2, i) <= n)
		i++;

	for (i = i - 1; i >= 0; i--)
	{
		if (power(2, i) <= n)
		{
			_putchar('1');
			n -= power(2, i);
		}
		else
			_putchar('0');
	}
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
