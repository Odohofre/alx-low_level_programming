#include "lists.h"

/**
 * add_nodeint_end - add node to end of linked list
 * @head: linked list
 * @n: data for new node
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp; /* create new node */

	if (!n) /* check if malloc errored */
		return (NULL);

	new_node = malloc(sizeof(listint_t)); /* malloc for new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* set node values */
	new_node->next = NULL;

	if (*head == NULL) /* if no list nodes, set new_node to beginning */
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
