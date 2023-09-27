#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index of
 * a listint_t linked list.
 * @head: pointer to the pointer to the head node of the list.
 * @index: index of the node that will be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pont, *node;

	if (!(*head) || !head)
		return (-1);

	if (index == 0)
	{
		pont = (*head)->next;
		free(*head);
		*head = pont;

		return (1);

	}
	node = *head;
	for (i = 0; i < index - 1; i++)
	{
		node = node->next;
		if (!node || !node->next)
			return (-1);
	}
	pont = node->next->next;
	free(node->next);
	node->next = pont;

	return (1);
}
