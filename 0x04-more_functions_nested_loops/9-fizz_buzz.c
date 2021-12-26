#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		int by3 = j % 3 == 0;
		int by5 = j % 5 == 0;

		if (by3 && by5)
			printf("FizzBuzz");
		else if (by3)
			printf("Fizz");
		else if (by5)
			printf("Buzz");
		else
			printf("%d", j);
		if (j != 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
