#include "main.h"
/**
 * print_array - printing n element
 * @a: array name
 * @n: the number of elements
 * Return: inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, "' a[i]);
	}
		if (i == (n -1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
