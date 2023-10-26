#include "main.h"
/**
 * set_bit - To turn  bit value into 1
 * @n: turned digit
 * @index: the index of the bit
 * Return: 1 for success or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ayegba;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	ayegba = 1 << index;
	*n = *n | ayegba;
	return (1);
}
