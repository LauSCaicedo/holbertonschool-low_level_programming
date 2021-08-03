#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: Pointer to listint_t.
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
