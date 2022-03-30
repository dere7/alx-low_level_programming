#include <stdio.h>

/**
 * interpolation_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * @value: value to search for
 * Return: index of the value or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	while (array && low < high)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low]))
				* (value - array[low]));
		/* print array */
		printf("Value checked array[%ld]", pos);
		if (pos < size)
			printf(" = [%d]\n", array[pos]);
		else
			printf(" is out of range\n");
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
