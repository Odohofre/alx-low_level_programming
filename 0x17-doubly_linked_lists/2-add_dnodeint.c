#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head:pointer to head of the list
 * @n: value of new node
 * Return: address of new node or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

  /* allocate node */
  dlistint_t *new_node = malloc(sizeof(dlistint_t));

  /* check if new_node is null */
  if (new_node == NULL)
    return (NULL);

  /* put in new data */
  new_node->n = n;

  /* make next of new node as head and previous a NULL */
  new_node->next = *head;
  new_node->prev = NULL;

  if (*head != NULL)
  {
    *head = new_node;
    return (new_node);
  }

  /* make previous of former head point to new node*/
  (*head)->prev = new_node;

  (*head) = new_node;

  return (new_node);
}
