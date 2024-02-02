#include "hash_tables.h"

/**
 * hash_table_get - This recive the value stored 
 * @ht: pointer to hash table.
 * @key: Gets the value stored in the hash table
 * Return: NULL if key not matched or value of key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
        hash_node_t *node;
        unsigned long int ken;

        if (ht == NULL || key == NULL || *key == '\0')
                return (NULL);

        ken = key_index((const unsigned char *)key, ht->size);
        if (ken >= ht->size)
                return (NULL);

        node = ht->array[ken];
        while (node && strcmp(node->key, key) != 0)
                node = node->next;

        return ((node == NULL) ? NULL : node->value);
}
