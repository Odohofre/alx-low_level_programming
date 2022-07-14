#include "lists.h"

/**
 * add_node - add node to beginning of linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* create new node */
	unsigned int len = 0;

	while (str[len]) /* get the len of the strength */
		len++;

	if (str == NULL) /* validate input */
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str); /* set node values */
	new_node->len = len;
	new_node->next = (*head);

	(*head) = new_node; /* set head to point to new node */

	return (new_node);
}
