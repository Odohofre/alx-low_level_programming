#include "lists.h"
/**
 * pop_listint - deletes the head node
 *
 * @head: pointer to the first element in the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	num = tmp->n;

	*head = tmp->next; /* link head to next node */
	free(tmp);

	return (num);
}
