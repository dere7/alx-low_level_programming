#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * main - check the code
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}
	char *num1 = argv[1];
	char *num2 = argv[2];

	return (0);
}
