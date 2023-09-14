#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - printing variable numbers
 * @separator: printed string
 * @n: integers passed
 * @...: others variable numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list she;
	unsigned int ken;

	va_start(she, n);

	for (ken = 0; ken < n; ken++)
	{
		printf("%d", va_arg(she, int));
		if (ken != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(she);
}
