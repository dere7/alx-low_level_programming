#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: length of command line input
 * @argv: array of command line argument
 * Return: 0 if success
 */
int main(int argc, char const *argv[])
{
	int cents, n = 0, i;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
		puts("0");

	for (i = 0; i < 5; i++)
	{
		if (cents / cent[i] != 0)
		{
			n += cents / cent[i];
			cents -= cent[i] * n;
		}
	}

	printf("%d\n", n);

	return (0);
}
