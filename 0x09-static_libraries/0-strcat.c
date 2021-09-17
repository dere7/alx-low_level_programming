#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: destination string
 * @src: src string
 * Return: string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}

	i = 0;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return (dest);
}
