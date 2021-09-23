#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocates a memeory block
 * @ptr: pointer to the memory previously allocated 
 * @old_size: he size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: a pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr, *oldPtr = ptr;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);

	while (i < (old_size > new_size ? new_size : old_size))
	{
		arr[i] = oldPtr[i];
		i++;
	}
	free(ptr);
	return (arr);
}
