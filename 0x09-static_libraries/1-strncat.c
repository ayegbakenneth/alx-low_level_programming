#include "main.h"
/**
 * _strncat - for string conctenating
 * bytes from src
 * @dest: insert value
 * @src: insert value
 * @n: insert value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int f;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	f = 0;
	while (f < n && src[f] != '\0')
	{
	dest[c] = src[f];
	c++;
	f++;
	}
	dest[c] = '\0';
	return (dest);
}
