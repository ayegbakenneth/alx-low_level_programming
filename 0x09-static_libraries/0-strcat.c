#include "main.h"
/**
 * _strcat - function for concatenating
 * @dest: Values entered
 * @src: This is the value entered
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int d;
	int e;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	e = 0;
	while (src[e] != '\0')
	{
		dest[d] = src[e];
		d++;
		e++;
	}
	dest[d] = '\0';
	return (dest);
}
