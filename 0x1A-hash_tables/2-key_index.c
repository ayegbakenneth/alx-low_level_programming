#include "hash_tables.h"
/**
 * key_index - The index of a key/value pair
 * @key: Key to get the index
 * @size: Size of the hash table
 * Return: Index of the key
 * Description: djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
