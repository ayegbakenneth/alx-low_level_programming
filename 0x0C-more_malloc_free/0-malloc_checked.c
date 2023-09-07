#include "main.h"
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
	void *aye;

	aye = malloc(b);
	if (aye == NULL)
		exit(98);
	else
		return (aye);
}
