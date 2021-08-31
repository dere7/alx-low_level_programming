#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - prints upto 98
* @n: from n
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}

	for (i = n; i > 98; i--)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}

	printf("98\n");
}
