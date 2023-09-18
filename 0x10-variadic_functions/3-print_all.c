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
	int h;
	int length = strlen(format);
	char *tka_str;
	char *separt = ", ";
	va_list to_ptr;

	h = 0;
	va_start(to_ptr, format);


	while (h <= length && format[h])
	{
		if (h == length - 1)
			separt = "";
		switch (format[h])
		{
		case 'c':
			printf("%c%s", va_arg(to_ptr, int), separt);
			break;
		case 'i':
			printf("%d%s", va_arg(to_ptr, int), separt);
			break;
		case 'f':
			printf("%f%s", va_arg(to_ptr, double), separt);
			break;
		case 's':
			tka_str = va_arg(to_ptr, char *);
			if (tka_str == NULL)
			{
				tka_str = "(nil)";
			}
			printf("%s%s", tka_str, separt);
			break;
		}
		h++;
	}
	printf("\n");

	va_end(to_ptr);

}

