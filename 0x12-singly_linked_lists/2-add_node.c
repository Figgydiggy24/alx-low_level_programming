#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - it will add a node to the beginning of the list
 * @head: it is the pointer to the first node in the list
 * @str: it is the string to add to the list
 *
 * Return: it is the address of the new element, (NULL if it failed)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *freshnode = malloc(sizeof(*freshnode));

	if (freshnode == NULL)
		return (NULL);

	freshnode->str = strdup(str);
	freshnode->len = strlen(str);
	freshnode->next = *head;
	*head = freshnode;

	return (*head);
}
