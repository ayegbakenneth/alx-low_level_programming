#include "main.h"
/**
 * _puts - Printing strings to stdout
 * @str: string printed
 * _putchar: for new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
