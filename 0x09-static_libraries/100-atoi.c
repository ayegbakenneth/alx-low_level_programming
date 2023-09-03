#include "main.h"
/**
 * _atoi - converting to integer
 * @s: The converter
 * Return: an integer
 */
int _atoi(char *s)
{
	int ken = 1, a = 0;
	unsigned int ten = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			ken *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		ten = (ten * 10) + (s[a] - '0');
		a++;
	}
	ten *= ken;
	return (ten);
}
