#include "lists.h"

/**
 * pop_listint - will delete the head node of a linked list
 * @head: is the pointer to a pointer to the second node in the linked list
 *
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int v;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	v = (*head)->n;
	temp = (*head)->next;

	free(*head);
	*head = temp;

	return (v);
}
