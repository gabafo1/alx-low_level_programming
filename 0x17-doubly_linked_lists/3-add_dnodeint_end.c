#include "lists.h"

/**
 *
 * add_dnoteint_end - add new node at
 * the end of dlistint_t
 *
 * @h: head of list
 * @n: value of element
 * Return: address of the new element
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new  = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = next;
	}
	else
	{
		*head = new;
	}
	new->prev = h;

	return (new);
}
