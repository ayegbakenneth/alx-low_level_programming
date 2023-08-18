#include "main.h"
/**
 * print_number - displaying integers
 * @n: entry point of the parameter
 * Return: 0
 */
void print_number(int n)
{
	unsigned int t = n;

	if (n < 0)
	{
		_putchar(45);
		t = -t;
	}
	if (t / 10)
	{
		print_number(t / 10);
	}
	_putchar(t % 10 + '0');
}

