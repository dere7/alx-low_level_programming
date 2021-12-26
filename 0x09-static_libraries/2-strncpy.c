#include "main.h"

/**
 * _strncpy - copies n bytes from src to dest
 * @dest: destination string
 * @src: src string
 * @n: number of bytes
 * Return: dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;

	while (i < n)
	{
		if (len < i)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}

	return (dest);
}
