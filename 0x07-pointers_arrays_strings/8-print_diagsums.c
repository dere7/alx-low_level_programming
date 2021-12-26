#include <stdio.h>

/**
 * print_diagsums - prints sum of els in diagonals
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int sum = 0, sum2 = 0, i;

	for (i = 0; i < size * size; i++)
	{
		if (i / size == i % size)
			sum += *(a + i);

		if (i / size + i % size == size - 1)
			sum2 += *(a + i);
	}

	printf("%d, %d\n", sum, sum2);
}
