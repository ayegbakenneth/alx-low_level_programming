#include "hash_tables.h"

/**
 * hash_table_delete - For erasing a hash table
 * @ht: points to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *ken;
	unsigned long int j;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			node = ht->array[j];
			while (node != NULL)
			{
				ken = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = ken;
			}
		}
	}
	free(head->array);
	free(head);
}
