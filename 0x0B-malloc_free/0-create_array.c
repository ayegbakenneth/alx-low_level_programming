#include "main.h"
/**
 * create_array - creating arrays
 * @size: array size
 * @c: character stored
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *kee;

	if (size == 0)
		return (NULL);
	kee = malloc(sizeof(char) * size);
	if (kee == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		kee[b] = c;
	return (kee);
}
