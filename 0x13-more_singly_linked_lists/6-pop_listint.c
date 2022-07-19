#include "lists.h"
/**
 * pop_listint - deletes the head node
 * 
 * @head: pointer to the first element in the list
 * Return: the head node's data 
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;

	free(head);
	*head = tmp;

	return (n);
}
