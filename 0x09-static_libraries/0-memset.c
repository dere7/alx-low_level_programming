

/**
 * _memset - fills memory with constant bytes
 * @s: string
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memeory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
