#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: pointer to the pointer to the head node of the list.
 *
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *removednode = (*head);

	*head = removednode->next;
	n = removednode->n;
	free(removednode);

	return (n);
}
