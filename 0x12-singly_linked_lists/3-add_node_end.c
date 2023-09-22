#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - new node addition
 * @head: first node
 * @str: node list string
 * Return: Node address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t h;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (h = 0; str[h]; h++)
		;
	new_node->len = h;
	new_node->next = NULL;
	current_node = *head;
	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
