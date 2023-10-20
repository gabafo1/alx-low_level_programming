#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the beginning of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t elements;

	for (; h != NULL; h = h->next, elements++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	return (elements);
}
