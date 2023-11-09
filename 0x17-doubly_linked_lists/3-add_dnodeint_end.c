#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double poninter to the head node.
 * @n: value of the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *ptr = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}

	while (ptr)
	{
		if (!ptr->next)
		{
			new_node->prev = ptr;
			ptr->next = new_node;
			ptr = new_node;
		}
		ptr = ptr->next;
	}
	return (*head);
}
