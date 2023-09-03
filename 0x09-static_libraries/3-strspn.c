#include "main.h"
/**
 * _strspn - Starting point of program
 * @s: entry input
 * @accept: the input
 * Return: 0 if success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
			{
				d++;
				break;
			}
			else if (accept[c + 1] == '\0')
				return (d);
		}
		s++;
	}
	return (d);
}

