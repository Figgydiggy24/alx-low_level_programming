#include "lists.h"

/**
 * *reverse_listint - this reverses a linked list
 * @head: it is the pointer to the linked list
 *
 * Return: it is a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x, *q;

	x = NULL;
	q = (*head);

	while (q != NULL)
	{
		q = q->next;
		(*head)->next = x;
		x = (*head);
		(*head) = q;
	}
	(*head) = x;
	return (*head);
}
