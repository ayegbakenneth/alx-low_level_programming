#include "main.h"
#include <stdlib.h>

/**
 * array_range - integers of arrays
 * @min: The least value
 * @max: highest value
 * Return: A pointer
 */
int *array_range(int min, int max)
{
	int *cake;
	int ten, c;

	if (min > max)
		return (NULL);

	ten = max - min + 1;
	cake = malloc(ten * sizeof(int));

	if (cake == NULL)
		return (NULL);

	for (c = 0; c < ten; c++)
		cake[c] = min++;

	return (cake);
}
