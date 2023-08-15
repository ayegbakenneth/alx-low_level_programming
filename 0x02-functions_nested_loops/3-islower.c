#include "main.h"
/**
 * _islower - Looks for a lowercase character
 * @c: Character that is to be checked
 * Return: 1 for a lowercase or 0 for other thing else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
