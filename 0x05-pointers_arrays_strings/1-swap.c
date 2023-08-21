#include "main.h"
/**
 * swap_int - sawping two integers
 * @a: value of a
 * @b: value of b
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
