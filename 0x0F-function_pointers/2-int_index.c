#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Used to search for an integers
 * @array: This is the array the search start from
 * @size: array capacity
 * @cmp: pointers
 * Return: the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) == 1)
			return (a);
	}
	return (-1);
}
