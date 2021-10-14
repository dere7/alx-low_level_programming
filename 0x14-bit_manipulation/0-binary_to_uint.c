
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

/**
 * binary_to_uint - convertsa binary number to unsigned int
 * @b: string of 0s and 1s
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, len = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number += (b[i] - '0') * power(2, len - i - 1);
	}
	return (number);
}
