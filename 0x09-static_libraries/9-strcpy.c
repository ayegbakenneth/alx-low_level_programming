#include "main.h"
/**
 * char *_strcpy - This program is to copy strings
 * @dest: this is what is copy to
 * @src: this is the place the program copies from
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (*(src + c) != '\0')
	{
		c++;
	}
	for ( ; d < c ; d++)
	{
		dest[d] = src[d];
	}
	dest[c] = '\0';
	return (dest);
}
