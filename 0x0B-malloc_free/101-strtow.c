#include <stddef.h>
#include <stdlib.h>

/**
 * strtow -  concatenates all the arguments
 * @str: string
 * Return: array of strings
 */
char **strtow(char *str)
{
	int i = 0, j, k = 0, word = 0, size = 0;
	char **ch;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* finds the total length of string */
	j = 0;
	while (str[j] != '\0')
	{
		if (j != 0 && str[j - 1] == ' ' && str[j] != ' ')
			word++;
		j++;
	}

	/* allocates memory for size and ac(i.e. for newline at end of each arg) */
	ch = malloc(sizeof(char *) * word);
	if (ch == NULL)
		return (NULL);

	/* allocate space for each word */
	j = 0;
	for (i = 0; i < word; i++)
	{
		size = 0;
		while (*(str + j) != '\0')
		{
			if (str[j] != ' ')
				size++;
			else
				break;
			j++;
		}

		ch[i] = malloc(sizeof(char *) * (size + 1));
		if (ch[i] == NULL)
		{
			free(ch);
			return (NULL);
		}
	}

	j = 0;
	for (i = 0; i < word; i++)
	{
		while (str[j] != '\0')
		{
			if (str[j] != ' ')
			{
				size++;
				ch[i][k] = str[j];
				k++;
			}
			else
				break;
			j++;
		}
		ch[i][k] = '\0';
	}

	return (ch);
}
