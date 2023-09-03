#include "main.h"
/**
 * _strpbrk - Start point of program
 * @s: entry value
 * @accept: entry value
 * Return: 0 if success
 */
char *_strpbrk(char *s, char *accept)
{
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
			return (s);
		}
	s++;
	}
	return ('\0');
}
