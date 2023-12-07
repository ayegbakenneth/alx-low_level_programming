#include "lists.h"
/**
 * add_dnodeint_end - New node added at the end
 * @head: list head
 * @n: element value
 * Return: element new address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *k;
	dlistint_t *ken;

	ken = malloc(sizeof(dlistint_t));
	if (ken == NULL)
		return (NULL);
	ken->n = n;
	ken->next = NULL;
	k = *head;
	if (k != NULL)
	{
		while (k->next != NULL)
			k = k->next;
		k->next = ken;
	}
	else
	{
		*head = ken;
	}
	ken->prev = k;
	return (ken);
}
