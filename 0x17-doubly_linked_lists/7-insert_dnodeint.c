#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: double pointer to the head node.
 * @idx: the new node's position
 * @n: the value of the new node.
 *
 * Return: the address of the new node, or NULL if it failed or not possible.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *ptr = *h, *new_node;

	for (i = 0; ptr && i < idx - 1 && idx > 0; i++)
	{
		ptr = ptr->next;
		if (!ptr)
			return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		*h = new_node;
		new_node->next = ptr;
		if (ptr)
			ptr->prev = new_node;
		return (new_node);
	}
	new_node->prev = ptr;
	new_node->next = ptr->next;
	ptr->next = new_node;
	if (new_node->next)
		new_node->next->prev = new_node;

	return (new_node);
}
