#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the pointer to the head node of the list.
 * @idx: index at which a new node will be added.
 * @n: int value of the node to be added.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nextnode = *head, *newnode;

	if (idx == 0)
	{
		newnode = malloc(sizeof(size_t));
		if (!newnode)
			return (NULL);
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < idx - 1; i++)
	{
		nextnode = nextnode->next;
		if (!nextnode)
			return (NULL);
	}

	newnode = malloc(sizeof(size_t));
	newnode->n = n;
	newnode->next = nextnode->next;
	nextnode->next = newnode;

	return (newnode);
}
