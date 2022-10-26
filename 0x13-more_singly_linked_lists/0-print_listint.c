#include "lists.h"

/**
 * print_listint - Print all the elements of a list.
 * @h: head of a list
 *
 * Return: Number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
