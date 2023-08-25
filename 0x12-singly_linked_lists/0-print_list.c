#include <stdio.h>
#include "lists.h"

/**
 * print_list - will print the elements of a linked list
 * @h: it is the pointer to the first node in the list
 *
 * Return: this is number of members in the list
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			nodes++;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
