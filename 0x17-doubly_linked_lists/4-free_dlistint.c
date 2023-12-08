#include "lists.h"

/**
 *
 * free_dlistint - free a dlistint_t list
 *
 *
 * @h: head of list
 * Return: no return
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        dlistint_t *tem;

        if (head != NULL)
                while (head->prev != NULL)
                        head = head->prev;
        while ((tmp = head ) != NULL)
        {
                head = head->next;
                free(tmp);
        }
}
