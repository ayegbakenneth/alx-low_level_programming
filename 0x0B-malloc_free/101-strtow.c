#include <stdlib.h>
#include <string.h>

int count_words(char *str);
void free_words(char **words);

/**
 * strtow - Splits a string into words
 * @str: The input string to be split
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	int word_index;
	int num_words;
	char **words;
	char *token;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);
	word_index = 0;
	token = strtok(str, " ");
	while (token != NULL)
	{
		words[word_index] = strdup(token);
		if (words[word_index] == NULL)
		{
			free_words(words);
			return (NULL);
		}
		word_index++;
		token = strtok(NULL, " ");
	}
	words[word_index] = NULL;
	return (words);
}

/**
 * count_words - Counts the number
 * @str: input
 *
 * Return: string
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			is_word = 0;
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}

		str++;
	}

	return (count);
}

/**
 * free_words - Free the memory
 * @words: The array
 */
void free_words(char **words)
{
	int a;

	if (words == NULL)
		return;
	a = 0;
	while (words[a] != NULL)
	{
		free(words[a]);
		a++;
	}
	free(words);
}
