#include "lists.h"

/**
 * listint_len - will return the number of elements in
 * a linked list.
 * @h: the head of a list.
 *
 * Return: the numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t v = 0;

	while (h != NULL)
	{
		h = h->next;
		v++;
	}
	return (v);
}
