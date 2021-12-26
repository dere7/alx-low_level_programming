#include "main.h"

/**
 * _strncat - concatinates n bytes from src to dest
 * @dest: destination string
 * @src: src string
 * @n: number of bytes
 * Return: dest string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return (dest);
}
