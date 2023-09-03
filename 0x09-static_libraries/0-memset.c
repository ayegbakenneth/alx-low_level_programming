#include "main.h"
/**
 * _memset - Filling blocks of memory
 * @s: The begining of the address
 * @b: Values
 * @n: Changed of the bytes values
 * Return: new valuse of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int t;

	t = 0;
	for (; n > 0; t++)
	{
		s[t] = b;
		n--;
	}
	return (s);
}
