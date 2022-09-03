#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: pointer  to the head of the list
 * @n: integer
 * Return:
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!head)
		return (NULL);

	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	/* go to the last node and insert */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	new_node->next = NULL;
	new_node->prev = last;
	last->next = new_node;

	return (new_node);
}
