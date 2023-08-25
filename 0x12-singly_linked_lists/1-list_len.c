#include <stdio.h>
#include "lists.h"

/**
 * list_len - will count all the number of nodes in a linked list
 * @h: this is the pointer to the linked list
 *
 * Return: this is the length of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
