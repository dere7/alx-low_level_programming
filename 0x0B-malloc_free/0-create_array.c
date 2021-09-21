#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: char used to initialize
 * Return: array of character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(char) * size);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}

	return (ch);
}
