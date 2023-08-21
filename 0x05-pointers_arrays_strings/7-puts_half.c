#include "main.h"
/**
 * puts_half - Write a function that prints half of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int b = 0;
	int c;

	while (str[b] != '\0')
	{
	b++;
	}
	if (b % 2 == 1)
	{
	c = (b - 1) / 2;
	c += 1;
	}
	else
	{
	c = b / 2;
	}
	for (; c < b; c++)
	{
	_putchar(str[c]);
	}
	_putchar('\n');
}
