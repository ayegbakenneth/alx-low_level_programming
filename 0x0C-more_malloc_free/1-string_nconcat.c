#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - Strings concatenating
 * @s1: string one
 * @s2: string two
 * @n: bytes to concatenate
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sense;
	unsigned int one1, two2, len, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	one1 = strlen(s1);
	two2 = strlen(s2);

	if (n >= two2)
		n = two2;

	len = one1 + n;

	sense = malloc((len + 1) * sizeof(char));

	if (sense == NULL)
		return (NULL);

	for (a = 0; a < one1; a++)
		sense[a] = s1[a];

	for (b = 0; b < n; b++)
		sense[a++] = s2[b];

	sense[a] = '\0';

	return (sense);
}
