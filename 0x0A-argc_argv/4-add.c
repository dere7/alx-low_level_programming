#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry
 * @argc: length of command line input
 * @argv: array of command line argument
 * Return: 0 if success
 */
int main(int argc, char const *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		/* checks if argv[i] is a number */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				puts("Error");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
