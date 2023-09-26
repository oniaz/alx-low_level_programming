#include "lists.h"

/**
 * free_listint2 - Frees a list_t list.
 * @head: pointer to the pointer to the head node of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *nextnode;

	if (!head)
		return;

	while (*head)
	{
		nextnode = (*head)->next;
		free(*head);
		(*head) = nextnode;
	}

	(*head) = NULL;
}
