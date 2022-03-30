#include <stdio.h>

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * @value: value to search for
 * Return: index of the value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	while (array && low <= high)
	{
		mid = (low + high) / 2;
		/* print array */
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
