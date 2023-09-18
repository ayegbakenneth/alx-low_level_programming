#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - Print values based on format.
 * @format: Format string for the values.
 * @...: Variable number of arguments.
 */
void print_all(const char * const format, ...)
{
	int a;
	int lngth = strlen(format);
	char *ptr_str;
	char *dash = ", ";
	va_list to_ptr;

	a = 0;
	va_start(to_ptr, format);
	while (a <= lngth && format[a])
	{
		if (a == lngth - 1)
			dash = "";
		switch (format[a])
		{
		case 'c':
			printf("%c%s", va_arg(to_ptr, int), dash);
			break;
		case 'i':
			printf("%d%s", va_arg(to_ptr, int), dash);
			break;
		case 'f':
			printf("%f%s", va_arg(to_ptr, double), dash);
			break;
		case 's':
			ptr_str = va_arg(to_ptr, char *);
			if (ptr_str == NULL)
			{
				ptr_str = "(nil)";
			}
			printf("%s%s", ptr_str, dash);
			break;
		}
		a++;
	}
	printf("\n");
	va_end(to_ptr);
}
