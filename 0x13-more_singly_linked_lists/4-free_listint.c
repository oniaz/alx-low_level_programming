#include "lists.h"

/**
 * free_listint - Frees a list_t list.
 * @head: pointer to the head node of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *nextnode;

	while (head)
	{
		nextnode = head->next;
		free(head);
		head = nextnode;
	}
}
