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

	if (*head == NULL || head == NULL)
		return (0);

	tmp = (*head);
	n = tmp->n;

	(*head) = (*head)->next;
	free(tmp);

	return (n);
}
