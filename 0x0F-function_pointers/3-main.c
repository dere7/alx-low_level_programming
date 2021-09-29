#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - calculator
 * @argc: number of arguments
 * @argv: array of args
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	int (*f)(int, int);
	/* if the number of argument is wrong */
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	/* get arguments */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	f = get_op_func(op);

	/* checks for divission by zero */
	if ((strcmp(op, "%") == 0 || strcmp(op, "/") == 0) && num2 == 0)
	{
		puts("Error");
		exit(100);
	}

	/* if operator isn't among +, -, *, /, % */
	if (!f)
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", f(num1, num2));

	return (0);
}
