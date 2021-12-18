#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("%s: %s", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
