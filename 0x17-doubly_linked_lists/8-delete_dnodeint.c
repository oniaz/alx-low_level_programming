#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: double pointer to the head node.
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i;

	if (!*head)
		return (-1);

	for (i = 0; i < index && ptr; i++)
	{
		ptr = ptr->next;
		if (!ptr)
			return (-1);
	}
	if (index == 0)
		*head = ptr->next;

	if (ptr->prev)
		ptr->prev->next = ptr->next;
	if (ptr->next)
		ptr->next->prev = ptr->prev;

	free(ptr);
	return (1);
}
