#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer of the list head.
 * @n: int value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	newhead = malloc(sizeof(listint_t));
	if (!newhead)
		return (NULL);

	newhead->n = n;
	newhead->next = *head;

	*head = newhead;

	return (newhead);
}
