#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for array
 * @nmemb: array
 * @size: size of memory
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0, temp = (char *)mem;  i < nmemb; i++, temp += size)
		*temp = 0;
	return (mem);
}
