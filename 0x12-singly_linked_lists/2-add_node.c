#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the current list head.
 * @str: String to be add to the newly added head node.
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;
	int length = 0;

	newhead = malloc(sizeof(list_t));

	if (!newhead)
		return (NULL);

	while (str[length] != '\0')
		length++;

	newhead->str = strdup(str);
	newhead->len = length;
	newhead->next = *head;

	*head = newhead;

	return (*head);
}
