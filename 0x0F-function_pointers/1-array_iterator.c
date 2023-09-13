#include "function_pointers.h"
#include <stdio.h>
/*i*
 * array_iterator - looping over the elements
 * @array: the container
 * @size: capacity of the array
 * @action: the pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
