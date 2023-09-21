#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: The list.
 *
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
