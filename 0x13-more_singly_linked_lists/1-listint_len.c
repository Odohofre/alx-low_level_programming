#include "lists.h"

/**
 * listint_len - prints number of elements of list_t linked list
 * @h: linked list
 * Return: number of nodes/elements (length) in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
