#include "lists.h"

/**
 * add_nodeint_end - will add a new node at the end of a linked list
 * @head: the pointer to the pointer to the second node in the list
 * @n: the structure member
 *
 * Return: it is the address of the new element or (NULL if it fails)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *freshnode, *temp;

	freshnode = malloc(sizeof(listint_t));
	if (freshnode == NULL)
		return (NULL);

	freshnode->n = n;
	freshnode->next = NULL;
	if (*head == NULL)
	{
		*head = freshnode;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = freshnode;

	return (temp);
}
