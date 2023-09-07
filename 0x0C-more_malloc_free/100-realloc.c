#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Increase or decrease size of memory
 * @ptr: Pointer
 * @old_size: allocated space for ptr
 * @new_size: memory block
 *
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	if (new_size > old_size)
		memcpy(new, ptr, old_size);
	else
		memcpy(new, ptr, new_size);

	free(ptr);

	return (new);
}
