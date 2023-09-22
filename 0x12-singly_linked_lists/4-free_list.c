#include <stdlib.h>
#include "list.h"
/**
 * free_list - this is to free a list
 * @head: first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str)
		free(current_node);
	}
}
