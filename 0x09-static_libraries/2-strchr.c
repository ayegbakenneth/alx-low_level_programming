#include "main.h"
/**
 * _strchr - program point of starting
 * @s: input
 * @c: input
 * Return: 0 if success
 */
char *_strchr(char *s, char c)
{
	int d = 0;

	for (; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (&s[d]);
	}
	return (0);
}
