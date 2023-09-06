#include "main.h"
/**
 * str_concat - add two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int s1dash = 0;
	int s2dash = 0;
	int b;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (b = 0; s1[b] != '\0'; b++)
		s1dash++;
	for (b = 0; s2[b] != '\0'; b++)
		s2dash++;
	output = malloc(sizeof(char) * (s1dash + s2dash) + 1);
	if (output == NULL)
		return (NULL);
	for (b = 0; s1[b] != '\0'; b++)
		output[b] = s1[b];
	for (b = 0; s2[b] != '\0'; b++)
		output[s1dash + b] = s2[b];
	return (output);
}

