#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - this will add a node at the end of the list
 * @head: it is the pointer to a pointer
 * @str: it is the string to add to a list
 *
 * Return: it is the address of the new element, (NULL if it failed)
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *freshnode = malloc(sizeof(*freshnode));
	list_t *tmp;

	if (freshnode == NULL)
		return (NULL);

	freshnode->str = strdup(str);
	freshnode->len = strlen(str);

	if (*head == NULL)
	{
		*head = freshnode;
		freshnode->next = NULL;
		return (*head);
	}

		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		freshnode->next = tmp->next;
		tmp->next = freshnode;

	return (tmp);
}
