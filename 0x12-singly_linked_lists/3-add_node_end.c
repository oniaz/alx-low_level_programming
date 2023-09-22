#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: Head of the list.
 * @str: String to be add to the newly added node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *current;
	int length = 0;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);


	while (str[length] != '\0')
		length++;


	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = NULL;


	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}

	current = *head;


	while (current->next)
		current = current->next;

	current->next = newnode;

	return (newnode);
}
