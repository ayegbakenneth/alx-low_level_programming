#include "main.h"
/**
 * puts2 - print only one character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int k;
	int a = 0;

	while (str[a] != '\0')
	{
	a++;
	}
	for (k = 0; k < a; k += 2)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
