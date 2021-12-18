#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
* hash_table_set - adds an element to the hash table
* @ht: hash table you want to add or update the key/value to
* @key: nonempty string
* @value: value associated with the key
* Return: 1 if it succeed 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned int index;

	if (ht == NULL)
		return (0);
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = (char *)key;
	newNode->value = strdup(value);
	newNode->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
		newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
