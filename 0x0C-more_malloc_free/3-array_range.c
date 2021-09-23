#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates array of integers
 * @min: array
 * @max: size of memory
 * Return: a pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = min;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	while (i <= max)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}
