#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - return length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of byte to copy
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, size;
	char *str;

	len1 = s1 != NULL ? _strlen(s1) : 0;
	len2 = s2 != NULL ? _strlen(s2) : 0;

	size = len1 + (n >= len2 ? len2 : n);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (i < len1)
			str[i] = s1[i];
		else
			str[i] = s2[i - len1];
	}
	str[i] = '\0';

	return (str);
}
