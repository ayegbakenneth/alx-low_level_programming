#include "main.h"

/**
 * print_sign - display the number sign
 * @n: This is the number that will be checked
 * Return: 1 for positive, -1 for negative or 0 for other numbers
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
