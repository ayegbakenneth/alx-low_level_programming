#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Concatenating arguments
 * @ac: argument count
 * @av: argument array
 *
 * Return: Pointer
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int a;
	int index;
	char *result = malloc(sizeof(char) * total_length);

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		total_length += strlen(av[a]) + 1;
	if (result == NULL)
		return (NULL);
	index = 0;
	for (a = 0; a < ac; a++)
	{
		strcpy(result + index, av[a]);
		index += strlen(av[a]);
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';
	return (result);
}
