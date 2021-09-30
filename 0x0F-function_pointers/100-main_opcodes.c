#include <stdio.h>
#include <stdlib.h>

void printOpcode(char *byte, int size);

/**
 * main - prints opcode of itself
 * @argc: number of argument
 * @argv: array of arguments
 * Return: 1 on Success
 */
int main(int argc, char const *argv[])
{
	int n;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		puts("Error");
		exit(2);
	}

	printOpcode((char *)&main, n);
	return (0);
}

/**
 * printOpcode - prints the opocode of the main
 * @byte: address of main function
 * @size: number of bytes to be printed
 */
void printOpcode(char *byte, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%.2hhx", byte[i]);
		if (i < size - 1)
			printf(" ");
	}
	printf("\n");
}
