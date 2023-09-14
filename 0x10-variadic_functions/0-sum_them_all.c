#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - The parameters.
 * @n: parameters.
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ken;
	unsigned int i, sum = 0;

	va_start(ken, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ken, int);
	va_end(ken);
	return (sum);
}
