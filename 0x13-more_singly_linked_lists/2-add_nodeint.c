#include "lists.h"

/**
 * add_nodeint - will add a new node at the beginning
 * of a linked list
 * @head: the head of a list.
 * @n: the n element.
 *
 * Return: address of the new element. (NUll if it failed)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *freshnode;

	freshnode = malloc(sizeof(listint_t));

	if (freshnode == NULL)
		return (NULL);

	freshnode->n = n;
	freshnode->next = *head;
	*head = freshnode;

	return (*head);
}
