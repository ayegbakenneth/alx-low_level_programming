#include "lists.h"
/**
 * dlistint_len - This function returns number of elements
 * @h: list starting point
 * Return: nodes number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int pen;

	pen = 0;
	if (h == NULL)
		return (pen);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		pen++;
		h = h->next;
	}
	return (pen);
}
