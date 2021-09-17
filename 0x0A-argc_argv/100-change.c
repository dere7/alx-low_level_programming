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
	int cents;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
		puts("0");

	printf("%d\n", cents % 10);

	return (0);
}
