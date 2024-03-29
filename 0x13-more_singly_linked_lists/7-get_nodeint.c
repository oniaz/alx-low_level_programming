#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list.
 * @index: index of the node to be returned
 *
 * Return: nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}

	return (head);
}
