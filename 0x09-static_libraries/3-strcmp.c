#include "main.h"
/**
 * _strcmp - Comparing of string values
 * @s1: entry value
 * @s2: entry value
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (s1[e] != '\0' && s2[e] != '\0')
	{
		if (s1[e] != s2[e])
		{
			return (s1[e] - s2[e]);
		}
	e++;
	}
	return (0);
}
