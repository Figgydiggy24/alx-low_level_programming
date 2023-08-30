#include "lists.h"

/**
 * free_listint_safe - it will print all nodes of a linkedlist
 * @h: his is the head of the list
 * Return: this is the number of node printed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;

	if (j == NULL)
		return (len);

	while (*j != NULL)
	{
		listint_t *tmp;

		len++;
		if (*j > (*j)->next)
		{
			tmp = *j;
			*j = (*j)->next;
			free(tmp);
		}

		else
		{
			free(*j);
			*j = NULL;
		}

	}

	*j = NULL;

	return (len);
}
