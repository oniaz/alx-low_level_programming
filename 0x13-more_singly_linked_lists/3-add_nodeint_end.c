#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: address of the pointer to the head of the list.
 * @n: int value to be add to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
		return (*head);
	}

	lastnode = *head;

	while (lastnode->next)
		lastnode = lastnode->next;

	lastnode->next = newnode;

	return (newnode);
}
