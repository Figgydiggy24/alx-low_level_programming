#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - it frees all node from memory
 * @head: This is the pointer to list_t
 * Return: Nothing
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		list_t *tmp = head->next;

		free(head->str);
		free(head);
		head = tmp;

	}

	free(head->str);
	free(head);
	head = NULL;

}
