#include "main.h"
/**
 * binary_to_uint - Converting binary to integer
 * @b: A pointer to strings of characters
 * Return: The answer
 */
unsigned int binary_to_uint(const char *b)
{
	int ken;
	unsigned int answer = 0;

	if (!b)
		return (0);
	for (ken = 0; b[ken] != '\0'; ken++)
	{
		if (b[ken] != '0' && b[ken] != '1')
			return (0);
	}
	for (ken = 0; b[ken] != '\0'; ken++)
	{
		answer <<= 1;
		if (b[ken] == '1')
			answer += 1;
	}
	return (answer);
}
