#include "main.h"
/**
 * flip_bits - Length of change bits
 * @n: 1st number
 * @m: 2nd number
 * Return: answer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sure, amount = 0;
	unsigned long int now;
	unsigned long int real = n ^ m;

	for (sure = 63; sure >= 0; sure--)
	{
		now = real >> sure;
		if (now & 1)
			amount++;
	}
	return (amount);
}
