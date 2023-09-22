#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Head of the list.
 */
void free_list(list_t *head)
{
	list_t *nextnode;

	while (head)
	{
		free(head->str);
		nextnode = head->next;
		free(head);
		head = nextnode;
	}
}
