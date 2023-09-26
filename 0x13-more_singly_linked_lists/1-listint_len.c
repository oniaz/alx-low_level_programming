#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked listint_t list.
 * @h: poiter to the head node of the list
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
