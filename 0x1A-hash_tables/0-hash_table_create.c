#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
* hash_table_create - creates hash table
* @size: size of an array
* Return: a pointer to newly created array
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array = NULL;

	array = malloc(sizeof(hash_table_t) * size);
	if (array == NULL)
		return (NULL);
	return (array);
}
