#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, size1 = 0, size2 = 0;
	char *ch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		size1++;
		i++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		size2++;
		i++;
	}

	ch = malloc(sizeof(char) * (size1 + size2 + 1));

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < (size1 + size2); i++)
	{
		if (i < size1)
			ch[i] = s1[i];
		else
			ch[i] = s2[i - size1];
	}
	ch[i] = '\0';

	return (ch);
}
