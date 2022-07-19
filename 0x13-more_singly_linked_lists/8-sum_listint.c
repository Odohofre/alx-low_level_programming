#include "lists.h"
/**
 * sum_listint - Adds the data in a linked list
 *
 * @head: first node in a list
 * Return: sum of all the data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
