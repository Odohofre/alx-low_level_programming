#include "lists.h"
/**
 *  get_nodeint_at_index - returns the nth node
 *
 * @head: pointer to list
 * @index: index of the node
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *current = head;

	while ((i < index) && (current != NULL))
	{
		current = current->next;
		i++;
	}

	return (current ? current : NULL);
}
