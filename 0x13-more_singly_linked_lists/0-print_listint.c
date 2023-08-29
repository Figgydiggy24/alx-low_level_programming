#include "lists.h"

/**
 * print_listint - will print all the elements of a list.
 * @h: it is the head of a list.
 *
 * Return: it is the numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t v = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		v++;
	}
	return (v);
}
