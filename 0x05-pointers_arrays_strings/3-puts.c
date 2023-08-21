#include "main.h"
/**
 * _puts - Write a function that prints
 * @str: the string to be outputed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
