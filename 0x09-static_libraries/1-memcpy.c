
/**
 * _memcpy - copies memory area
 * @dest: memory area to be copied to
 * @src: memory area
 * @n: number of bytes
 * Return: pointer to memeory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
