#include "main.h"
/**
 * _strdup - strings into new space
 * @str: string to new space
 * Return: pointer
 */
char *_strdup(char *str)
{
	int d;
	char *copy;
	int good = 0;

	if (str == NULL)
		return (NULL);
	for (d = 0; str[d] != '\0'; d++)
		good++;
	copy = malloc(sizeof(char) * good + 1);
	if (copy == NULL)
		return (NULL);
	for (d = 0; str[d] != '\0'; d++)
		copy[d] = str[d];
	return (copy);
}
