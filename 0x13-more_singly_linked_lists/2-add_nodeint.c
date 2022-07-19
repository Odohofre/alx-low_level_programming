#include "lists.h"

/**
 * add_nodeint - add node to beginning of linked list
 * @head: linked list
 * @n: data for new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)); /* create new node */

	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->next = (*head);

	(*head) = new_node; /* set head to point to new node */

	return (new_node);
}
