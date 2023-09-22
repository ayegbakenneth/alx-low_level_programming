#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - number of list element
 * @h: list argument
 * Return: list element
 */
size_t list_len(const list_t *h)
{
	size_t made = 0;

	while (h)
	{
		h = h->next;
		made++;
	}
	return (made);
}
