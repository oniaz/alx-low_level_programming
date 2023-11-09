#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: poninter to the head node.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
