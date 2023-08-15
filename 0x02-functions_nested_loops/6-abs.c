#include "main.h"
/**
 * _abs - calculate absolute value of an integer.
 * @c: Caculated value
 * Return: abs value or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
