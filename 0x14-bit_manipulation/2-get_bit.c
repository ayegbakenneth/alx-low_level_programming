#include "main.h"
/**
 * get_bit - A function that returns a bit value
 * @n: Checks for the bit
 * @index: Still for checking the bit
 * Return: answer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int maths, test;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	maths = 1 << index;
	test = n & maths;
	if (test == maths)
		return (1);
	return (0);
}
