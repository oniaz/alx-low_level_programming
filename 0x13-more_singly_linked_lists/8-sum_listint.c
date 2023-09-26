#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list.
 * @head: pointer to the head node of the list.
 *
 * Return: sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
