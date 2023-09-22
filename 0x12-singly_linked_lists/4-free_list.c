#include <stdlib.h>
#include "lists.h"
/**
 * free_list - this is to free a list
 * @head: first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *spot_node;

	while ((spot_node = head) != NULL)
	{
		head = head->next;
		free(spot_node->str);
		free(spot_node);
	}
}
