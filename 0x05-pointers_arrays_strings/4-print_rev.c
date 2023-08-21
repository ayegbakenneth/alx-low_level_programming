#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse.
 * @s: the  output
 * Return: 0
 */
void print_rev(char *s)
{
	int ken = 0;
	int o;

	while (*s != '\0')
	{
		ken++;
		s++;
	}
	s--;
	for (o = ken; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
