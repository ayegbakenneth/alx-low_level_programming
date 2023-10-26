#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - Converting binary to integer
 * @b: A pointer to strings of characters
 * Return: The answer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;

	if (b == NULL)
		return (0);
	for (size_t a = 0; b[a] != '\0'; a++)

	if (b[a] == '0')
		answer = (answer << 1) + 0;
	else if (b[a] == '1')
		answer = (answer << 1) + 1;
	else
		return (0);
	return (answer);
}
