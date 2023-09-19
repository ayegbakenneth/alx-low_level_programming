#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A funtion to free allocated memory
 * @d: The pointer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
