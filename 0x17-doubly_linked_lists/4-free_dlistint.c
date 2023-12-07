#include "lists.h"
/**
 * free_dlistint - to set a linked list free
 * @head: list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *coke;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((coke = head) != NULL)
	{
		head = head->next;
		free(coke);
	}
}
