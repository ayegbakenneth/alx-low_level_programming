#include "lists.h"
/**
 * print_dlistint - function that prints all elements
 * @h: list head
 * Return: nodes number
 */
size_t print_dlistint(const dlistint_t *h)
{
	int wise;

	wise = 0;
	if (h == NULL)
		return (wise);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		wise++;
		h = h->next;
	}
	return (wise);
}
