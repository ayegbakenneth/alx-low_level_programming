#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - To set bit value to 0
 * @n: parameter
 * @index: index
 * Return: 1 if successful or -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
