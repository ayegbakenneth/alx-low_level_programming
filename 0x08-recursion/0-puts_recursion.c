#include "main.h"
/**
 * _puts_recursion - Function like puts();
 * @s: the input character
 * Return: 0 if successful
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
