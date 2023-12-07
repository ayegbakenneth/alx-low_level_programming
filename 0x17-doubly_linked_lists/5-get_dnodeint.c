#include "lists.h"
/**
 * get_dnodeint_at_index - to returns nodes
 * @head: this is the list head
 * @index: node index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ten;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	ten = 0;
	while (head != NULL)
	{
		if (ten == index)
			break;
		head = head->next;
		ten++;
	}
	return (head);
}
