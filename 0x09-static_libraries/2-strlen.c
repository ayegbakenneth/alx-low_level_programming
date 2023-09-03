#include "main.h"
/**
 * _strlen - Returning the length of a string
 * @s: the string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int ken = 0;

	while (*s != '\0')
	{
		ken++;
		s++;
	}
	return (ken);
}
