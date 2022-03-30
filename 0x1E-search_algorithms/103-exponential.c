#include <stdio.h>
#include "search_algos.h"

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
 * exponential_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * @value: value to search for
 * Return: index of the value or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	if (!array && size == 0)
		return -1;

	size_t bound = 1;
	while (bound < size && array[bound] < value)
		bound *= 2;

	return binary_search(array, value, bound / 2, min(bound + 1, size));
}
