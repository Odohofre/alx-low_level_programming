#include "lists.h"

/**
 * print_listint_safe - prints list with addresses
 * @head: pointer to head pointer of linked list
 * Return: number of nodes in list, exit(98) if failed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	long int diff;

	if (head == NULL)
		exit(98);

	while (head)
	{
		diff = head - head->next;
		num_nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num_nodes);
}
