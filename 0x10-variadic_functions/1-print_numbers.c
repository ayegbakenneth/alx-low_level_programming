#include "variable_function.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - printing variable numbers
 * @seperator: printed string
 * @n: integers passed
 * @...: others variable numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list she;
	unsigned int ken;

	va_start(she, n);

	for (ken = 0; ken < n; ken++)
	{
		printf("%d", va_arg(she, int));
		if (ken != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(she);
}
