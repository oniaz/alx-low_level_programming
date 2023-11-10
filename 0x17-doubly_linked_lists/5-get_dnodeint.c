#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head node.
 * @index: the index of the node, starting from 0.
 *
 * Return: pointer to the node or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head; i++)
		head = head->next;
	return (head);
}
