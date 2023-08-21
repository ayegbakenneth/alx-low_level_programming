#include "main.h"
/**
 * puts2 - print only one character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int ken = 0;
	int a = 0;
	char *y = str;
	int o;

	while (*y != '\0)
	{
		y++;
		ken++;
	}
	a = ken - 1;
	for (o = 0; o <= a; a++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
