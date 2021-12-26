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
	int num1, num2;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
