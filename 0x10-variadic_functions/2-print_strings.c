#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - string printed with new line
 * @separator: string printed
 * @n: strings numbers
 * @...: variable number
 * description: null is not printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ben;
	char *ptr;
	unsigned int ken;

	va_start(ben, n);

	for (ken = 0; ken < n; ken++)
	{
		ptr = va_arg(ben, char *);
		if (ptr == NULL)
			printf("(nill)");
		else
			printf("%s", ptr);
		if (ken != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ben);
}
