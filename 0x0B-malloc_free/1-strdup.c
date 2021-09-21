#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space in
 * memory, which contains a copy of given string
 * @str: string
 * Return: array of character
 */
char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *ch;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		size++;
		i++;
	}

	ch = malloc(sizeof(char) * size + 1);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ch[i] = str[i];
	}
	ch[i] = '\0';
	return (ch);
}
