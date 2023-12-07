#include "lists.h"
/**
 * add_dnodeint - This add a node from the starting
 * @head: list head
 * @n: Element value
 * Return: The new node address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ken;
	dlistint_t *f;

	ken = malloc(sizeof(dlistint_t));
	if (ken == NULL)
		return (NULL);
	ken->n = n;
	ken->prev = NULL;
	f = *head;
	if (f != NULL)
	{
		while (f->prev != NULL)
			f = f->prev;
	}
	ken->next = f;
	if (f != NULL)
		f->prev = ken;
	*head = ken;
	return (ken);
}
