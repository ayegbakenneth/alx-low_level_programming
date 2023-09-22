#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - This is  adding new node
 * @head: The first node
 * @str: node string
 * Return: Address of node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ken;
	int esther = 0;

	ken = malloc(sizeof(list_t));
	if (ken == NULL)
		return (NULL);
	while (str[esther])
		esther++;
	ken->len = esther;
	ken->str = strdup(str);
	ken->next = *head;
	*head = ken;
	return (ken);
}
