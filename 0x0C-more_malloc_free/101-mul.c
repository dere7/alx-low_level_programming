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
char *add(char *a, char *b)
{
	char *res;
	size_t len = _strlen(a), i, temp, carry = 0;

	res = malloc((len + 2) * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = len - 1; i >= 0; i--)
	{
		temp = a[i] + b[i] - 2 * '0' + carry;
		res[i + 1] = '0' + temp / 10;
		carry = temp % 10;
	}
	res[i] = '0' + carry;
	res[len + 1] = '\0';

	return (res);
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
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, carry = 0;

	char *res = malloc((len1 + len2 + 1) * sizeof(char));
	if (res == NULL)
		return (1);
	printf("%s\n", add("196", "980"));
//	for (i = len2 - 1; i >= 0; i--)
//	{
//		for (j = 0; j < len1; j++)
//		{
//			
//		}
//	}

	return (0);
}
