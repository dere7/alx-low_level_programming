#include <stdio.h>
#include <math.h>

/**
 * min - returns the minimum of two numbers
 * @a: first number
 * @b: second number
 * Return: returns minimum of a and b
 */
size_t min(size_t a, size_t b)
{
	return (a > b ? b : a);
}

/**
 * jump_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * @value: value to search for
 * Return: index of the value or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = sqrt(size);

	if (!array)
		return (-1);

	while (array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a += sqrt(size);
		if (a >= size)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a++;
		if (a == min(b, size))
			return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	if (array[a] == value)
		return (a);
	return (-1);
}
