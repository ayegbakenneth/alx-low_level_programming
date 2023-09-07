#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Works like malloc
 * @nmemb: elements in the array
 * @size: element in bytes
 *
 * Return: A pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *she;
	unsigned int amount;

	if (nmemb == 0 || size == 0)
		return (NULL);

	amount = nmemb * size;
	she = malloc(amount);

	if (she == NULL)
		return (NULL);

	memset(she, 0, amount);

	return (she);
}
