#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

size_t _strlen(char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
		len++;
	return(len);
}
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
	printf("%s = %ld\n", num1, _strlen(num1));
	printf("%s = %ld\n", num2, _strlen(num2));

	return (0);
}
