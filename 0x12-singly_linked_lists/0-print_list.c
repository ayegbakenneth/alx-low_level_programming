#include <stdio.h>
#include "lists.h"
/**
 * print_list - elements of the linked list
 * @h: Pointer
 * Return: nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
