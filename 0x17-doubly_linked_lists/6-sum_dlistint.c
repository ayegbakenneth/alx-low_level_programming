#include "lists.h"
/**
 * sum_dlistint - this brings back the data
 * @head: Starting point
 * Return: Total data
 */
int sum_dlistint(dlistint_t *head)
{
	int coins;

	coins = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			coins += head->n;
			head = head->next;
		}
	}
	return (coins);
}
