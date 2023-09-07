#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Memory allocation with malloc
 * @b: bytes amount
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *aye = malloc(b);

	if (aye == NULL)
	{
		printf("Error: malloc failed\n");
		exit(98);
	}
	return (aye);
}
