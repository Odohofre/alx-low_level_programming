#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: double pointer to the start of the list
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
