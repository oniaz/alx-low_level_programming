#include "lists.h"

/**
 * dlistint_len - counts the elements in a dlistint_t list.
 * @h: poninter to the head node.
 *
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
