#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments
 * @ac: size of arg
 * @av: array of arguments
 * Return: concatinated arguments
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, size = 0;
	char *ch;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* finds the total length of string */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
	}

	/* allocates memory for size and ac(i.e. for newline at end of each arg) */
	ch = malloc(sizeof(char) * (size + ac));
	if (ch == NULL)
		return (NULL);

	/* cp from av to ch */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*ch = av[i][j];
			j++;
			ch++;
		}
		*ch = '\n';
		ch++;
	}

	return (ch - size - ac);
}
