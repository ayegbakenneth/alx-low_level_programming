#include "main.h"

/**
 * _pow - use this to calculate base
 * @base: Raised power
 * @power: power
 * Return: result
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int answer;
	unsigned int ken;

	answer = 1;
	for (ken = 1; ken <= power; ken++)
		answer *= base;
	return (answer);
}
/**
 * print_binary - This prints in binary
 * @n: the number printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int maths, test;
	char specifier;

	specifier = 0;
	maths = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (maths != 0)
	{
		test = n & maths;
		if (test == maths)
		{
			specifier = 1;
			_putchar('1');
		}
		else if (specifier == 1 || maths == 1)
		{
			_putchar('0');
		}
		maths >>= 1;
	}
}
